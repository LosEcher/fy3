//Mr.music yangzhou ذ��

#include <weapon.h>
#include <ansi.h>
inherit BLADE;
void create()

{
set_name(HIC"������"NOR,({"tulong","blade","dao"}));
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
set("long",HIM"������ɫ,�����Ի�,��˵���в���һ������\n"NOR);
set("value",100000);
set("unit","��");
		set("material", "steel");
	}
init_blade(150);

// These properties are optional, if you don't set them, it will use the
// default values.

set("wield_msg",HIC"$N�ӱ��������Ƥ�����ͳ�һ���ڳ����Ĵ�\n"NOR);
set("unwield_msg",HIC"$N�������ջ�������\n"NOR);

	setup();
}
