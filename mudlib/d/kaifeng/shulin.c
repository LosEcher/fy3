// Room: /d/kaifeng/shulin.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һƬ�����֣���Ҷ�������أ��߲���֦Ҷ��¶�����������顣��ɫ��
С�ݾʹ���֮��Ŀ�϶�����������е��Ķ�����ɫ��С·�������ֲ�
Զ��������̨�����������ݷ���
LONG
	);
	set("no_clean_up", 0);
	set("objects",([
		"/npc/man3":2,
	]));
	set("exits", ([ /* sizeof() == 2 */
  "southeast":__DIR__"guandao1",
  "northwest" : __DIR__"dadao1",
  "east" : __DIR__"yuwang",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
