// Room: /u/uuui/xuedao/xuedao67.c

inherit ROOM;

void create()
{
	set("short", "��ʯС·");
	set("long", @LONG
����ͨ��ʯ�ε�С·��ȫ������ʯ�̳ɣ�·���Թ�
ͺͺ��ʲôҲû�У�����·����Լ������ʯ���ﴫ����
�ҽ�������Ϊ�����Ѿ���ʯ�Ų�Զ�ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"xuedao68",
  "east" : __DIR__"xuedao66",
]));

	setup();
	replace_program(ROOM);
}
