// Room: /d/jinling/guandao4.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
����һ���ɹٸ�����ĵ�·���ǳ����������ݰ�������
���ϱ���ͨҪ�����������Զ��ˣ���ʱ��������ĺ͸ϳ���
������

LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"yizhan.c",
  "south" : __DIR__"guandao5.c",
]));
	set("outdoors", "/d/jingling");

	setup();
	replace_program(ROOM);
}
