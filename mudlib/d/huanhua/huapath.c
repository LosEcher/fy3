// Room: /d/huanhua/huapath.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ��ϸСʯ���̾͵�С·,��Ȼ��������,����ɨ��ʮ�ָɾ�,����
С������ĸо�,����һ������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"jianlu",
  "north" : __DIR__"huapath1",
]));

	setup();
	replace_program(ROOM);
}
