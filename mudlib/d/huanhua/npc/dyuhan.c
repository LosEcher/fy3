inherit NPC;
void create()
{
    set_name("����",({"deng yuhan","deng"}));
        set("shen_type",1);
    set("gender","����");
    set("attitude","friendly");
    set("combat_exp",10000);
    set("age",22);
    set("spi",25);
    set("per",25);
    set("kar",21);
    set("str",22);
    set("long","���Ͻ��ɵ���,Ҳ������ˮ�ĺ�����.\n");
    set_skill("parry",30);
    set_skill("dodge",40);
    set_skill("unarmed",20);
    set_skill("force",25);
    set_skill("literate",40);
    set_skill("sword",80);
    setup();
add_money("silver",5);
carry_object("/d/obj/weapon/sword/changjian")->wield();
}
