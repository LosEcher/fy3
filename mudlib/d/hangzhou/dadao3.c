// Room: /d/hangzhou/dadao3.c

inherit ROOM;

void create()
{
	set("short", "���ִ��");
	set("long", @LONG
һ������ϱ��Ĵ��.����ʮ��������.���Ա�ֲ����.����ı���
��һ����԰��.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"dadao2",
  "east" : __DIR__"liulang",
  "south" : __DIR__"wuyuan",
]));

	setup();
	replace_program(ROOM);
}
