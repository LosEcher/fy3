// Room: /d/suzhou/meizhuang/heilang1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������÷�����Ƶ����ȡ�ͷ�����������������̸Ƕ��ɵ����ܣ���
�ڷ���ꡣ����÷�������ڣ���ʱ�����������㡣������÷ׯ��������
���Ǹ���ͤ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north":__DIR__"caoting",
	"east":__DIR__"heilang5",
	"west":__DIR__"heilang2",
  "south" : __DIR__"keting",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
