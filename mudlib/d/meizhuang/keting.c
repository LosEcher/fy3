// Room: /d/suzhou/meizhuang/keting.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������д����ÿ��˵Ĵ�����������ڷ������Σ�������������һ��
������ֻ�������ʣ����ƿ���ʵ�����������Ҷ�װ�����������ڴ������ԣ�
Ŀ�⾼���������书���͡�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north" :__DIR__"heilang1",
  "south" : __DIR__"tianjing",
]));
	set("objects",([
		__DIR__"npc/dingjian":1,
		__DIR__"npc/shilingwei":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
