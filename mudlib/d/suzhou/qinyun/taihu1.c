// Room: /u/oldsix/room1/taihu1.c

inherit ROOM;

void create()
{
	set("short", "̫��");
	set("long", @LONG
���к��ϣ�����ת�ۣ���ת����һ�����֮�У���Ŀ��ȥ�������̲����죬
Զˮ���졣�뵽���Ѳ���ˮ�ԣ����ɵð����ľ���
LONG
	);
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
}
int init()
{
	object me;
	me=this_player();
	me->set_temp("oldsix_flag/ab",1);
	call_out("greeting",5,me);
}
void greeting(object me)
{
	me->move(__DIR__"taihu2.c");
}
