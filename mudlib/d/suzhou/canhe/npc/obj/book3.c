// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("ȭ���ھ�",({"shu","book"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","һ��С���ӣ�������������д����ȭ���ķ��š�\n");
	set("no_drop",1);
		set("material", "paper");
		set("skill", ([
		"name" :"murongquanfa",
			"exp_required":	0,	// minimum combat experience required
			"sen_cost" :20,
		"difficulty": 10,
		"max_skill" : 50,
		]) );
	}
}
