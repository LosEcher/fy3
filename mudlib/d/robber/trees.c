// Room: /d/robber/trees.c

inherit ROOM;

void create()
{
	set("short", "�ɰ���");
	set("long", @LONG
ϡ���һƬ����,��������һ����Ҷ,���������Ҷ�����ѵ�����,��һ
�ð�������,һ���ϴ����ҡҪ��׹,�Աߵĺ�֦�Ϲ¶���վ��һֻ��ѻ.
�򶫿�ȥ,��һƬ�س�,
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"trees2",
  "west" : __DIR__"trees1",
  "east" : __DIR__"tomb",
]));
set("outdoors","/d/jiangnan");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wuya.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
