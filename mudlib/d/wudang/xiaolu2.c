// xiaolu2.c �ּ�С��
// by Xiang

#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "�ּ�С��");
  set ("long", @LONG
	������һ��С���ϣ��������������ӣ�����ɭɭ���������أ�������Ҷ
��������������������Ķ����������ƺ���һ����ª��СԺ��
LONG);

  set("outdoors", "wudang");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xiaoyuan.c",
  "south" : __DIR__"xiaolu1",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qingfeng.c" : 1,
]));

  setup();
}
