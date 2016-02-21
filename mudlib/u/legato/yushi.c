// Room: bathroom.c

#include <ansi.h>
inherit ROOM;

void init();
int do_tuo(string arg);
int do_chuan(string arg);
int do_push(string arg);
int valid_leave(object me, string dir);

void create()
{
      set("short", "ԡ��");
      set("long", @LONG
���������˵�Сԡ�ң�������һ��������������Ƿ��ɵĺð취
����ǽ����һ��С��ť(button)�����ϴ���һ�����ɵ�����ͷ��
LONG
      );

      set("no_fight", "1");
      set("no_steal", "1");

      set("item_desc", ([
            "button" : "һ��ϴ���С��ť��һ���ͳ�ˮ�ٰ��͹رա�\n",
      ]));

      set("exits", ([
            "west"   : __DIR__"workroom",
      ]));

      setup();
}

void init()
{
        add_action("do_push","push");
        add_action("do_tuo", "tuo");
        add_action("do_chuan", "chuan");
}

int do_tuo(string arg)
{
      object me;
      object ob;
      string str;
      if (!arg)
            return notify_fail("������ɶ��\n");
      if (arg=="all")
            return notify_fail("һ��һ��������ɶ����\n");
      me = this_player();
      if (me->query_temp("mark/bathing")>=1)
            return notify_fail("���Ѿ��ǳ������Ļ��ѣ�\n");
      if( !objectp(ob = present(arg, me)) )
            return notify_fail("������û������������\n");
      if( (string)ob->query("equipped")!="worn" )
            return notify_fail("�㲢û��װ������������\n");

      if( ob->unequip() )
      {
            if( !stringp(str = ob->query("unequip_msg")) )
            {
                  switch(ob->query("armor_type"))
                  {
                        case "cloth":
                        case "armor":
                        case "surcoat":
                        case "boots":
                              str ="$N��$n����������\n";
                              break;
                        case "bandage":
                              str ="$N��$n���˿ڴ�����������\n";
                              break;
                        default:
                              str = "$Nж��$n��װ����\n";
                  }
            }
            message_vision(str, me, ob);
            me->set_temp("mark/bathing",1);
            return 1;
      }
      else
            return 0;
}

int do_chuan(string arg)
{
      object me;
      object ob;
      string str;
      me = this_player();
      if (me->is_busy())
            return notify_fail("�㻹û��ϴ���ء�\n");
      if (!arg)
            return notify_fail("���봩ɶ��\n");
      if (arg=="all")
            return notify_fail("һ��һ��������ɶ����\n");
      if( !objectp(ob = present(arg, me)) )
            return notify_fail("������û������������\n");

      if( ob->query("equipped") )
            return notify_fail("���Ѿ�װ�����ˡ�\n");
      if (me->query_temp("mark/bathing")==2)
            return notify_fail("�㻹û��ˮ���봩�·���\n");
      if( (ob->query("female_only") && (string)me->query("gender") =="����") )
            return notify_fail("����Ů�˵���������һ��������Ҳ�봩����Ҳ���ߣ�\n");

      if( ob->wear() )
      {
            if( !stringp(str = ob->query("wear_msg")) )
                  switch( ob->query("armor_type") )
                  {
                        case "cloth":
                        case "armor":
                        case "boots":
                              str = "$N����һ" + ob->query("unit") + "$n��\n";
                              break;
                        case "head":
                        case "neck":
                        case "wrists":
                        case "finger":
                        case "hands":
                              str = "$N����һ" + ob->query("unit") + "$n��\n";
                              break;
                        case "waist":
                              str = "$N��һ" + ob->query("unit") + "�������䡣\n";
                              break;
                        default:
                              str = "$Nװ��$n��\n";
                  }
            message_vision(str, me, ob);
            me->delete_temp("mark/bathing");
            return 1;
      }
      else
            return 0;

}

int do_push(string arg)
{

      object me;

      if (!arg || arg != "button")
      {
            return notify_fail("��Ҫ��ʲô��\n");
      }

      me = this_player();
      if (me->query_temp("mark/bathing")==2)
      {
            if (me->is_busy())
                  return notify_fail("�㻹û��ϴ���ء�\n");
            me->set_temp("mark/bathing",3);
            tell_object(me,"���ٰ���һ�°�ť��ͷ�ϵ���ˮ��ʧ�ˣ������ȫ���������\n",me);
            me->set("qi",me->query("eff_qi"));
            me->set("jing",me->query("eff_jing"));
      }
      else
      {
            if (me->query_temp("mark/bathing")>=1)
            {
                  me->set_temp("mark/bathing",2);
                  tell_object(me,"�㰴��һ�°�ť��һ����ˮ�ּ����������������㼱æ����ë��,����,ɳ��ϴ��ˮ  .............ϴ�����������������ϵ�ƣ��һɨ����,��ˬѽ\n",me);
                  me->start_busy(5);
                  me->set_temp("washing", 1);
                  call_out( "compelete_wash", 10, me);
            }
            else
            {
                  tell_object(me,"�㰴��һ�°�ť����ͷ�ϵ�������ˮ�ൽ��Ĳ������㲻�����˸�����\n",me);
                  me->set_temp("mark/guang",1);
            }
      }
      return 1;
}

int valid_leave(object me, string dir)
{
      if (me->is_busy())
            return notify_fail("�㻹û��ϴ���ء�\n");
      if (me->query_temp("mark/bathing"))
      {
            return notify_fail("��һ���Լ���û�д��·�,��æ���˻�ȥ����\n");
      }
      else
            return ::valid_leave(me, dir);
}



private void compelete_wash(object me)
{
      me->delete_temp("washing");

      tell_object(me, "��ϴ���ˡ�\n");
      return;
}

