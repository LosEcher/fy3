// Room: /u/uuui/xuedao/xuedao58.c

inherit ROOM;

void create()
{
	set("short", "ǰ�㳡");
	set("long", @LONG
������һƬ�յأ���������ʯש����ɨ��һ����Ⱦ��
������Ƭ��Ҷ��û�С�ټ��Ĺ㳡�յ����ģ�ֻ�й㳡
�����һ����¯��һ�Ź����˸��ֱ����ı������ӣ���
û���ԵĶ����ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 4 */
  "out" : __DIR__"xuedao57",
  "north" : __DIR__"xuedao60",
  "south" : __DIR__"xuedao64",
  "west" : __DIR__"xuedao62",
]));

	setup();
	replace_program(ROOM);
}
