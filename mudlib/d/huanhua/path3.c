// Room: /d/new/huanhua/path3.c

inherit ROOM;

void create()
{
	set("short", "С��");
	set("long", @LONG
Ժ��С��,����ɫʯ���̾�.���ߵİŽ�,�����֦Ҷ��ʱ�쵽·��.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"path2.c",
  "north" : __DIR__"path4.c",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
