// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("�߼�ȭ���ھ�",({"quanfa","book","shu"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","һ��С���ӣ�������������д����ȭ���ķ��š�\n");
	set("no_give",1);
		set("material", "paper");
		set("skill", ([
	"name" :"murongquanfa",
	"exp_required":10000,
	"max_skill":60,
	"sen_cost":30,
		]) );
	}
}