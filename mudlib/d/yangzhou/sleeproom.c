// Room: /u/swordman/yangzhou/sleeproom
inherit ROOM;

void create ()
{
  set ("short", "���ݿ�ջ");
  set ("long", @LONG
���������ݾ�¥�Ķ�¥�ͷ���������ĺ�����������Ϣ��Ϣ������
�ͷ��ķ������ã����ʹ����Ը������ǵ�����˯��һ������ջ������
���ֲ�ͬ���ε��Է��������㲻ͬ���˵���Ҫ��
LONG);

  set("light_up", 1);
  set("sleep_room", 1);
  set("hotel",1);
  set("no_magic", 1);
  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"jiulou",
]));

  setup();
}
int valid_leave(object me, string dir)
{
        if ( dir == "down" ) me->delete_temp("rent_paid");

        return ::valid_leave(me, dir);
}

