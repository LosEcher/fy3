// Room: /d/huanhua/hhxi.c

inherit ROOM;

void create()
{
	set("short", "佻�Ϫ");
	set("long", @LONG
��ɽ�����ʶ��µ�һ��СϪ��,������®�Ļ�԰,�ļ��в�ͬ�Ļ���
��Ϫ����Ư������,Ϫ��һ������С��ͨ��Ϫ�ϵ�һ��С��.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"river_room",
  "north" : __DIR__"9quqiao",
]));

	setup();
	replace_program(ROOM);
}
