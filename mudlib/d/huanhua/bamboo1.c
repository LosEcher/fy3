// Room: /d/new/huanhua/bamboo1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һƬ��������,��ɫ����Ҷ�һ�����¶ˮ,�������һ��,Ψ��
����������쳹�ּ�.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"bamboo2",
  "north" : __DIR__"bamboo",
]));

	setup();
	replace_program(ROOM);
}
