#include <room.h>
inherit ROOM;

void create()
{
      set("short","�ľ�");
      set("long",@LONG
����ͨ����԰��һ��С·,·�����ϵȵĺ������̳�
������ïʢ��������͸����Ҷ֮��ķ�϶���䵽·����
�紵��,��Ҷҡ��,·���ϱ���Ծ�ž�Ө��͸������
��Ĺ�â.
LONG);
      set("outdoors", "xx");
      set("exits",([ /* sizeof() == 2 */
          "south" : __DIR__"lingjian",
          "north" : __DIR__"bank",
      ]));
      setup();
}

