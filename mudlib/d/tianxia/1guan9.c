// Room: /d/tianxia/1guan9
#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "���ȶ���");
  set ("long", @LONG
���ȵ������ͷ�ˣ�������ͭɫ��ľ����ס�˺���Ŀռ䣬����
���������С��������ǿ͸������������յ���ط�����һƬ��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"gardon",
  "west" : __DIR__"1guan8",
]));
  create_door("east","��ľ��","west",DOOR_CLOSED);
  setup();
}
