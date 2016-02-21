// Room: /d/suzhou/quanxia.c

inherit ROOM;

void create()
{
	set("short", "����Ȫ��");
	set("long", @LONG
�㷢���Լ���վ��һ̶Ȫˮ֮�С������˿�Ȫˮ���˳���΢΢�е����⡣��
����ʯ�ͱڰ�Χ�ţ��ͱ��Ͼ��Ǹ���֮ӡ������ǰ����ʵ���˲���������̧ͷ��
��ֻ����գ�Ҫ��������ȥ������ֻ������ȥ�ˡ�
LONG
	);
	set("resource/water",1);
	set("objects",([
		__DIR__"obj/gujian" :1,
	]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
}
void init()
{
	object me;
	add_action("do_climb","climb");
}
int do_climb()
{
	object me;
	me=this_player();
	message_vision("$N˳���ͱ�С�������������ȥ��\n",me);
	tell_room(__DIR__"jianchiquan",me->query("name")+"�ӳ�������������\n");
	me->move(__DIR__"jianchiquan");
	return 1;
}
