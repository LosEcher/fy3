#include <room.h>
inherit ROOM;

void init();
int do_jump(string arg);
int valid_leave(object me, string dir);

void create()
{
      set("short", "ʯ��");
      set("long", @LONG
������һ��ʯ�ң����ܶ����ɷ��������Ĵ�ʯͷ���ɣ�Լ��һ�̶��
��������ǽ�ڵ����м�����Ƕ��һ��ҹ���񣬷�����ӨӨ�Ĺ⣬����
������Χ�������ֻ�ǿյ�����ʲôҲû�У�
    
LONG );
      set("item_desc", ([
            "��ʯ" : "����ϸһ������һ����ʯ��һЩ����������ĥ��
��̫���ˡ�\n",
      ]));
     
      set("exits", ([
         
          "south": __DIR__"mangdong",
      ]));
      set("no_fight", 1);
      set("no_clean_up", 0);
      set("sleep_room", 1);
      setup();
}

void init()
{
      add_action("do_push", "push");
}

int do_push(string arg)
{

      object ob;
      object me = this_player();
      int dex = this_player()->query_dex();

      if (arg != "��ʯ" && arg != "out")
            return command("push "+arg);

      message_vision("$N�����˹�ȥʹ���ƶ���ʯ����Ľ��º�Ȼ¶��һ��
����һ�Ųȿյ�����ȥ��\n", me);
      if ((dex <= 30)&&(random(3)<2))
            message_vision("ֻ����ž����һ��$N���������ڿչȻ�����ʯ����ѹ��ƽƽ�ġ�\n", me);
      else
            message_vision("$N��һ��������ӱ��Ʈ��������Ŀյ��ϣ�\n", me);

     me->move(__DIR__"shishi2");

      return 1;
}


