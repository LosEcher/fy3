inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/ì����ʦ"; }
void create()
{
#include <kzznpc.h>
set("area_name","ì�ܼ��е�");
set("area_file","/d/zhongzhou/maodun.c");
	setup();
}
void init()
{
   ::init();
 add_action("do_xiubu","xiubu");
}
int do_xiubu(string arg)
{
 int damage,max_damage,money,val;
 object obj, me=this_player();
 string bh;

	bh=(string)me->query("banghui");
  if (!arg) return notify_fail("��Ҫ�޲�ʲô?\n");
  if (!obj=present(arg,me))
          return notify_fail("������û����������.\n");
  if (!obj->query("armor_prop"))
     return notify_fail("�˵�ֻ�޲�����.\n");
  damage=(int)obj->query("oldsix/damage");
  if (damage==0) return notify_fail("����������û��,������.\n");
  val=obj->query("value");
  if (!val||val<=100) return notify_fail("����һ�Ĳ����Ķ���,û��Ը�ⲹ.\n");
  max_damage=obj->query("oldsix/max_damage");
  if (!max_damage) max_damage=10;
  money=(int)(val*2/max_damage)*damage;
  if ( bh && bh==(string)query("banghui"))
  money=(int)money*2/3;
  if (!me->pay_money(money)) return notify_fail("���ϴ�������Ǯ����.\n");
  message_vision("$N�ͳ�������$n��:������ʦ�޲�.\n",me,this_object());
  message_vision("$Nȡ��һ���߲ʽ���,��������,��һ��Ͱ�"+obj->query("name")+
"�޲�����,$n��ֱ��ɵ����.\n",this_object(),me);
  obj->set("oldsix/damage",0);
  return 1;
}