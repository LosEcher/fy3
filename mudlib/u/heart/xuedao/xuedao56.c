// Room: /u/uuui/xuedao/xuedao56.c

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
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"xuedao51",
  "south" : __DIR__"xuedao55",
  "east" : __DIR__"xuedao50",
  "west" : __DIR__"xuedao53",
]));

	setup();
	replace_program(ROOM);
}
