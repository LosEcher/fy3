// huyao.c

#include <armor.h>
#include <ansi.h>

inherit ARMOR;

void create()
{
	set_name(HIY"��ϱ���"NOR,({"tiancan baoyi","baoyi","cloth"}));
	set_weight(1500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("long","һ��������ı��ģ����е��ԡ�\n");
		set("value",500000);
		set("material","armor");
		set("armor_prop/armor", 10);
		set("oldsix/max_damage",10);
		set("oldsix/protect",10);
		set("oldsix/by",1);
		set("zhengzhao",4);
		set("no_sell",1);
	}
	setup();
}

mapping armor_action(object me,object target,int damage)
{
	string msg="";
	mapping foo=([]);
	this_object()->set("oldsix/damage",0);
		msg+=HIW"��ϱ���ͻȻ��������$N�Ĺ���жȥ�˴�룡\n"NOR;
		damage/=2;
		if(damage<=0)	damage=0;
	foo["msg"]=msg;
	foo["damage"]=damage;
	return foo;
}
int move(mixed dest)
{
        if(! userp(dest))       return ::move(dest);
        if( ::move(dest)==0)    return 0;
	message("channel:rumor",YEL"��ҥ�ԡ�"+ "ĳ�ˣ���ϱ��±�"+
        dest->query("name")+"�������ˣ�\n"NOR,users());
        return 1;
}
