// Room: /d/new/huanhua/huapath2.c

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
  "south" : __DIR__"huapath1.c",
  "north" : __DIR__"dating",
]));

	setup();
	replace_program(ROOM);
}
