// Room: /d/huanggon/shiwu.c

inherit ROOM;
#include <room.h>
void create()
{
	set("short", "ʯ��");
	set("long", @LONG
������������ں�԰������,ͨ���ɾ޴��ʵ�Ļ������ݳ�,������
���ȴ�����,����û�߰˸����Ʋ���,һ�Ѵ���������������.ʮ�����ʿΧ
����ʯ��Ѳ��,���ǿ��������й�Ѻ�ط���ʯ��.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shilaokanshou.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"hougardon",
  "north" : __DIR__"shilaozoulang",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);
  create_door("north","ʯ����");
	setup();
}

int valid_leave(object ob,string dir)
{
  if (present("kan shou",this_object())&&dir=="north") 
 return notify_fail("ʯ�ο��غٺ�һЦ:��̽��,û��.\n");
 return ::valid_leave(ob,dir);
}
