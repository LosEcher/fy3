// Room: /d/tianxia/gardon
#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "С��԰");
  set ("long", @LONG
һ�޵�÷���м䣬�м���С���ӡ����ӵ���Χ����Щ����ȴ������
�˵ģ�һ����û�У���ľ���м䣬ԭ��ͦ�õĲ�ƺ��Ҳ�Ѿ�����̤
�ò������ˡ��������Ⱥ�ľ��ͨ��һ�����ӡ�
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"gardon2",
  "west" : __DIR__"1guan9",
]));
  create_door("west","��ľ��","east",DOOR_CLOSED);
  setup();
}
