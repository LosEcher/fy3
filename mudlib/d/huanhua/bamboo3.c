// Room: /d/new/huanhua/bamboo3.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һƬ��������,��ɫ����Ҷ�һ�����¶ˮ,�������һ��,Ψ��
����������쳹�ּ�.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"guihu",
  "north" : __DIR__"bamboo2",
  "east" : __DIR__"bamboo4",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
