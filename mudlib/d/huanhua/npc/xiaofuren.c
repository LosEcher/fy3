inherit NPC;
void create()
{
    set_name("���ɺ",({"sun huisan","furen","woman"}));
        set("shen_type",1);
    set("gender","Ů��");
    set("age",43);
    set("str",26);
    set("title","������");
    set("per",43);
    set("combat_exp",70000);
    set("long","佻�������������¥֮��.\n");
    set_skill("parry",60);
    set_skill("dodge",90);
    set_skill("unarmed",90);
    set_skill("force",70);
    set_skill("sword",90);
    setup();
add_money("silver",15);
carry_object("/d/obj/weapon/sword/changjian")->wield();
}
