inherit ROOM;

void create()
{
      set("short","ɽ·");
      set("long",@LONG
С·Խ��Խ���ͣ����ѵ�ͨ��ɽ�ϣ���������·�ϵ�������һЩ
ϸ���ɳʯ�����Զ��������紵����Ҷ�������ɳɳ���죬������ǰ
������������С����������
LONG);
      set("outdoors", "xx");
      set("exits",([ /* sizeof() == 2 */
          "northup" : __DIR__"wangyuetai",
          "south": __DIR__"shanlu"
        ]));
      setup();
}

