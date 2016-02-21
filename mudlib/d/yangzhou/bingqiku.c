// Room: /u/swordman/yangzhou/bingqiku.c
#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����Ǳ����⣬�������������������ۻ����ҡ��������������𹿰����� 
�����������ڰ����̵����̽����̹�����ɫ�����ı���Ӧ�о��У���һʱ��֪
����ʲô�á�
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "southeast" : __DIR__"bingying2",
]));
       create_door("southeast", "����", "northwest", DOOR_CLOSED);

  set("objects", ([ /* sizeof() == 4 */
  __DIR__"npc/obj/gangdao" : 1,
  __DIR__"npc/obj/changjian" : 1,
  __DIR__"npc/obj/bishou" : 1,
  __DIR__"npc/obj/duanjian" : 1,
]));

  setup();
}
