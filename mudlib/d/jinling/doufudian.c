// Room: /d/jinling/doufudian.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�ۣ��ö���ร�����ۿ�ȥ��ֻ���ſ����˺ó�һ�����顣��̧ͷһ��
����߸ߵĹ���һ���Ҷ�,д�š���ˮ��������Ŷ��ԭ��!
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"changjie5.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yanniang.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
