#include <room.h>
inherit ROOM;

void create()
{
      set("short","������");
      set("long",@LONG
������һ�������ţ������Ǻ�ɫ��ɽׯΧǽ���ŵ��Ǳ߾���
ɽׯ�ĺ�ɽ�����ǽ��أ�����û��ׯ���������ǲ�׼������
���Ǳ��ŵ���Ҳ��������
LONG);
      set("outdoors", "xx");
      set("exits",([ /* sizeof() == 2 */
          "east" : __DIR__"path2",
          "south" : __DIR__"weiqiang",
          "north": __DIR__"weiqiang2",
      ]));
      set("objects", ([
            "/d/yandang/npc/dizi" : 4,
        ]));

      setup();
}

