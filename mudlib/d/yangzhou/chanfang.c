// Room: /u/swordman/yangzhou/chanfang
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������һ���ª��������ֻ�е���һ�Ų�ϯ��
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"damingshi1",
]));
        create_door("south", "С��", "north", DOOR_CLOSED);
  set("no_magic", 1);
  set("no_fight", 1);

  setup();
}
