// Room: /d/hengshan/tohs.c

inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
���������Ӻ�ɽ������������֮��ٵ���ɽ·�������Ǻ�ɽ��
�򣬶��Ͽ������������ݼ�Ĺٵ���
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "southeast":"/d/zhongzhou/wroad3",
  "northwest" : __DIR__"shanlu2",
]));
	set("outdoors", "hengshan");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
