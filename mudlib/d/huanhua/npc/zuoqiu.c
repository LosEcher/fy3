inherit NPC;
void create()
{
    set_name("����Ȼ",({"zuo qiu","chaoran"}));
        set("shen_type",1);
    set("gender","����");
    set("attitude","friendly");
    set("combat_exp",10000);
    set("age",24);
    set("spi",23);
    set("per",22);
    set("kar",21);
    set("str",26);
    set("long","����ͨ��·������,������ˮ������.\n");
    set_skill("parry",30);
    set_skill("dodge",30);
    set_skill("unarmed",70);
    set_skill("force",30);
    set_skill("literate",30);
    setup();
add_money("silver",5);
}
