// Room: /u/oldsix/room1/taihu_1.c

inherit ROOM;

void create()
{
	set("short", "̫��");
	set("long", @LONG
��ĿԶ����ֻ���̲����죬Զˮ���죬������ͷ�����ܰ�ãã��һƬ����
��֪���׸����Ļ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
}
void init()
{
	object me;
	me=this_player();
	remove_call_out("greeting");
	call_out("greeting",1,me);
	add_action("do_hua","hua");
}
void greeting(object me)
{
	message_vision("$N����С�������ˡ�\n",me);
}
int do_hua(string str)
{
	object me;
	me=this_player();
	if(!str) 	{
		write("��Ҫ���Ļ���\n");
		return 1;
			}
	if(str=="n"||str=="e"||str=="w"||str=="north"||str=="east"||str=="west")
		{
		me->move(__DIR__"taihu_1.c");
		return 1;
		}
	if (str=="s"||str=="south") {
	switch(random(2))	{
		case 0 : me->move(__DIR__"taihu_1.c");
			  break;
		case 1:me->move(__DIR__"taihu_2.c");
			  break;
				}
	return 1;
					}
	write("û���������\n");
	return 1;
}
