inherit NPC;
void create()
{
    set_name("���´�",({"dahan","man"}));
        set("shen_type",-1);
    set("gender","����");
    set("combat_exp",2000);
    set("age",38);
    set("long","������,�������ŵĴ�.\n");
    set_skill("unarmed",10);
    set_skill("blade",10);
    setup();
add_money("coin",30);
carry_object("/obj/cloth")->wear();
carry_object(__DIR__"obj/niuer-dao")->wield();
}
int accept_fight(object me)
{
    command("say �Ҹ����Ӻ�,���������С��!\n");
    set_leader(me);
    kill_ob(me);
    return 1;
}
