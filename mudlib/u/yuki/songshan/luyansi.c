// Room: /u/yuki/songshan/luyansi.c

inherit ROOM;

void create()
{
	set("short", "«����");
	set("long", @LONG
    «���º�С����������ɽ�ɴ�ű����书��ܸ�ĵط����ſ�
����ɽ�ɵĳ��Ͽ��ܣ�ֻ�о߱�һ�������ı��ŵ��Ӳ������ȥ
ȡ�书��ܸѧϰ��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"simen.c",
]));

	setup();
	replace_program(ROOM);
}
