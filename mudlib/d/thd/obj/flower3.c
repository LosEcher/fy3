// flower3.c

inherit ITEM;

void create()
{
	set_name("������", ({ "taohua" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 0);
		set("long", 
"���Ƕ������ķۺ��һ���\n");
	}
	setup();
}
