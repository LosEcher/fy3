// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("���¾�",({"daodejing","daode jing","jing","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","һ���йص����������顣\n");
		set("value", 500);
		set("material", "paper");
		set("skill", ([
		"name":"daoxuexinde",
		"sen_cost":20+random(11),
		"max_skill":50,
		]) );
	}
}
