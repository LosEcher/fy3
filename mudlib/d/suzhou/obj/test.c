// cloth.c
//
// This is the basic equip for players just login.
#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("�ѻ���ǹ",({"zhuji buqiang","buqiang","qiang"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("material","iron");
	}
	setup();
}
void init()
{
	add_action("do_shoot","shoot");
}
int do_shoot(string str)
{
}
