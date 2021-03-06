// dongfang.c
#include <ansi.h>
inherit NPC;

void consider();

void create()
{
    set_name("东方不败", ({"dongfang bubai", "dongfang", "bubai"}));
    set("title","天下无敌");
    set("banghui", "日月教");
    set("bh_rank","教主");
    set("gender", "男性");
    set("shen_type", -1);
    set("age", 42);
    set("long",
        "他就是日月神教教主。号称无人可敌，因此有一称号为「东方不败」。\n");
    set("attitude", "peaceful");

    set("per", 21);
    set("str", 21);
    set("int", 30);
    set("con", 26);
    set("dex", 30);

    set("chat_chance", 1);
    set("chat_msg", ({
 "东方不败叹了口气道：“唉 …… 我的杨大哥....他怎么还不回来,我好\n"
 "挂念他 ……东方不败眼中流露无限迷茫。\n",
        }));
    set("inquiry", ([
        "杨莲亭"   : "你敢直称我爱人的名字,想找死呀？ \n",
        "葵花宝典" : "如果你能帮我取得葵花宝典上册，我一定重重谢你。\n",
    ]));

    set("kee", 4000);
    set("max_kee", 4000);
    set("gin", 1000);
    set("max_gin", 1000);
    set("force", 4500);
    set("max_force", 4500);
    set("force_factor", 400);

    set("combat_exp", 2500000);
    set("score", 0);

    set_skill("force", 200);             // 基本内功
    set_skill("unarmed", 200);           // 基本拳脚
    set_skill("dodge", 200);             // 基本躲闪
    set_skill("parry", 200);             // 基本招架
    set_skill("sword", 200);             // 基本剑法
    set_skill("pixie-jianfa", 200);        // 辟邪剑法
    set_skill("literate", 100);          // 读书识字
    set_skill("kuihua-xinfa", 200);      // 葵花心法

    map_skill("force", "kuihua-xinfa");
	map_skill("sword","pixie-jianfa");
    map_skill("dodge", "pixie-jianfa");
    map_skill("parry", "pixie-jianfa");

    setup();
	carry_object(__DIR__"obj/hongchouxiaoshan")->wear();
	carry_object(__DIR__"obj/zhen")->wield();

}

int recognize_apprentice(object ob)
{
	string banghui;
	banghui=(string)ob->query("banghui");
	if(banghui==query("banghui"))	{
	if(ob->query("score")<5000)
		return notify_fail(query("name")+"道：你还是多为本教做些实事吧。\n");
	return 1;
	}
	else	{
        if ((int)ob->query_temp("tmark/东") == 1 )
        message_vision("东方不败看了看$N，说道：咱们现在是谁也不欠谁,\n"
                          "你不要再找我学习技艺了。\n", ob);
        if (!(int)ob->query_temp("tmark/东"))
                return 0;
        ob->add_temp("tmark/东", -1);
        return 1;
	}
}



int accept_object(object who, object ob)
{

        if ( (string) ob->query("id") =="kuihua baodian1" ) {
                if (!(int)who->query_temp("tmark/东",)) who->set_temp("tmark/东",100);
                message_vision("东方不败看了看$N送来的秘籍，点了点头，说道：\n"
                               "难得你将宝典送回。你送我的东西我就收下了。\n"
                               "作为补偿,你可以从我这里学点功夫。\n", who);
                who->add_temp("tmark/东", 100);
                return 1;

        }
        return 0;
}
