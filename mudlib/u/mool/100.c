#include <ansi.h>;
inherit ROOM;

void create ()
{
  set ("short", "ʵ����");
  set ("long", @LONG
LONG);
        set("item_desc",([
"stuff" : "������ķ��֣������Ϻ�����һ���ط�������ȥ��Ҫ��Ҫ��һ�����Կ���\n",
"chaidui" : "�㣿\n",
         ]));



  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);

  setup();
}
void init()
{
        add_action("do_pull","pull");
        add_action("do_search","search");
}

 int do_pull(string arg)
{
        object me;
        me = this_player();
        if (arg != "stuff") return 0;
        message_vision("����ͻȻ�ѿ�һ������ֻ��$N������ȥ��\n",me);
        me->move("/u/mool/101");
        return 1;
}
int do_search(string arg)
{
        object me,ob,sn;
        me = this_player();
        if (arg != "chaidui") return 0;
        message_vision("�õ���Կ�ס�\n",me);
        ob=new("/u/yuki/obj/key");
        ob->move(me);
        return 1;
        }


