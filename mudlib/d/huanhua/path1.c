// Room: /d/huanhua/path1.c

inherit ROOM;

void create()
{
	set("short", "С��");
	set("long", @LONG
Ժ��С��,����ɫʯ���̾�.���ߵİŽ�,�����֦Ҷ��ʱ�쵽·��.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"xiaoyuan",
  "northwest" : __DIR__"path2",
]));

	setup();
	replace_program(ROOM);
}
