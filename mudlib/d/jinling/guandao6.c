// Room: /d/jinling/guandao6.c

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
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"guandao7",
  "northup" : __DIR__"guandao5",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
