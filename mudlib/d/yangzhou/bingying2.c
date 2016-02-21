// Room: /u/swordman/yangzhou/bingying2.c
#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��Ӫ");
  set ("long", @LONG
�����Ǳ�Ӫ���������鵽�����ǹٱ����е����佫��ָ�����жӲ�����
�Ķ������������е����š�����������Ϣ����ǽ��������˧��������ɫ��Ѳ
�������ܡ����������������ȫ�������Χ�˹��������ƿ�����̫�����
��һ�����š� 
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"bingqiku",
  "south" : __DIR__"bingying",
]));
       create_door("northwest", "����", "southeast", DOOR_CLOSED);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/guanbing" : 3,
  __DIR__"npc/duan" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)
{
        if (!wizardp(me) && objectp(present("guan bing", environment(me))) && 
                dir == "northwest")
                return notify_fail("�ٱ���ס�����ȥ·��\n");
        return ::valid_leave(me, dir);
}

