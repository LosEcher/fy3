// flower2.c

inherit ITEM;

void create()
{
	set_name("������", ({ "lanhua" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 0);
		set("long", 
"���Ƕ���������ɫ������\n");
	}
	setup();
}
