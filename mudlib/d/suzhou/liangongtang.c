// Room: /d/suzhou/liangongtang.c

inherit ROOM;

void create()
{
	set("short","������");
	set("long", @LONG
����������������ķ����̣��������������κη��ߡ��˼����ӵ��ϰ�
Լ��ʮ��ͷ������������ʲô��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"chengnanjie3",
]));
	set("objects", ([ /* sizeof() == 1 */
		__DIR__"npc/fang":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
