// Room: /u/uuui/xuedao/xuedao4.c

inherit ROOM;

void create()
{
	set("short", "ʯ��ǰ");
	set("long", @LONG
�����Ѿ�����ħ���ܽ��ˡ������Ӳݴ�����ʯ����
��ȥ������Ȼ�γɵġ�����ʯ������Լ�ܿ�����ħ����
�����֡���Ȼ���źܳ�ʱ��û�йع��ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"xuedao5",
  "south" : __DIR__"xuedao3",
  "west" : __DIR__"xuedao6",
  "east" : __DIR__"xuedao1",
]));

	setup();
	replace_program(ROOM);
}
