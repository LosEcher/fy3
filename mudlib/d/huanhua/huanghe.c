// Room: /d/new/huanhua/huanghe.c

inherit ROOM;

void create()
{
	set("short", "�ƺ�С��");
	set("long", @LONG
�ƺ�С����������԰�еĳ���֮��,��������֮��,СС�ĳ���������ˮ.
���а�������Сľ��,�ķ�С����.��̶����,ˮ���ӵ�.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"9quqiao4",
  "south" : __DIR__"9quqiao3",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
