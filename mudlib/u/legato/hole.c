#include <room.h>
inherit ROOM;

void create()
{
      set("short","ɽ��");
      set("long",@LONG
�谵��ɽ�����㿴��һ�������������︺�������������૵Ĳ�֪
˵Щʲô�������������һ㶣��������ֳ�һ˿��ϲ���������ɫ
��������������
LONG);
                     
                set("objects",([
         "/u/legato/npc/yunqing":1,
         ]));
           set("exits",([ /* sizeof() == 2 */
          "south" : __DIR__"hole1",
          ]));
      setup();
}

