// box.c ������

#include <ansi.h>

inherit ITEM;
string* weapon=({
	"muding",
	"zhuding",
	"tieding",
	"gangding",
});
string* unarmed=({
	"mianshouzhang",
	"tongshouzhang",
	"tieshouzhang",
});
void create()
{
	int i;
	object wuqi;
	set_name("������",({"bingqijia"}));
	set_weight(3000);
	set_max_encumbrance(50000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","ר�ŷ��ñ�����ľ�ܡ�\n");
		set("material", "wood");
		set("no_get",1);
		set("no_drop",1);
	}
	setup();
	for(i=0;i<4;i++)	{
	wuqi=new("/d/suzhou/meizhuang/npc/obj/"+weapon[random(4)]+".c");
	wuqi->set_amount(100);
	wuqi->set("no_sell",1);
	wuqi->move(this_object());
	}
        for(i=0;i<2;i++)        {
        wuqi=new("/d/suzhou/meizhuang/npc/obj/"+unarmed[random(3)]+".c");
        wuqi->set("no_sell",1);
        wuqi->move(this_object());
        }
}

int is_container() { return 1; }

