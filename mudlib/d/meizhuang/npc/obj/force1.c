// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("�����ڹ��о�",({"neigong","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","���ӹ����������ڹ��о�\n");
	set("no_give",1);
		set("material", "paper");
	set("value",100);
	set("no_sell",1);
		set("skill", ([
	"name":"xuantian-neigong",
	"exp_required":5000,
	"max_skill":40,
	"sen_cost":20,
		]) );
	}
}
