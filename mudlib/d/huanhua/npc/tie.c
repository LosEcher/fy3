inherit NPC;
void create()
{
    set_name("������",({"tie xinyue","tie"}));
        set("shen_type",1);
    set("gender","����");
    set("attitude","friendly");
    set("combat_exp",10000);
    set("age",26);
    set("spi",22);
    set("per",20);
    set("kar",25);
    set("str",27);
    set("long","����ˮ������֮һ.\n");
    set_skill("parry",30);
    set_skill("dodge",30);
    set_skill("unarmed",70);
    set_skill("force",60);
    set_skill("literate",30);
    setup();
add_money("silver",5);
}
