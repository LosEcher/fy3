// Room: /d/xxy/yongdao1.c

inherit ROOM;

void create()
{
	set("short", "��");
	set("long", @LONG
һ����������,�������ϱ�����������С����,���ߵķ������϶�
��������,������[�伶����],��������[�Ҽ�����].
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"yongdao",
  "south" : __DIR__"wuwu",
  "north" : __DIR__"wowu",
]));

	setup();
	replace_program(ROOM);
}
