// box.c ������

#include <ansi.h>

inherit ITEM;
void create()
{
	object yan;
	set_name("���̿�",({"xiangyanke"}));
	set_weight(30);
	set_encumbrance(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit","��");
	 set("long","һ�����̿ǣ��������װ����20֧�̡�\n");
		set("material", "wood");
	}
	setup();
}


