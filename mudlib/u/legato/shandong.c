inherit ROOM;

void create()
{
      set("short","ɽ��");
      set("long",@LONG
������һ��ϸ����ɽ��������ܺڣ����������ߵ�ɽ�ڣ��ܳ�ʪ
��ʱ����ˮ����������ɽ����С����ֻ������������������һ��
����ǰ�ߣ��������㿴��һ˿������ǰ�����˹���!
LONG);
          set("exits",([ /* sizeof() == 2 */
          "south" : __DIR__"midao",
         "north" : __DIR__"mangdong",
      ]));
      setup();
}

