inherit NPC;
void create()
{
    set_name("������",({"fu tianyi","shenmo"}));
        set("shen_type",-1);
    set("gender","����");
    set("age",76);
    set("str",26);
    set("title","������ħ");
    set("per",34);
    set("combat_exp",50000);
    set("long","����ʮ��,ʮ����ħ֮һ.����ü���룬��������.\n");
    set_skill("parry",60);
    set_skill("dodge",50);
    set_skill("unarmed",100);
    set_skill("force",60);
    setup();
add_money("silver",15);
}
