inherit ROOM;

void create()
{
      set("short","ɽ·");
      set("long",@LONG
����һ����ɽ��С·�����ѵ�ͨ��ɽ�ϣ���������·�ϵ�������һЩ
ϸ���ɳʯ�����Զ��������紵����Ҷ�������ɳɳ���죬������ǰ
������������С����������
LONG);
      set("outdoors", "xx");
      set("exits",([ /* sizeof() == 2 */
          "north" : __DIR__"shanlu2",
        ]));
      setup();
}

