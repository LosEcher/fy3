inherit NPC;
void create()
{
    set_name("���Ϻ�",({"oldman","man"}));
    set("gender","����");
    set("combat_exp",1500);
    set("age",56);
    set("long","��ɫ��ڵĽ�������.\n");
    set_skill("unarmed",10);
    set_skill("parry",20);
    setup();
add_money("coin",random(40)+10);
carry_object("/obj/cloth")->wear();
}
int accept_fight(object me)
{
    command("say �Ϻ������������,û��������!\n");
    return 0;
}