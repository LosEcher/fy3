// Room: /d/jinling/to_yangzhou.c

inherit ROOM;

void create()
{
	set("short", "���ݵ�");
	set("long", @LONG
�����ٵ�һֱͨ���꣬�����Ǹ�С���У�����Ϊ�����λ�õ�
���⣬�����Ǳ��ұ���֮�ء��㿴��һ�£��������˻�ͦ�ࡣ
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/yangzhou/dongmen",
  "east" : __DIR__"guandao7",
]));
	set("outdoors", "/d/jingling");

	setup();
	replace_program(ROOM);
}
