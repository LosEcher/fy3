// Room: /u/uuui/xuedao/xuedao65.c

inherit ROOM;

void create()
{
	set("short", "��ʯС·");
	set("long", @LONG
����ͨ��ʯ�ε�С·��ȫ������ʯ�̳ɣ�·���Թ�
ͺͺ��ʲôҲû�У�����·����Լ������ʯ���ﴫ����
�ҽ�����
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"xuedao66",
  "east" : __DIR__"xuedao61",
]));

	setup();
	replace_program(ROOM);
}
