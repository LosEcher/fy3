// Room: /d/zhongzhou/chalou.c

inherit ROOM;

void create()
{
	set("short", "���԰��¥");
	set("long", @LONG
������һ���¥����˵��һ�Ҳ�С�Ĳ�¥���ɵ���ȴû�����ˡ�����
�����и�¥�����£�΢΢������͸����ζ����������ͷ�е㷢�衣
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "up" : __DIR__"meigui.c",
  "east" : __DIR__"wendingnan2",
  "down" : __DIR__"yanguan",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
