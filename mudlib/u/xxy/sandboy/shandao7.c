// Room: /d/sandboy/shandao7.c

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
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"shandao8",
  "southeast" : __DIR__"shandao6",
]));
	set("outdoors", "/d/sandboy");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
