// Room: /d/yandang/jiedao1.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
ԶԶ��,ǰ�������һ��С��,���糿�����������,�м��ƴ�����
����������,��·�ߵ�һ��ʯ����,���ŵ���'ܽ����',��������㵴ɽ
�µ�ΨһС����.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : "/d/hangzhou/dalu2",
  "north" : __DIR__"jiedao",
]));
	set("outdoors", "/d/yandang");

	setup();
	replace_program(ROOM);
}
