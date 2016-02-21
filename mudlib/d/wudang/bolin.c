// Room: /u/xizhen/room/bolin.c
// Data: �Ϲ���(nangong)
// Time: ��Ԫ��1999��4��2�գ�����ʱ�䣺20ʱ15��23�롣




inherit ROOM;



void create()

{

	set("short", "����");
	set("long", @LONG
0LONG
	);
	set("outdoors", "wudang");
	set("exits", ([ /* sizeof() == 2 */
  "southdown" : "/d/hangzhou/lu3",
  "northup" : __DIR__"shijie",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/famu" : 1,
  __DIR__"npc/monkey" : 1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
