//music yangzhou's ���¾�¥��¥
inherit ROOM;

void create()
{
	set("short", "���¾�¥��¥");
	set("long", @LONG
	���������¾�¥�Ķ�¥�ͷ���������ĺ�����������Ϣ��Ϣ������
�ͷ��ķ������ã����ʹ����Ը������ǵ�����˯��һ������ջ�����м���
��ͬ���ε��Է��������㲻ͬ���˵���Ҫ��

LONG
	);

	set("sleep_room", 1);
	set("no_fight", "1");
        set("hotel",1);

	set("exits", ([
		"down" : __DIR__"startroom",
	]));

	setup();
}

int valid_leave(object me, string dir)
{
	if ( dir == "down" ) me->delete_temp("rent_paid");

	return ::valid_leave(me, dir);
}

