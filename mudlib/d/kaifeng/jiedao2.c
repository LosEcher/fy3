// Room: /d/kaifeng/jiedao2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����������ϱ������������ţ�������ӯ�ţ�����ǰ���ϳ�Ѳʱ
���ߵĵ��������޵��Ǹ���ƽ���������ߵ��̲��ϡ����߹�ȥ��Զ����
�Ǵ�����¡������Ƿ�����
LONG
	);
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 3 */
	"east":__DIR__"fanta",
  "north" : __DIR__"jiedao1",
  "south" : __DIR__"nanying",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
