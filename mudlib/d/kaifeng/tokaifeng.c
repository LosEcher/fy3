// Room: /d/zhongzhou/wroad1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
���������ӿ��⸮�����ݸ��Ĺٵ�����������·�ΰ��Ϻã�����Ҳ
���١�����ͨ�򿪷⣬����ͨ�����ݡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east":"/d/zhongzhou/wroad3",
  "west":__DIR__"guandao1",
]));
	set("outdoors", "zhongzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
