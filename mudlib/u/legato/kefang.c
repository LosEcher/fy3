

inherit ROOM;
#include <room.h>

void create()
{
      set("short","�ͷ�");
      set("long",@LONG
�����д�������Ϣ�ķ��䣬��ǽ�ĵط���һ�Ŵ󴲣����ӵ��м��
��¯��������ɢ�����������������ߵ������ϰڷ��ű�īֽ�⣬��
�����Ӽ���ȴ��һ��������.
LONG);
         
         set("exits",([ /* sizeof() == 1 */
          "east"    : __DIR__"bank",
         
      ]));
      set("valid_startroom","1");
      set("sleep_room","1");
      setup();
}

