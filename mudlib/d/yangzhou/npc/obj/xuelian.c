// music yangzhou's ѩ��
#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("ѩ��",({"xue lian","lian","xue"}));
	set("long","һ�ֹ��ص��̲�ҩ�ģ����Իָ����С��������𷨡�\n");
        set("unit", "��");
        set("weight", 100);
	set("value",7000);
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
	ob->set("atman",(int)ob->query("max_atman"));
	ob->set("force",(int)ob->query("max_force"));
	ob->set("mana",(int)ob->query("max_mana"));
ob->set("oldsix_flag/eat_yao",time());
	message_vision("$N����һ����ɽѩ�����о��ü��ˣ�\n",ob);
        destruct(this_object());
        return 1;
}
