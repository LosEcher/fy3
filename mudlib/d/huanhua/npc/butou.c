inherit NPC;
int ask_name();
void create()
{
    set_name("����",({"hekun","butou"}));
        set("shen_type",-1);
    set("gender","����");
    set("combat_exp",3500);
    set("age",42);
    set("title","��ͷ");
    set("long","�����,ͷ������Ĳ�ͷ.\n");
    set_skill("unarmed",10);
    set_skill("parry",10);
    set("inquiry",([
           "����":(:ask_name:),
        ]));
       set_skill("dodge",20);
       set_skill("blade",15);
    setup();
add_money("coin",random(40)+10);
carry_object("/obj/cloth")->wear();
carry_object("/d/obj/weapon/blade/dandao")->wield();
}
int ask_name()
{
    command("hehe");
    command("say ����,�Ҿ�������,���ξ�����,���׸��㿴������!\n
          ��������Ҳ�����\n");
    kill_ob(this_player());
    return 1;
}
