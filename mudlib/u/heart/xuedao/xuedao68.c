// Room: /u/uuui/xuedao/xuedao68.c

inherit ROOM;

void create()
{
	set("short", "��ʯС·");
	set("long", @LONG
���������߾͵���ʯ�Σ���ʯ�̳ɵ�С·���Ѿ�ĥ
��ʮ�ֹ⻬��������Ѫ���ŵ��Ź�����ϸ�����Ψһ
���ĵط���ͬ���ǡ�·�����Գ������ָ����ܵ��Ӳ�
��Լ�����ܿ���һЩ�׹ǡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"xuedao67",
  "northwest" : __DIR__"xuedao69",
]));

	setup();
	replace_program(ROOM);
}
