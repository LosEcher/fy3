// Room: /u/uuui/xuedao/xuedao97.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������Ѫ���ŵ������ҡ�����ȥѪ���ŵ������书
�����Զ���һ�档����ʱ���������ӣ������Ͼ�Ȼ��һ
����ĳ���������û�а����ӡ������������η��
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/2");
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xuedao60",
]));

	setup();
	replace_program(ROOM);
}
