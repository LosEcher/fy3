inherit NPC;
string *a=({"/blade/blade","/blade/caidao","/blade/dandao","/blade/jiedao","/sword/changjian",
"/sword/duanjian","/axe/bigaxe","/axe/tiefu","/hammer/hammer","/throwing/stone"});
void create()
{    
    set_name("��",({"da han"}));
    set("gender","����");
    set("attitude","friendly");
    set("combat_exp",2000);
    set("age",36);
    set("str",23);
    set("long","һ������¶��,�������ӵĴ�.\n");
    set_skill("unarmed",10);
    set_skill("blade",10);
    set_skill("sword",10);
    set_skill("dodge",10);
    set_skill("parry",10);
    set("chat_chance",10);
       set("chat_msg",({
             (:random_move:),
    }));
    setup();
add_money("silver",2);
carry_object("/obj/cloth")->wear();
carry_object("/d/obj/weapon"+a[random(sizeof(a))])->wield();
}
int accept_fight(object me)
{
   command("say ����������ү,С�İ������!\n");
   return 0;
}
