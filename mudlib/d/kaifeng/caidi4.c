// Room: /d/kaifeng/caidi4.c

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
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"caidi",
  "west" : __DIR__"caidi2",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
