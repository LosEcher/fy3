// Room: /u/oldsix/room1/taihu2.c

inherit ROOM;

void create()
{
	set("short", "̫��");
	set("long", @LONG
�����Ű���֮�ԣ���С�ۻ���һ��С�ۣ�����ˮ���������˺�Ҷ����������
ָ�㣬����֪��Ҷ�侹��ͨ·������ˮ����ȫ����Ҷ�ͺ��⣬�岨֮�У�������
Ҷ�����޷Ƿ���
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
    call_out("greeting",5,me);
}
void greeting(object me)
{
	me->move(__DIR__"taihu3.c");
}
