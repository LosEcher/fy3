// Room: /u/swordman/yangzhou/zzroad2.c

inherit ROOM;

void create()
{
	set("short", "�ɿ�·");
	set("long", @LONG
������ͨ��ȥ���ݳǵĶɿڣ�ǰ����ǹ����������򱱾������ݳǡ�
LONG
	);
	set("light_up", 1);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"zzroad1",
  "south" : __DIR__"dukou",
]));
	set("outdoors", "/u/swordman");

	setup();
	replace_program(ROOM);
}
