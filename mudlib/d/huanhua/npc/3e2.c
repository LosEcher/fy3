inherit NPC;
void create()
{
    set_name("Ѧ��Ӣ",({"xue jinyin","xue"}));
        set("shen_type",-1);
    set("gender","����");
    set("title","[�Ͻ�]");
    set("age",36);
    set("str",26);
    set("combat_exp",5000);
    set("long","��������֮��,�����������.\n");
    set_skill("parry",20);
    set_skill("dodge",20);
    set_skill("unarmed",20);
    set_skill("force",25);
    set_skill("axe",40);
    setup();
add_money("silver",2);
carry_object("/d/obj/weapon/axe/bigaxe")->wield();
}
