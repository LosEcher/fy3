// flower7.c

inherit ITEM;

void create()
{
	set_name("���߾�", ({ "jinshe ju" }) );
	set_weight(10);
	if( !clonep() ) {
		set("unit", "��");
		set("value", 0);
		set("long", 
"���Ƕ���ɫ�ľջ�����˵���������õ����֡�\n");
	}
	setup();
}
