// Room: /u/swordman/yangzhou/damingshi1
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "���۱���");
  set ("long", @LONG
��������ΰׯ�ϵĴ��۱�������������������Ĵ��գ��м乩����
��������Ľ��񣬵����������ƣ�����������Ů���������ͷ��������һ��
���ţ��������ݡ���������Ե�䣬��Ǯ�Ʋ�ʩ�á������һС�ţ�ͨ����
����
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhuchi" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"chanfang",
  "south" : __DIR__"damingshi",
]));

        create_door("north", "С��", "south", DOOR_CLOSED);
  setup();
}
