// dongjie.c ����


inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	�����ǳ�����Ķ��֣������߾��ǳ��������ˡ��������Ǹ�С��
�򣬲��㷱�������ϵ�����Ҳ��ϡ�١�������һ�ҿ�ջ����ջ�ſڹ��Ű�
���������翴�졯�Ķ����������Ѿ���˺���ˡ�������һ����լԺ�����
�����ϲ���ͭ���������������ߣ����ǳ�����������ˡ�
LONG
	);

	set("exits", ([
		"east" : __DIR__"dongmen",
		"west" : __DIR__"zhongxin",
		"north" : __DIR__"kedian1",
		"south" : __DIR__"fu-damen",
	]));

	set("objects", ([
		__DIR__"npc/seller" : 1,
	]));

	setup();
	replace_program(ROOM);
}