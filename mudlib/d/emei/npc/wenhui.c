// wenhui.c 文晖小师太

inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("文晖小师太", ({ "wenhui","wenhui xiaoshitai","xiaoshitai"}));
        set("long",
                "她是峨嵋派的第五代弟子。\n");
        set("gender", "女性");
        set("age", 15);
        set("attitude", "peaceful");
        set("mingwang", 100);
        set("class", "bonze");

        set("str", 20);
        set("int", 20);
        set("con", 22);
        set("per", 30);

        set("max_kee", 150);
        set("max_gin", 100);
        set("force", 150);
        set("max_force", 150);

        set("combat_exp", 2000);
        set("score", 1000);

        set_skill("force", 30);
        set_skill("dodge", 20);
        set_skill("unarmed", 20);
        set_skill("parry", 20);
        set_temp("apply/attack", 15);
        set_temp("apply/defense", 15);
        set_temp("apply/damage", 5);
        set("chat_chance",5);
        set("chat_msg",({
      "文晖道:每天出来都要拉藤蔓,早晚一天被我砍了.\n",
      "文晖道:周师叔在后洞的瀑布上端修行,从不下来.\n",
      "文晖道:听说这池子通着另一个,可我老不敢下去试试.\n",
      }));

        create_family("峨嵋派", 5, "弟子");

        setup();
        carry_object("/obj/weapon/sword")->wield();
        carry_object("/obj/armor/ni-cloth.c")->wear();
        carry_object("/obj/armor/ni-xie")->wear();
}
void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
               remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
     if( !ob || environment(ob) != environment() ) return;
     command( "say 嘿,水里快活吗?再多呆会呀。\n");
}


