// Room: /u/uuui/xuedao/xuedao55.c

inherit ROOM;

void create()
{
	set("short", "�̲�ƺ");
	set("long", @LONG
������һƬ��ƺ��ϸ��ĳ�����Ҷ�����˵��棬��
������ͺ���̤���ƶˣ��о�ʮ����⡣��ƺ�п��ŵ�
��İ�ɫСС��Ұ������Ȼ�򵥲������������Ե�ʮ��
�ؾ���
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xuedao56",
  "west" : __DIR__"xuedao54",
]));

	setup();
	replace_program(ROOM);
}
