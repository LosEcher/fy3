// cloth.c
//
// This is the basic equip for players just login.



mapping action=([
		"name":"kkk",
		"id":"kkk",
		"bbb":0,
		"bbs":1,
]);
#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("����", ({ "cloth" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("material", "cloth");
		set("armor_prop/armor", 5);
	}
	setup();
}
void init()
{
	add_action("do_full","full");
	add_action("do_file","file");
	add_action("do_data","data");
	add_action("do_test","zz");
}
int do_test(string str)
{
	int i;
	object ob,me=this_player();
	object *en;
	if(! str)	return 0;
	ob=present(str,environment(me));
	if(! ob)	return 0;
	en=ob->query_enemy();
	if(sizeof(en)==0)	return 0;
	for(i=0;i<sizeof(en);i++)	{
		write(en[i]->query("name")+"\n");
	}
	return 1;

}
int do_data(string str)
{
	object ob,me;
	string file="";
	int len,i;
	me=this_player();
	ob=present(str,environment(me));
	if(!(file=ob->get_npc_data_file()))
		return notify_fail("not npc data\n");
	write(file+"\n");
	return 1;
}

int do_file(string str)
{
	object me,ob;
	if(! str)	return notify_fail("no str\n");
	me=this_player();
	if(!(ob=present(str,environment(me))))
		return notify_fail("not this object\n");
	write(file_name(ob)+"\n");
	write(base_name(ob)+"\n");
	return 1;
}
int do_full()
{
	object me;
	me=this_player();
	me->set("kee",me->query("max_kee"));
	me->set("eff_kee",me->query("max_kee"));
	me->set("gin",me->query("max_gin"));
	me->set("eff_gin",me->query("max_gin"));
	me->set("sen",me->query("max_sen"));
	me->set("eff_sen",me->query("max_sen"));
	me->set("force",me->query("max_force"));
	me->set("mana",me->query("max_mana"));
	me->set("atman",me->query("max_atman"));
	message_vision("$N���һ�����������޵У�����\nȫ��״̬�ָ���ɡ�\n",me);
	return 1;
}
