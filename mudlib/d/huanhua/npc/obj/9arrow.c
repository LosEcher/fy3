#include <ansi.h>
inherit ITEM;

int peck(string arg);
void create()
{
    set_name("����佻����",({"arrow"}));
    set_weight(1500);
    if(clonep())
   set_default_object(__FILE__);
    else {
   set("unit","֧");
   set("value",10000);
   set("long","һ֦����������β�����������״��
������(peck arrow)���ַ�����.\n");
   set("material", "iron");
    }
    setup();
}
void init()
{
      add_action("peck","peck");
}
int peck(string arg)
{
   object player,obj,env,bird;
     player=this_player();
     obj=this_object();
   if (!arg) return notify_fail("��Ҫ�ӳ�ʲô����?\n");
   if (!living(player)||environment(obj)!=player) return notify_fail("");
           env=environment(player);
    if (!env->query("outdoors"))    
               return notify_fail("����佻����ֻ�������ⷢ��!\n");
bird=present("tu jiu",env);
if (!bird) bird=present("hei jiu",env);
if (!bird) bird=present("bai diao",env);
if (bird) {
 message_vision("$Nһ����,����佻������������,����$n�Ĳ���.",player,bird);
 bird->die();
 return 1;
 destruct(obj);
}
else
        message_vision("$Nһ���ַ���$n.\n",player,obj);
   		message("channel:rumor", 
YEL"��ҥ�ԡ�"+ "һ֦����佻������"+env->query("short")+"�Ͽձ���ǧ������������\n"NOR,users());
destruct(obj);
return 1;
}
