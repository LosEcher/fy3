// Room: /d/sandboy/shandao4.c

inherit ROOM;

void create()
{
	set("short", "һ�߹�");
	set("long", @LONG
����һ�����ն��ɽ�ȣ������±�֮��ľ��룬��Զ��Ҳ����������ߣ� 
�� խ����ֻ��ǿ��ɽһ����ͨ��.�±��Ϲ⻬�羵����ݲ�����ʯ�ڵ���ɫ�� 
�����Ϻڵ���ɫ������������һ����ɭ�ĸо���  
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/sandboy");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"shandao5",
  "southup" : __DIR__"shandao3",
]));

	setup();
	replace_program(ROOM);
}
