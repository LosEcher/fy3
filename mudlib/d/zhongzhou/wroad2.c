// Room: /d/zhongzhou/wroad1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
���������ӿ��⸮�����ݸ��Ĺٵ�����������·�ΰ��Ϻã�����Ҳ
���١�����ͨ�򿪷⣬���������ݸ��������Ǹ���·�ڡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"wroad3",
  "east":__DIR__"wroad1",
]));
	set("outdoors", "zhongzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
