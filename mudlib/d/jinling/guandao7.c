// Room: /d/jinling/guandao7.c

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
  "west" : __DIR__"to_yangzhou",
  "northeast" : __DIR__"guandao6",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
