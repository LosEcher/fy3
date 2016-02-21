// Room: /d/quanzhou/xiaolu.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
һ��С·,�����ǲ���Ĺ���,���е÷ǳ�����,΢�紵��,��Ҷ�� 
����,Զ��������ͯ�ĵ��� 
LONG
	);
	set("no_clean_up", 0);
	set("no_cleanup", 1);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mutong.c" : 1,
  __DIR__"npc/shuiniu.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"dalu3",
  "north" : __DIR__"caodi",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
