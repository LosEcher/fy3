//zhenwu jian   from nangong
#include <weapon.h>

inherit SWORD;

void create()
{
    set_name("���佣", ({ "zhenwu jian", "zhenwu","jian" }) );
    set_weight(20000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
        	set("unit", "��");
		set("value",100000);
        	set("material", "iron");
        	set("long", "�����䵱������˵�������۴�������\n");
        	set("wield_msg","ֱ�������ˮ���������һ�㣬$n����$N���У����Ϊ֮��ɫ��\n");
        	set("unwield_msg", "$N��$n������䣬�����������ؼ�ֻ��������\n");
	}
	init_sword(100);
	setup();
}
