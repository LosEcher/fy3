// Room: /u/oldsix/room1/taihu3.c

inherit ROOM;

void create()
{
	set("short", "̫��");
	set("long", @LONG
������δ���꣬������ָ��С�۴�һ��«έ�������д��˹�ȥ��һ����ȥ��
������Ҷ����Ҷ�����ף�����һģһ������֮��Ҷ����Ҷ��ˮ��Ʈ������ʱһ��
�������㼴��ðٶˣ���ʱ������ȫȻ��ͬ��
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
	me->move(__DIR__"taihu4.c");
}
