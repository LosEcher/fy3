inherit NPC;
void create()
{
    set_name("������",({"kong yangqin","kong"}));
        set("shen_type",1);
    set("gender","����");
    set("age",54);
    set("str",23);
    set("title","��������");
    set("per",23);
    set("combat_exp",70000);
    set("long","����������֮һ,Ȩ��������.\n");
    set_skill("parry",60);
    set_skill("dodge",60);
    set_skill("unarmed",30);
    set_skill("force",60);
    set_skill("sword",100);
    setup();
add_money("silver",15);
carry_object(__DIR__"obj/bailian-jian")->wield();
}
