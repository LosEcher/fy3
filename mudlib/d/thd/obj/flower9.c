// flower9.c

inherit ITEM;

void create()
{
	set_name("��֬��", ({ "lingzhi lan" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 0);
		set("long", 
"���Ƕ伫Ϊ�������������ǻƵ������ؽ������ġ������쳣�����о綾��\n");
	}
	setup();
}
