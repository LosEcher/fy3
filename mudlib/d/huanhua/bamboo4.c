// Room: /d/new/huanhua/bamboo4.c

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
  __DIR__"npc/3e2.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dalu1",
  "west" : __DIR__"bamboo3.c",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
