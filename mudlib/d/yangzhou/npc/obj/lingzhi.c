//music yangzhou's ��֥

#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("��֥",({"ling zhi","ling","zhi"}));
	set("long","һ������ҩ�ģ��������������ﵽ���״̬��\n");
        set("unit", "֧");
        set("weight", 50);
	set("value",10000);
}

void init()
{
        add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        object ob;
	ob=this_player();

	if(!living(ob))	return 0;
        if( !id(arg) ) return notify_fail("��Ҫ��ʲ�᣿\n");
if ((int)time()-ob->query("oldsix_flag/eat_yao")<60)
return notify_fail("��ճԹ���ҩ,�����������ܲ���.\n");

	ob->set("gin",(int)ob->query("max_gin"));
	ob->set("eff_gin",(int)ob->query("max_gin"));
	ob->set("kee",(int)ob->query("max_kee"));
	ob->set("eff_kee",(int)ob->query("max_kee"));
	ob->set("sen",(int)ob->query("max_sen"));
	ob->set("eff_sen",(int)ob->query("max_sen"));
	ob->set("atman",(int)ob->query("max_atman"));
	ob->set("force",(int)ob->query("max_force"));
	ob->set("mana",(int)ob->query("max_mana"));
ob->set("oldsix_flag/eat_yao",time());
	message_vision("$N����һ֧��֥���о�ˬ���ˡ�\n",ob);
        destruct(this_object());
        return 1;
}
