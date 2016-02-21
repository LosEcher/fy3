// Room: /u/oldsix/room1/taihu_1.c

inherit ROOM;

void create()
{
	set("short", "̫��");
	set("long", @LONG
�����ڽ���ֻ��һ������֦�ܳɵ�ľ�ݣ�������ͨ��ˮ�档ңң����Զ��
�������У�¶��һ�Ƿ��ܡ�Ҳ��֪����ʲô�ط����������벻֪Ҫ��Ҫ�ϰ���
LONG
	);
	set("exits",([
		"southup" :"/d/suzhou/huan",
]));
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
	if(!me||environment(me)!=this_object()) return;
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
	if(str=="s"||str=="south")	{
		write("������½�أ�û�취����ȥ��\n");
		return 1;
					}
	if(str=="w"||str=="west"||str=="e"||str=="east")	{
		me->move(__DIR__"shuilu2");
		return 1;
				}
	if(str=="n"||str=="north")	{
		me->move(__DIR__"s2");
		return 1;
					}
	write("û���������\n");
	return 1;
}
