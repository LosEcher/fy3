// Room: /d/xxy/caodi2.c

inherit ROOM;

void create()
{
	set("short", "�ݵ�");
	set("long", @LONG
һƬԼ�����ĻĲݵ�,����ʱ���������������,��С��̣��ȥ,��
���ѳ���,�Ĳݻ�ˮ,������Ţ,ÿһ̤��,��������,�������,��ˮ����
�ɽ�,ɷ������.���ƺ���������.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"feishi",
  "south" : __DIR__"caodi1",
]));
	set("outdoors", "/d/xxy");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
