#include <weapon.h>
#include <ansi.h>
inherit SWORD;

void create()
{
	set_name(RED"��ڤ��"NOR, ({"youming jian", "youming", "jian", "sword" }));
	set_weight(50000);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "һ�ѽ���"+RED+"ͨ��"+NOR",��β����С����ͷ�ĳ�����\n");
		set("value", 50000);
		set("material", "steel");
		set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��ؽ��ʡ�\n");
              set("mask","ׯ");
	}
	init_sword(100);
	setup();
}
int move(mixed dest)
{
        if(! userp(dest))       return ::move(dest);
        if( ::move(dest)==0)    return 0;
        message("channel:rumor",YEL"��ҥ�ԡ�"+ "ĳ�ˣ���ڤ����"+
        dest->query("name")+"�������ˣ�\n"NOR,users());
        return 1;
}
