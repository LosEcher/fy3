// Room: /u/uuui/xuedao/xuedao66.c

inherit ROOM;

void create()
{
	set("short", "��ʯС·");
	set("long", @LONG
������ʯС·�������ۣ���˵��ͨ��ʯ�Ρ���Ҳ��
�����Ǿ�ϸ��������졣Ҳ��������ĸо�����������ǰ
�ߡ�ȴ�е������ƺ����������֡�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"xuedao65",
  "west" : __DIR__"xuedao67",
]));

	setup();
	replace_program(ROOM);
}
