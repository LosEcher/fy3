// Room: /d/new/huanhua/hqiuqiao1.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�̺�ӳ̶�������´䡣��ˮ��������һ��ž�,���Ʋ���,�ŵľ�
ͷ��һ��ˮ��,һ�������ˮ���д���.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"yxiangge",
  "north" : __DIR__"hqiuqiao",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
