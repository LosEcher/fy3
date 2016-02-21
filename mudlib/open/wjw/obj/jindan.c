// jindan.c ��ת��
#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("��ת��", ({ "jindan","dan" }) );
	set("long", "һ�Ž�����������˱ǵĴ����ӣ��ഫΪ̫���Ͼ����ƣ���Ч�ޱȡ�\n");
	set("unit", "��");
	set("weight", 50);
	set("value", 1000);
}

void init()
{
	add_action("do_eat", "eat");
}

int do_eat(string arg)
{
	object ob;
	if( !id(arg) ) return notify_fail("��Ҫ��ʲ�᣿\n");

	ob=this_player();
	ob->set("kee",(int)ob->query("max_kee"));
	ob->set("gin",(int)ob->query("max_gin"));
	ob->set("sen",(int)ob->query("max_sen"));
	ob->set("eff_kee",(int)ob->query("max_kee"));
	ob->set("eff_gin",(int)ob->query("max_gin"));
	ob->set("eff_sen",(int)ob->query("max_sen"));

	ob->set("atman", (int)ob->query("max_atman"));
	ob->set("force", (int)ob->query("max_force"));
	ob->set("mana", (int)ob->query("max_mana"));

	ob->set("food",((int)ob->query("str")-10)*10+200);
	ob->set("water",((int)ob->query("str")-10)*10+200);

	write( HIY "�����һ�ž�ת�𵤣����̱�þ������棬������棡\n" NOR);

	message("vision", HIY + ob->name() + "����һ�ž�ת�𵤣����̱�þ������棬������棡" NOR,
		environment(ob), ob);
	destruct(this_object());
	return 1;
}
