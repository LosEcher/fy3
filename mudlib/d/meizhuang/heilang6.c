// Room: /d/suzhou/meizhuang/heilang1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������÷�����Ƶ����ȡ�ͷ�����������������̸Ƕ��ɵ����ܣ���
�ڷ���ꡣ����÷�������ڣ���ʱ�����������㡣�����Ǹ��¶��š�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east":__DIR__"heilang4",
	"north":__DIR__"yuedongmen",
	"west":__DIR__"heilang3",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
