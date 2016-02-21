#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("花剪", ({ "jiandao", "sword" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("material", "steel");
		set("long", "花匠用来修剪花枝的剪刀,上面已是锈迹斑斑。\n");
		set("value", 1400);
		set("wield_msg", "$N拿出一把$n，握在手中当作武器。\n");
		set("unwield_msg", "$N放下手中的$n。\n");
              set("mask","庄");
	}
	init_sword(20);
	setup();
}
