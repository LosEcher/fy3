// lilishi.c 李力世

#include <ansi.h>

inherit NPC;
int ask_zhu();

void create()
{
	set_name("李力世", ({ "li lishi", "li" }));
	set("banghui", "天地会");
	set("gender", "男性");
	set("age", 45);
	set("str", 25);
	set("dex", 20);
	set("long", "这是一个身材矮小，满连胡须的中年人，身上的\n"+
"衣服又脏又破，脸上满是皱纹，看上去饱经风霜。\n");
	set("combat_exp", 35000);
	set("score", 5000);
	set("shen_type", 1);
	set("attitude", "peaceful");
	set_skill("unarmed", 50);
	set_skill("yunlong-shou",50);
	set_skill("force", 60);
	set_skill("yunlong-xinfa",50);
	set_skill("blade", 90);
	set_skill("dodge", 70);
	set_skill("parry", 50);
	set_skill("wuhu-duanmendao", 90);
	set_skill("yunlong-shenfa", 60);
	map_skill("blade", "wuhu-duanmendao");
	map_skill("dodge", "yunlong-shenfa");
	map_skill("force","yunlong-xinfa");
	map_skill("parry","wuhu-duanmendao");

	set("max_force", 600);
	set("force",600);
	set("force_factor", 50);
	set("max_kee",800);
	set("chat_chance", 2);
	set("chat_msg", ({
	"李力世说：呆会儿我还得把猪送到宫里去。\n",
	"李力世突然吆喝道: 花雕芙苓猪啊，只卖黄金一两，谁买谁买啊？\n",
	"李力世突然吆喝道: 燕窝人参猪啊，只卖黄金一两，谁买谁买啊？\n",
        "李力世搔了搔头，说道：这么好的猪肉怎么没人要啊。\n",
        "李力世突然说：初进洪门结义兄，对天明誓表真心。\n",
	}));
        set("inquiry", ([
		"陈近南" :  "\n想见总舵主可不容易啊。\n",
		"天地会" :  "\n要入天地会，得去找贾老六。\n",
                "反清复明" : "去棺材店和回春堂仔细瞧瞧吧！\n",
                "进宫" : (: ask_zhu :),
                "花雕芙苓猪" : (: ask_zhu :),
                "燕窝人参猪" : (: ask_zhu :),

       ]) );
	setup();
	carry_object("/d/city2/obj/tudao")->wield();
	carry_object("/obj/cloth")->wear();
	add_money("silver", 20);
}

int accept_object(object who, object ob)
{
	if (ob->query("money_id") && ob->value() >= 10000) 
	{
		message_vision("\n李力世对$N一揖作礼，说道：这位客官，要什么尽管说。\n",this_player());
		who->set_temp("money_paid",1);
		return 1;
	}
	return 0;
}


int ask_zhu()
{
if (this_player()->query_temp("money_paid"))
{
this_player()->delete_temp("money_paid");
this_player()->set("huanggong\canenter",1);
say("李力世说：您老现在可以走啦！\n");
return 1;
}
say("李力世说：干什么也得先交钱啊。\n");
return 1;
} 


int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"摇头道：非我天地会兄弟不教。\n");
        if(ob->query("score")<50)
                return notify_fail(query("name")+"道：你要多为天地会出力啊。\n");
        return 1;
}

