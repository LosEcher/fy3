#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("����", ({ "mudi", "dizi" }) );
	set_weight(2000);

	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
		set("unit", "֧");
		set("long", "�������ɣ���Ȼ���ϣ�β�˻�����һ����Ҷ.\n");
		set("value", 500);		
		set("material", "wood");
	}
	init_sword(5);

	set("wield_msg", "$N���һ��$n,����һ�������\n");
	set("unwield_msg", "$N��$n�嵽���䡣\n");

	setup();
}
