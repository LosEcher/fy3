// Room: /d/new/huanhua/path2.c

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
  "north" : __DIR__"path3",
  "southeast" : __DIR__"path1",
]));

	setup();
	replace_program(ROOM);
}
