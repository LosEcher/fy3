// Room: /d/suzhou/canhe/dating.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���������ӭ���ǽͷ�Ϲ���һ����������һ���Ż��۵����������������ϣ�
�ֳ����ңָǰ����һ��־�������������־�����顣����վ��һλ�������ӣ�
�������ڻ��У���ûע�⵽�������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"qianting",
		"east":__DIR__"houting",
]));
	set("objects",([
		__DIR__"npc/murongfu":1,
]));
	set("no_clean_up",0);

	setup();
	replace_program(ROOM);
}
