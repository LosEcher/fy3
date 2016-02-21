// huanhun.c ��ת���굤
// 97.9.6  by Aug

#include <ansi.h>

inherit ITEM;

void create()
{
	set_name(HIY"��ת���굤"NOR, ({ "huanhun","dan" }) );
	set("long",
HIY"����һö����������֮Ч�ľ�ת���굤���ǿ�������������ɼ�֮ҩ��\n"NOR);
	set("unit", "��");
	set("weight", 50);
	set("value", 0);
}

void init()
{
	add_action("do_eat", "eat");
}

int do_eat(string arg)
{
	object ob;
	mapping skl;
	string *sname;
	int i;

	if( !id(arg) ) return notify_fail("��Ҫ��ʲ�᣿\n");

	seteuid(getuid());

	ob=this_player();

	skl = ob->query_skills();

	if(!sizeof(skl)) return 1;

	sname = sort_array( keys(skl), (: strcmp :) );

	for(i=0; i<sizeof(skl); i++) 
	{
		ob->set_skill( sname[i] , skl[sname[i]]+1 );
	}

	if(ob->query("age")>=15)
		ob->set("combat_exp",(int)ob->query("combat_exp")/98*100);
// a-a/50=b  a=b/0.98

	write(HIY+"���ó�һ����ת���굤��������У�������ȥ����ʱ��һ��������ĸо���\n"NOR);

	message("vision", HIY + ob->name() + HIY+
"�ó�һ����ת���굤��������У�������ȥ����ʱ��һ��������ĸо���\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
