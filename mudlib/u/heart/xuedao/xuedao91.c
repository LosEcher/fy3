// Room: /u/uuui/xuedao/xuedao91.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������һƬ����бб��С���֣��������ߣ�������
ÿ��������һ��Ӫ�����������ӡ���Ҷ�л����̣�����
���ǳ���ҧ������ɫ�ߺۡ�ϸϸ�����˵��Ǻ��ܼ�����
�������Լ��ѵ���ǰ��ȥ��
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xuedao90",
  "west" : __DIR__"xuedao86",
]));

	setup();
	replace_program(ROOM);
}
