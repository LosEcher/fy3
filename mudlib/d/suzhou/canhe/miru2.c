// Room: /d/suzhou/canhe/miru1.c

inherit ROOM;

void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
�ܵ��������쳣������ǽ�����͵�΢���Ĺ���������ֱ����ŵķ�����
���ڳ���ˮ��������ʣ�Լ��ĽŲ����ˡ�ǰ����Զ������˿������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"northup" :__DIR__"miru1",
		"out"	  :__DIR__"miru3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
