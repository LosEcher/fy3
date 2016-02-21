#include <ansi.h>
inherit ROOM;

void init();
int do_tap(string arg);
int do_sit(string arg);
int do_jing(string arg);
int do_stand(string arg);
void delete_served(object me);
int valid_leave(object me, string dir);

void create()
{
      set("short", "����");
      set("long", @LONG
���������˵�С�������м��м��Ų���(table)�ͼ��Ų�
��(chair)��������ͯ�������ɨ�ţ������߽�������æ
������к���
LONG
      );

       set("objects", ([
               "/u/legato/npc/xiao shitong": 1,
      ]));


      set("no_fight", "1");
      set("no_steal", "1");

      set("item_desc", ([
            "table" : "һ�ŵ��ŵ���ľС�����������ˮ���̺��������ߡ�\n",
            "chair" : "һֻ������ƵĿ��Σ�����ȥҡҡ�λΣ������Ү��\n",
        ]));

      set("exits", ([
            "east"   : __DIR__"keting",
      ]));

      setup();
}

void init()
{
        add_action("do_tap",  "knock");
        add_action("do_sit",  "sit");
        add_action("do_stand","standup");
        add_action("do_jing", "jing");
}

int do_jing(string arg)
{
      object me;
      object heshang;

      if (!arg || arg != "xiao shitong")
      {
            return notify_fail("��Ҫ��ʲô��\n");
      }

      me = this_player();
            return notify_fail("��Ҫ����ͯ��ϧ����æ��\n");
      if (me->query("chanxin/save")==4)
      {
            message_vision("$N���������ؾ�����ͯһ��ơ�\n", me);
            me->set("chanxin/save",5);
            return 1;
      }
      message_vision("��ͯ��$N����һҾ˵���Ҽҹ��Ӳ������ǺȾơ�\n", me);
      return 1;
}

int do_tap(string arg)
{

      object me;
      object heshang;

      if (!arg || arg != "table")
      {
            return notify_fail("��Ҫ��ʲô��\n");
      }

      me = this_player();
            return notify_fail("�����������ӣ�ȴֻ���������\n");

      if( !me->query_temp("marks/sit") )
            return notify_fail("�����������ӣ�ȴû�뵽��ֻС������������������ܳ�ȥ�ˡ�");

      if( me->query_temp("marks/served") )
      {
            message_vision("��ͯ���ͷ��ض�$N˵�����ո����Ϲ�������ž�Ҫ��"+
                                "�һ�����������������\n", me);
            return notify_fail("");
      }

      message_vision("$N��������ǰ��������������棬��ͯһЦ�������к���\n", me);


      me->set_temp("marks/served", 1);
//    remove_call_out("delete_served");
      call_out("delete_served", 10, me);

      return 1;
}

void delete_served(object me)
{
        if ( objectp(me) )
              me->delete_temp("marks/served");
}

int do_sit(string arg)
{
      if ( !arg || (arg != "chair") )
            return notify_fail("��Ҫ��ʲô���棿\n");

      if (this_player()->query_temp("marks/sit"))
            return notify_fail("���Ѿ����˸���λ�ˡ�\n");

      this_player()->set_temp("marks/sit", 1);
      return notify_fail("�����˸���λ���£������ϲ衣\n");
}

int do_stand(string arg)
{
      if (this_player()->query_temp("marks/sit"))
      {
            this_player()->delete_temp("marks/sit");
            return notify_fail("���뿪��λվ��������\n");
      }

      return notify_fail("�㻹��վ���ţ������ѽ��\n");
}

int valid_leave(object me, string dir)
{
      int i;
      if (this_player()->query_temp("marks/sit"))
      {
            return notify_fail("�㻹�������ţ�������ѽ��\n");
      }
      return ::valid_leave(me, dir);
}

