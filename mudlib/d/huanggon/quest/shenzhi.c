#include <ansi.h>
inherit ITEM;
inherit F_LIQUID;

void create()
{
	set_name(HIY"ʥּ"NOR, ({ "shen zhi" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","�ʵ۰䷢��ʥּ��\n");
		set("unit", "��");
		set("no_give",1);
		set("no_drop",1);
		set("no_steal",1);
		set("no_sell",1);
	}
}
