inherit ITEM;

void create()
{
	set_name("Ȯ��", ({ "quan ya" }) );
	set_weight(300);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "��ɭɭ��һ��������,���滹������������.\n");
		set("unit", "��");
		set("value", 1000);

	}
}
