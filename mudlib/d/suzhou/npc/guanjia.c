// woodcutter.c
inherit NPC;

void give_armor(object me);
string* armor=({
	"dengyunxue",
	"jinsijia",
	"feilongkui",
});
string do_func();
	
void create()
{
	set_name("张管家",({"zhang guanjia","zhang","guanjia"}));
	set("gender", "男性" );
	set("mingwang",1);
	set("age",40);
	set("long","正忙着收拾库房呢。慕容氏弟子的兵器、防具都由他分发。\n");
	set("combat_exp",50000);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	set_temp("apply/damage",20);
	set_temp("apply/armor",40);
	set_skill("unarmed",60);
	set_skill("dodge",60);
	set("inquiry",([
		"兵器" : "我慕容弟子靠的是一双空手打天下，哪里还需要什么兵器？",
		"防具" : (: do_func() :),
        ]) );

	setup();
	carry_object("/obj/cloth")->wear();
}
string do_func()
{
	object *inv,me;
	string str,str2;
	int count;
	me=this_player();
	if(me->query("family/family_name")!="姑苏慕容")
	return "这儿只接待姑苏慕容的弟子。\n";
	inv=all_inventory(me);
	if(!inv)	{
		give_armor(me);
		return "希望这些防具对你有帮助。";
	}
	for(count=0;count<sizeof(inv);count++)
	if(inv[count]->query("armor_type")&&inv[count]->query("armor_type")!="cloth"&&inv[count]->query("armor_type")!="bandage")
	return "你不是已经有了"+inv[count]->query("name")+"吗？\n";
	give_armor(me);
	return "希望这些防具对你有帮助。";
}

void give_armor(object me)
{
	object thing;
	int i;
	for(i=0;i<sizeof(armor);i++)	{
		thing=new(__DIR__"obj/"+armor[i]+".c");
	thing->set("value",0);
	thing->move(me);
	 tell_object(me,"张管家给你一"+thing->query("unit")+thing->query("name")+"。\n");
	}
	return;
}
