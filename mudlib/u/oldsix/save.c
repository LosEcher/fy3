// huyao.c

#include <armor.h>
#include <ansi.h>

inherit ARMOR;

void create()
{
	set_name("��⬼�",({"ruanwei jia","jia"}));
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("long","�������̵ļ��У����һ����ı��\n");
	set("value",5000);
		set("material","armor");
		set("armor_prop/armor", 10);
	}
	setup();
}

mapping armor_action(object me,object target,int damage)
{
	string msg="";
	mapping foo=([]);
	int dam;
	if(objectp (target->query_temp("weapon")))	{
		msg+=HIW"ֻ����������һ�죬"+
		this_object()->query("name")+"��$w���˺�жȥ�˴�룡\n"NOR;
		damage/=2;
		if(damage<=0)	damage=0;
	}else	{
		msg=HIR"ֻ��$Nһ���Һţ��ֱ�"+this_object()->query("name")+
		"�̵���Ѫ���ܣ�\n"NOR;
		target->receive_damage("kee",damage,me);
		damage/=2;
	}
	foo["msg"]=msg;
	foo["damage"]=damage;
	return foo;
}

