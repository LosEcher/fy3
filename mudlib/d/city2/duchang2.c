// Room: /d/city2/duchang2.c

inherit ROOM;

void create()
{
	set("short", "�ĳ�");
	set("long", @LONG
"�������������������ͨ��ͬ�ķ���,��һ�ۿ�ȥ,���Ŷ�
����,����������Ϣ,�ϰ岻����������.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"duchang",
]));

	setup();
	replace_program(ROOM);
}
