// Room: /d/kaifeng/road.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����������ϱ������������ţ�������ӯ�ţ�����ǰ���ϳ�Ѳʱ
���ߵĵ��������޵��Ǹ���ƽ���������ߵ��̲��ϡ����Ϲ�ȥ��Զ��
����ʯ���ţ���������£���������ȸ�š�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southup" : __DIR__"gongmen",
  "north" : __DIR__"zhuque",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
