inherit NPC;
void create()
{
    set_name("����¥",({"xiao xilou","xiao","man"}));
        set("shen_type",1);
    set("gender","����");
    set("age",45);
    set("str",30);
    set("title","佻���������");
    set("per",43);
    set("combat_exp",100000);
    set("long","��ʮ��ǰ,ƾһ��ƽ������佻�����,����������֮һ.
������ƮƮ,��ȱ���.\n");
    set_skill("parry",100);
    set_skill("dodge",100);
    set_skill("unarmed",120);
    set_skill("force",120);
    set_skill("sword",110);
    setup();
add_money("silver",15);
carry_object("/d/obj/weapon/sword/changjian")->wield();
}
