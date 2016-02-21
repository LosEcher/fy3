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
	if(!me||environment(me) !=this_object()) return;
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
	if(str=="n"||str=="north"||str=="s"||str=="south")	{
		me->move(__DIR__"shuilu2");
		return 1;
					}
	if(str=="w"||str=="west")	{
		me->move(__DIR__"w3");
		return 1;
				}
	if(str=="e"||str=="east")	{
		me->move(__DIR__"w1");
		return 1;
					}
	write("û���������\n");
	return 1;
}
