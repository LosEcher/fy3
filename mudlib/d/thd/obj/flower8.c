// flower8.c

inherit ITEM;

void create()
{
	set_name("������", ({ "qing tuoluo" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 0);
		set("long", 
"���Ƕ伫Ϊ�����������ݻ�����˵��������������֡�\n");
	}
	setup();
}
