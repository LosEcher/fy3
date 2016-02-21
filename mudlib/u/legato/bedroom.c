// Room: bedroom.c
// Date: Mar.2 1998

#include <room.h>
inherit ROOM;

void init();
int do_jump(string arg);
int valid_leave(object me, string dir);

void create()
{
      set("short", "����");
      set("long", @LONG
�����齣���ӵ����ң�����������࣬������ɢ�����������飬��ͷ������
һ��������������ɴ��С��͸��һƬҶӰ�����Ž�˿ȸ��������������
�����ϡ�ǽ�ڹ���һ��װ�Ѿ�����ɽˮ����hua),�Ե������񾲣����š�
    
LONG );
      set("item_desc", ([
            "hua" : "����ϸһ������������Ǿ������˶������ӣ���ĥ����Щ
�����ˡ�\n",
      ]));
     
      set("exits", ([
         
          "south": __DIR__"keting",
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

      if (arg != "hua" && arg != "out")
            return command("push "+arg);

      message_vision("$N��ʹ���⶯���ˣ���Ľ��º�Ȼ¶��һ����
��һ�Ųȿյ�����ȥ��\n", me);
      if ((dex <= 30)&&(random(3)<2))
            message_vision("ֻ����ž����һ��$N���������ڿչȻ�����ʯ����ѹ��ƽƽ�ġ�\n", me);
      else
            message_vision("$N��һ��������ӱ��Ʈ��������Ŀյ��ϣ�\n", me);

      me->move(__DIR__"mishi");

      return 1;
}


 

