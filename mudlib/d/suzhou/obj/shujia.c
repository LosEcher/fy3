// box.c ������

#include <ansi.h>

inherit ITEM;
string* foxue=({
	"b_amituo",
	"b_daniepan",
	"b_jingangjing",
	"b_lengjiajing",
	"b_lengyanjing",
	"b_yuanjuejing",
});
string* daoxue=({
	"b_cantongqi",
	"b_daoxiangji",
	"b_huangtingjing",
	"b_laozi",
	"b_xingmingguizhi",
	"b_yinfujing",
});
string* wenxue=({
	"b_shi",
	"b_shu",
	"b_li",
	"b_yi",
	"b_yue",
	"b_chunqiu",
});
void create()
{
	object shu;
	set_name("����ŵ�С���",({"shujia","shu jia","jia"}));
	set_weight(3000);
	set_max_encumbrance(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","��ľ�Ƴɵ���ܣ������������д�ļ����֣�\n"+
	HIG"�н�(get)�л�(put)���ٽ費�ѡ�\n"NOR);
		set("material", "wood");
		set("no_get",1);
		set("no_drop",1);
	}
	setup();
	shu=new("/obj/book/foxue/"+foxue[random(sizeof(foxue))]+".c");
	shu->set("name","����ŵĲ���"+shu->query("name"));
	shu->set("no_sell",1);
	shu->move(this_object());
	shu=new("/obj/book/daoxue/"+daoxue[random(sizeof(daoxue))]+".c");
	    shu->set("name","����ŵĲ���"+shu->query("name"));
		shu->set("no_sell",1);
	shu->move(this_object());
	shu=new("/obj/book/wenxue/"+wenxue[random(sizeof(wenxue))]+".c");
	shu->set("name","����ŵĲ���"+shu->query("name"));
	shu->set("no_sell",1);
	shu->move(this_object());
}

int is_container() { return 1; }

