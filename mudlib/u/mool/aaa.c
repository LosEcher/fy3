// Room: /d/sandboy/shandao 
#include <ansi.h>
inherit ROOM; 
 
void create ()
{
      set ("short", "ɽ��");
      set ("long", @LONG
����һ���ľ���ɽ����̫��ů�������ͷ�ϣ�Ϫˮ�����õ��ڽű������� 
С���������ŷɹ���Զ�����֣����ߵ�����һ��ѿ��õ�ë��һֻ�� 
��«�ͷ����Ƕ�ë��ߣ���һ���չޡ�һ�������Լ��������Ų����Ĵֲ� 
���ѷ���һ��������һƬ���֣��������ǵĿ������� 
LONG);

      set("objects", ([ 
      "/d/obj/weapon/hammer/jiuhulu.c" : 1,
      __DIR__"obj/taoguan.c" : 1,
      __DIR__"obj/ciwan.c" : 1,
      "/d/obj/cloth/pobuyi" : 1,
]));
      set("outdoors","/d/jiangnan");
      set("item_desc", ([ 
  "����" : "һƬ�����֣���Լ�кü�ʮ�á� 
",
  "����" : "�����ë��ܶ࣬һɽһɽ�ģ�ɢ����Ũ�������㡣 
",
  "Ϫˮ" : "ɽȪ�Ӹߴ����£��γɵ�СϪ���� 
",
]));
      set("exits", ([ 
      "west" : __DIR__"zhulin",
      "east" : __DIR__"shandao",
]));

      setup();
}
void init()
{
      add_action("do_kan","kan");
}
int do_kan(string arg)
{
        object me,ob,sn;
        me = this_player();
        if (arg != "cuizhu") return 0;
        message_vision("�������ӣ��ҵ����չޡ�\n",me);
        ob=new("/d/sandboy/obj/taoguan");
        ob->move(me);
        return 1;
}





