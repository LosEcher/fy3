// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name( "���¾����¾�", ({ "jing", "daode jing" }));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ����¾����¾�����ͬ�����ʮһʼ�����ʵڰ�ʮһֹ��\n");
		set("value", 500);
		set("material", "paper");
		set("skill", ([
			"name":"daoxuexinde",
			"exp_required":	0,	// minimum combat experience required
			"sen_cost":30+random(11),
			"max_skill":80,
		]) );
	}
}
