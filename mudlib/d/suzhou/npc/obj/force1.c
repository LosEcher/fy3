// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("�м��ķ��ھ�",({"xinfa","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ��С���ӣ�������������д���������ķ��š�\n");
	set("no_give",1);
		set("material", "paper");
		set("skill", ([
	"name" : "murongxinfa",
	"exp_required":5000,
	"max_skill":40,
	"sen_cost":20,
		]) );
	}
}
