// flower4.c

inherit ITEM;

void create()
{
	set_name("������", ({ "lianhua" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 0);
		set("long", 
"���Ƕ�������������½���ϵ�������\n");
	}
	setup();
}
