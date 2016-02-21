// woodcutter.c
inherit NPC;

string* weapon=({
	"duanjian",
	"changjian",
	"zhujian",
});
string* armor=({
"hupi",
});
string func();

void create()
{
	set_name("׳��",({"zhuang han","zhuang","han"}));
	set("mingwang",1);
	set("gender", "����" );
	set("age",25);
	set("long","���������յ�׳�꺺�ӡ�\n");
	set("combat_exp",100000);
	set("chat_chance",1);
	set("chat_msg", ({
		(: func :),
	}) );
	set_skill("sword",60);
	set_skill("dodge",60);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	setup();
	carry_object(__DIR__"obj/hupi")->wear();
	carry_object(__DIR__"obj/changjian")->wield();
}
string func()
{
	object *inv,thing;
	inv=all_inventory(environment(this_object()));
	if(sizeof(inv)>=4)	{
	tell_room(environment(this_player()),"׳�����������еĳ�����\n");
	return "\n";
	}
	switch(random(2))	{
		case 0:	{
		thing=new(__DIR__"obj/"+weapon[random(sizeof(weapon))]+".c");
			thing->move(environment(this_object()));
	tell_room(environment(),"׳���������е�"+thing->query("name")+"�����˿�����\n");
		return "\n";
			}
		case 1:	{
		thing=new(__DIR__"obj/"+armor[random(sizeof(armor))]+".c");
			thing->move(environment(this_object()));
	tell_room(environment(),"׳�������ϵ�"+thing->query("name")+"����������˵������������������������ˡ�\n");
	return "\n";
			}
	}
}

