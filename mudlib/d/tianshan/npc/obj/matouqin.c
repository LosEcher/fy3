#include <weapon.h>
inherit HAMMER;
int count;
void create()
{
	set_name("��ͷ��", ({"matou qin", "qin"}));
	if( clonep() )
                set_default_object(__FILE__);
 else {
	set("long","һ�ѳ���,���˵�̳���ͷ��.\n");
	set("unit", "��");
	set("weight", 10);
	set("value",100);
	set("no_drop",1);
     }
   init_hammer(4);
     setup();
 }
void init()
{
        add_action("do_play","play");
}
int do_play(string arg)
{
  object ob=this_player();
  if (!arg||arg!="��ͷ��") return notify_fail("��Ҫ��ʲô?\n");
  if (count>=3)  {
 message_vision("$N����$n,����ĳ����ԭ����.\n",ob,this_object());
 return 1;
     }
  count++;
 message_vision("$N����$n,����һ�����,һ�����ӵ�������.\n",ob,this_object());
 new("/obj/money/silver")->move(environment(ob));
 return 1;
 }
  	
  