// flower1.c

inherit ITEM;

void create()
{
	set_name("�����", ({ "juhua" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 0);
		set("long", 
"���Ƕ������ľջ��������ϻ�����һ�����Ľ�Ƶĵ����ơ�\n");
	}
	setup();
}
