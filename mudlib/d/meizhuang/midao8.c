// Room: /d/suzhou/meizhuang/midao1.c

inherit ROOM;

void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
�ܵ��������쳣������Զ����һյ�͵ƣ���Щ�ط��͵���Ϩ������һ
Ƭ��ڣ�Ҫ�����������ɣ����ּ��ƹ⡣��ֻ���������������Ϻ���׳�
ʪ֮����ֻ������������֮�ס�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"up":__DIR__"midao7",
	"west":__DIR__"midao9",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
