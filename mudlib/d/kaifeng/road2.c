// Room: /d/kaifeng/road2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
��������ϱ��Ľֵ��ǻ��ϳ�Ѳʱ��Ҫ�������������ţ�������
ӯ�ţ����ߵ��̲��ϡ��ֵ������������ĵ���ӡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"road3",
  "west" : __DIR__"gongyuan3",
  "south" : __DIR__"zhuque",
  "east" : __DIR__"daoxiang",
]));

	setup();
	replace_program(ROOM);
}
