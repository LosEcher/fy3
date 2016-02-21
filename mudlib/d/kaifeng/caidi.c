// Room: /d/kaifeng/caidi.c

inherit ROOM;

void create()
{
	set("short", "�˵�");
	set("long", @LONG
��Ƭ��԰�Ӽ����������һЩʱ���߲ˡ������м���ľ׮����Ĳ�
���ӣ���һЩ���ٵ��߲��������������Ŀ��ȥ���ϴ��һƬ��԰�ӣ�
��Ȼ���������û�м��òˣ�������֡�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"caidi4",
  "west" : __DIR__"zoulang2",
  "north" : __DIR__"caidi3",
  "east" : __DIR__"caidi5",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
