// Room: /d/new/huanhua/huapath1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ��ϸСʯ���̾͵�С·,��Ȼ��������,����ɨ��ʮ�ָɾ�,����
С������ĸо�,����һ������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/binu.c" : 2,
]));
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"huapath2",
  "south" : __DIR__"huapath",
  "west" : __DIR__"7qulang",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
