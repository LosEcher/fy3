// Room: /d/quanzhou/mazhu.c

inherit ROOM;

void create()
{
	set("short", "��󹬴���");
	set("long", @LONG
��󹬵Ĵ��ų�����,���������������������,���Ⱥ�ɫ�Ĵ��Ÿ�
������,���滹�����˴�������.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"estreet2",
  "south" : __DIR__"zhendian",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
