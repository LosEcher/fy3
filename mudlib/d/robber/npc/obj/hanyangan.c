#include <weapon.h>
inherit SWORD;

void create()
{
        set_name("���̸�", ({ "hanyangan", "hanyan" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("long","һ�������͵��̸�.\n");
		set("unit", "��");
		set("value", 70);
		set("material", "wood");
                set("wield_msg","$N�������̵ش�������ͳ�һ��$n.\n");
                set("unwield_msg","$N�û�ʯ������$n�е���˿,��ɽ������������.\n");
	}
 init_sword(15);
 setup();
}
