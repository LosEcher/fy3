// xijie.c ����


inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	�������������ƶ����յľ۾��������ֱ������������ֵ���Ҳ��
���������ҵöࡣ��������һ�����ʧ�޵�С���Ѿ�ҡҡ��׹�ˡ�������
һ���Ͱ���é�ݣ������ǳ��������š�������ת�����������ߵ����������
���ˡ�
LONG
	);

	set("exits", ([
		"east" : __DIR__"zhongxin",
		"north" : __DIR__"minju2",
		"south" : __DIR__"xiaomiao",
		"west" : __DIR__"ximen",
	]));

	set("objects", ([
		__DIR__"npc/punk" : 1,
	]));

	setup();
	replace_program(ROOM);
}