inherit NPC;
void create()
{
    set_name("����ˮ",({"xiao","xiaoqiushui"}));
        set("shen_type",1);
    set("gender","����");
    set("attitude","friendly");
    set("combat_exp",15000);
    set("int",50);
    set("spi",40);
    set("per",40);
    set("kar",50);
    set("str",25);
    set("long","佻���������¥�ĵ���������.
��С�ʹ������ˣ������Ŀ��������ʫ�ƻ�.\n");
    set_skill("parry",100);
    set_skill("dodge",100);
    set_skill("unarmed",100);
    set_skill("sword",100);
    set_skill("force",100);
    set_skill("literate",100);
    setup();
add_money("silver",10);
carry_object("/d/obj/weapon/sword/changjian")->wield();
}
