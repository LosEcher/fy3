// letter.c

inherit ITEM;

void create()
{
	set_name("�Ƽ���", ({ "letter" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 0);
		set("long", "\n");
		set("pl_name","");
	}
	setup();
}
