inherit NPC;
void create()
{
    set_name("ս����",({"zhan qili","zhan"}));
        set("shen_type",-1);
    set("gender","����");
    set("title","[ǹ������]");
    set("combat_exp",5000);
    set("age",36);
    set("str",23);
    set("long","��������֮һ,�����������.\n");
    set_skill("parry",20);
    set_skill("dodge",20);
    set_skill("unarmed",20);
    set_skill("force",25);
    set_skill("spear",40);
    setup();
add_money("silver",2);
carry_object("/d/obj/weapon/spear/tiespear")->wield();
}
