// Room: /d/wudang/shulin1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������ɽ�������羰�����쳣��·�߲�ʱ����ЩС���ӣ����ź���С�ۺ�
��Ŀ����㡣
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"shulin2",
  "northup" : __DIR__"shijie",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
