// box.c ������

#include <ansi.h>

inherit ITEM;
void create()
{
	object yan;
	set_name("����",({"xiangyan"}));
	set_weight(30);
	 set_max_encumbrance(25);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit","��");
	set("long","һ�����̣��������װ���¶�ʮ֧�̡�\n");
		set("material", "wood");
	}
	setup();
	yan=new(__DIR__"xiangyan.c");
	yan->set_amount(20);
	yan->move(this_object());
}

int is_container() { return 1; }

