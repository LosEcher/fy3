// Room: /d/zhongzhou/chenglou.c

inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
      �������ѵ������ݵ������š��߸ߵĳ�¥����ȥ�᲻�ɴݡ�������һ¥�ݿ�����
��¥�Ķ��㡣��˵�����سǵĽ����书���ף���ȴ�ܺñ��䡣
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"xijiao",
  "east" : __DIR__"yanling2",
  "up" : __DIR__"chenglouup",
]));
	set("outdoors", "/d/zhongzhou");

	setup();
	replace_program(ROOM);
}
