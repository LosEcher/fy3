// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("�������",({"jing"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ���������õľ��顣������ӡ�š���һ��\n");
		set("value",5000);
		set("material", "paper");
		set("skill", ([
		"name" :"force",
		"exp_required":0,
			"sen_cost" :20,
		"difficulty" : 25,
		"max_skill" :50,
		]) );
	}
}
