// flower6.c

inherit ITEM;

void create()
{
	set_name("������", ({ "danding hong" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 0);
		set("long", 
"���Ƕ���Ļ���������������֮�д���һ�����ص�а����\n");
	}
	setup();
}
