// Room: /d/quanzhen/shanlu4.c

inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
	������ɽ·�ľ�ͷ�����������һƬС���֣��۶��򶫣���������
ɽ��ɽ���ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "eastup" : __DIR__"shanjiao",
  "northwest" : __DIR__"shanlu2",
]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}
