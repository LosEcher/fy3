// Room: /d/new/huanhua/hqiuqiao.c

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
  "south" : __DIR__"hqiuqiao1",
  "northwest" : __DIR__"guihu",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
