// Room: /d/xxy/caodi1.c

inherit ROOM;

void create()
{
	set("short", "�ݵ�");
	set("long", @LONG
һƬԼ�����ĻĲݵ�,����ʱ���������������,��С��̣��ȥ,��
���ѳ���,�Ĳݻ�ˮ,������Ţ,ÿһ̤��,��������,�������,��ˮ����
�ɽ�,ɷ������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"caodi",
  "north" : __DIR__"caodi2",
]));

	setup();
	replace_program(ROOM);
}
