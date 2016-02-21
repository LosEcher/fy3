// Room: /d/zhongzhou/dangpu.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���������￪�ĵ��̡��⵱�̿��ܺ͹ٸ��й��ᡣ�����ﲻ����Ķ�
������·��ζ����ա���Ҳ���Կ�����ʲô��������ҪҲ����ȥ��һ�㡣
������Ǯ����Ҫ�������ط�Ҫ��һ�㡣
LONG
	);
	set("guarded", ([ /* sizeof() == 1 */
  "north" : ({ }),
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/zhousongtian.c" : 1,
  __DIR__"npc/yitai" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yanling",
]));

	setup();
	replace_program(ROOM);
}
