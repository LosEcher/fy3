// Room: /u/uuui/xuedao/xuedao86.c

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
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"xuedao87",
  "east" : __DIR__"xuedao91",
  "west" : __DIR__"xuedao85",
]));

	setup();
	replace_program(ROOM);
}
