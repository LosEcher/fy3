// Room: /u/uuui/xuedao/xuedao51.c

inherit ROOM;

void create()
{
	set("short", "�̲�ƺ");
	set("long", @LONG
������һƬ��ƺ��ϸ��ĳ�����Ҷ�����˵��棬����
����ͺ���̤���ƶˣ��о�ʮ����⡣��ƺ�п��ŵ��
�İ�ɫСС��Ұ������Ȼ�򵥲������������Ե�ʮ����
��������ȥ����һ��������С·�ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"xuedao78",
  "south" : __DIR__"xuedao56",
  "west" : __DIR__"xuedao52",
]));

	setup();
	replace_program(ROOM);
}
