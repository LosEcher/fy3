// Room: /d/new/huanhua/path4.c

inherit ROOM;

void create()
{
	set("short", "С��");
	set("long", @LONG
Ժ��С��,����ɫʯ���̾�.���ߵİŽ�,�����֦Ҷ��ʱ�쵽·��.
��һ��С��¥Ϊ��ü��,������һ������,��֪����δ�.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"changlang1.c",
  "north" : __DIR__"zhengmei.c",
  "south" : __DIR__"path3.c",
]));

	setup();
	replace_program(ROOM);
}
