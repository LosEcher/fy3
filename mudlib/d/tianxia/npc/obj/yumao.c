#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(RED"��"NOR+GRN"ɫ"NOR+YEL"��"NOR+MAG"ë"NOR, ({ "yu mao" }) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "ɫ�ʰ�쵵���ë.\n");
		set("unit", "��");
		set("value", 1000);

	}
}
