// Room: /u/uuui/xuedao/xuedao2.c

inherit ROOM;

void create()
{
	set("short", "�յ�");
	set("long", @LONG
������һƬ�յأ��������Ӳݴ������ݴ���������
��ɫ�Ĺ�ͷ����ϸ��ȥ����Ȼ���˹ǣ��е��˹��ϻ���
������Ѫ��������ë���Ȼ��
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xuedao1",
  "west" : __DIR__"xuedao3",
]));

	setup();
	replace_program(ROOM);
}
