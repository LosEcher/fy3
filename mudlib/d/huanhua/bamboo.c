// Room: /d/new/huanhua/bamboo.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һƬ��������,��ɫ����Ҷ�һ�����¶ˮ,�������һ��,Ψ��
����������쳹�ּ�.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/3e1.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"jianlu",
  "south" : __DIR__"bamboo1",
]));

	setup();
	replace_program(ROOM);
}
