// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("�쵶����ͼ",({"tu","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","һ��С���ӣ�����Щʹ�ÿ쵶������ͼ�⡣\n");
		set("material", "paper");
		set("value",2500);
		set("skill", ([
	"name" :"kuaidao-daofa",
	"exp_required":10000,
	"max_skill":30,
	"sen_cost":10+random(10),
		]) );
	}
}
