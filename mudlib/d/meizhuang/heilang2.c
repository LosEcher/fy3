// Room: /d/suzhou/meizhuang/heilang1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������÷�����Ƶ����ȡ�ͷ�����������������̸Ƕ��ɵ����ܣ���
�ڷ���ꡣ����÷�������ڣ���ʱ�����������㡣����÷��֮���ƺ���
����ݡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west":__DIR__"chuangongfang1",
	"east":__DIR__"heilang1",
	"north":__DIR__"heilang3",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
