
#include <armor.h>

inherit BOOTS;

void create()
{
	set_name("����ѥ" ,({"dengyun xue","xue"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "˫");
	set("long","һ˫ѥ�ӣ����Ϻ󽡲���ɡ�");
	set("value",1000);
		set("material", "boots");
		set("armor_prop/dodge", 5);
	}
	setup();
}
