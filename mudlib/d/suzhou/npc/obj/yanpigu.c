// box.c ������

#include <ansi.h>

inherit ITEM;
void create()
{
	set_name("��ƨ��",({"yanpigu"}));
	set_weight(1);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit","��");
	set("long","һ���ѱ��������ƨ�ɡ�\n");
		set("material", "wood");
	}
	setup();
}


