// Room: /d/suzhou/woshi.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����Ǹ���Ϣ�ĺõط���
LONG
	);
	set("no_fight",1);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"kezhan",
]));
	set("sleep_room",1);
	set("hotel",1);
	setup();
	replace_program(ROOM);
}
