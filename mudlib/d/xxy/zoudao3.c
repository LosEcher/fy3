// Room: /d/xxy/zoudao3.c
#include <room.h>
inherit ROOM;

void create()
{
	set("short", "�ߵ�");
	set("long", @LONG
һ���������ߵ�,�����ǻ���,��������ٺ�,�Ǹ�����ֵĻ�ľ,����
���˵�����,�������ϸ�۲�,���ܿ�����඾���ڻ�ľ����Ϣ.����һ��
��ʯ����Ĵ���,���Ⱥ�ľ�Ź���.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"zoudao2",
  "north" : __DIR__"zhuting",
]));
       create_door("north","��ľ��","south",DOOR_CLOSED);
	setup();
	replace_program(ROOM);
}
