// Room: /d/suzhou/meizhuang/midao1.c

inherit ROOM;

void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
�ܵ��������쳣��ֻ��ǽ���ϵ���һյ�͵ƣ���������ɫ��â��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"neishi",
  "down" : __DIR__"midao2",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
