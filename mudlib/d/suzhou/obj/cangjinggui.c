// box.c ������

#include <ansi.h>

inherit ITEM;
string* book=( {
	"b_neigong1",
	"b_neigong2",
	"b_neigong3",
	"b_gedou1",
	"b_gedou2",
	"b_gedou3",
	"b_qinggong1",
	"b_qinggong2",
	"b_qinggong3",
	"b_zhaojia1",
	"b_zhaojia2",
	"b_zhaojia3",
});
void create()
{
	int i;
	object shu;
	set_name("�����µĲؾ���",({"cangjinggui","cangjing gui","gui"}));
	set_weight(3000);
	set_max_encumbrance(1000000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","����ȥ�������Զ�����\n");
		set("material", "wood");
		set("no_get",1);
		set("no_drop",1);
	}
	setup();
	for(i=0;i<sizeof(book);i++)	{
	shu=new("/obj/book/wuxue/"+book[i]+".c");
	shu->set("oldsix_flag/no_out",1);
	shu->set("no_sell",1);
	shu->move(this_object());
	}
}

int is_container() { return 1; }

