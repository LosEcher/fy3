// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("��ī���鵶���Ͼ�",({"daofa","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","�����������ĵ���ָ�ϡ�\n");
	set("no_give",1);
		set("material", "paper");
	set("value",100);
	set("no_sell",1);
		set("skill", ([
	"name":"pomopima-dao",
	"exp_required":100,
	"max_skill":20,
	"sen_cost":10,
		]) );
	}
}
