// Room: /d/kaifeng/jiedao1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����������ϱ������������ţ�������ӯ�ţ�����ǰ���ϳ�Ѳʱ
���ߵĵ��������޵��Ǹ���ƽ���������ߵ��̲��ϡ�������ǿ��⸮��
���ã�������һ��Ϳ��Գ����ˡ�
LONG
	);
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"kaifeng",
  "north" : __DIR__"jiedao",
  "south" : __DIR__"jiedao2",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
