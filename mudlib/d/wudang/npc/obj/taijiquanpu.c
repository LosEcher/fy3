// daodejing.c

inherit ITEM;

void create()
{
set_name( "̫��ȭ��",({ "shu","book"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
set("long","����һ��̫��ȭ�ס�\n");
		set("value", 500);
		set("material", "paper");
		set("skill", ([
  "name": "taiji-quan",  //name of the skill
 "exp_required": 10000 , //minimum combat experience required
			"sen_cost":20+random(20),
                        "max_skill":    30     // the maximum level you can learn
		]) );
	}
}
