// Room: /d/hangzhou/bibo.c

inherit ROOM;

void create()
{
	set("short", "�̲���");
	set("long", @LONG
������Բ�ε�ʯ���ź���ˮ��,�þ޴����ʯ���ݶ���,����ˮ���ʯ
������������̦,ˮ��������,ֱʹ�˻����Ŷ��ֻ�ˮ��.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"baidi1",
  "south" : __DIR__"liulang",
]));
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
