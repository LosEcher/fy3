// Room: /u/uuui/xuedao/xuedao6.c

inherit ROOM;

void create()
{
	set("short", "��ħ��");
	set("long", @LONG
���������ħ���ˡ������ǽ����������ձ��ѣ���
����������ţ��谵�Ĺ����У�����Լ���������ǽ�Ͽ�
��һЩʯ��ʯ���������Ǹ���ħ�������������Ÿֲ�
���˲������ʯ��ͻ����ǽ�档
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/4");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"xuedao7",
  "east" : __DIR__"xuedao4",
]));

	setup();
	replace_program(ROOM);
}
