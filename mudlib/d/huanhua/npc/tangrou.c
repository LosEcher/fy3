inherit NPC;
void create()
{
    set_name("����",({"tang rou","tang"}));
        set("shen_type",-1);
    set("gender","����");
    set("attitude","friendly");
    set("combat_exp",10000);
    set("age",23);
    set("spi",30);
    set("per",26);
    set("kar",30);
    set("str",23);
    set("long","�Ĵ�������������.\n");
    set_skill("parry",30);
    set_skill("dodge",30);
    set_skill("unarmed",30);
    set_skill("throwing",100);
    set_skill("force",30);
    set_skill("literate",30);
    setup();
add_money("silver",5);
carry_object(__DIR__"obj/yinzhen")->wield();
}
