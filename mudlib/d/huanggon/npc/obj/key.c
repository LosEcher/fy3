inherit ITEM;
#include <ansi.h>

void create()
{
        set_name(CYN"��ͭԿ��"NOR, ({"key","yaoshi"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "����һ����ͨ����ͭԿ�ס�
�ʵ��ĵط�����ʹ��(use key).\n");
                set("unit", "��");
                set("no_get", 1);
                set("no_steal", 1);
                set("no_beg", 1);
                set("no_drop", 1);
                set("no_put", 1);
        }
        setup();
}
void init()
{
  add_action("do_use","use");
}
int do_use(string arg)
{
  object ob,env;

  ob=this_player();
  env=environment(ob);

  if (file_name(env)!="/d/huanggon/kezhanwoshi") return 0;
  new(__DIR__"42book5.c")->move(env);
  message_vision("$N��Կ����ǽ��һ��������һͱ,һ��ש
  ��������,�����Ǳ���.... ...\n",ob);
  destruct(this_object());
  return 1;
}
