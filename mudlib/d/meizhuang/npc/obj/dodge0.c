// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("���첽���Ͼ�",({"bufa","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","���ӹ����������첽���Ͼ�\n");
	set("no_give",1);
		set("material", "paper");
	set("value",100);
	set("no_sell",1);
		set("skill", ([
	"name":"xuantian-bu",
	"exp_required":100,
	"max_skill":20,
	"sen_cost":10,
		]) );
	}
}
