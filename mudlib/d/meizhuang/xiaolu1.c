// Room: /d/meizhuang/xiaolu1.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
������һ���ľ���С·�ϣ�����÷����������Ȼ��û�����������ӣ�
�����ܸо���÷���ĵ��������ˣ���پ�����ٱ�������÷�������ƺ�¶
����ׯԺ����鹡�
LONG
	);
	set("outdoors", "meizhuang");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"xiaolu2",
  "north" : __DIR__"meizhuang",
]));

	setup();
	replace_program(ROOM);
}
