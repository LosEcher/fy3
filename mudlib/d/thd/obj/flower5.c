// flower5.c

inherit ITEM;

void create()
{
	set_name("��ĵ��", ({ "mudan" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 0);
		set("long", 
"���Ƕ�������ϡ�е���ɫĵ����\n");
	}
	setup();
}
