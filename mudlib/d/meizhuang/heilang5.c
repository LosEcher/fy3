// Room: /d/suzhou/meizhuang/heilang1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������÷�����Ƶ����ȡ�ͷ�����������������̸Ƕ��ɵ����ܣ���
�ڷ���ꡣ����÷�������ڣ���ʱ�����������㡣�����м���ҡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north":__DIR__"heilang4",
	"east":__DIR__"chuangongfang2",
	"west":__DIR__"heilang1",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
