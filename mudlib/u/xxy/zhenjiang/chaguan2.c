//musix zhenjiang 's ������ݶ�¥
inherit ROOM;

void create()
{
	set("short", "������ݶ�¥");
	set("long", @LONG
	�����Ǵ�����ݵĶ�¥�ͷ���������ĺ�����������Ϣ��Ϣ��

LONG
	);

	set_light(0);
	set("sleep_room", 1);
	set("no_fight", "1");
        set("hotel",1);

	set("exits", ([
		"down" : __DIR__"chaguan",
	]));

	setup();
}

int valid_leave(object me, string dir)
{
	if ( dir == "down" ) me->delete_temp("rent_paid");

	return ::valid_leave(me, dir);
}

