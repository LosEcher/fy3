inherit NPC;
void create()
{
    set_name("�ֹ��",({"yan guigui","shenmo"}));
        set("shen_type",-1);
    set("gender","����");
    set("age",43);
    set("str",23);
    set("title","������ħ");
    set("per",20);
    set("shen_tpye",-1);
    set("combat_exp",50000);
    set("long","Ȩ��������,ʮ����ħ֮һ����.\n");
    set_skill("parry",60);
    set_skill("dodge",50);
    set_skill("unarmed",60);
    set_skill("force",60);
    set_skill("whip",100);
    setup();
add_money("silver",15);
carry_object("/d/obj/weapon/whip/whip")->wield();
}
