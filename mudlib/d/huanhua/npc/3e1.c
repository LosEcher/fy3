inherit NPC;
void create()
{
    set_name("������",({"fu","fuyongxiang"}));
	set("shen_type",-1);
    set("gender","����");
    set("title","[˫����]");
    set("combat_exp",5000);
    set("age",36);
    set("str",25);
    set("long","��������֮��,�������������Ӣ֮һ.\n");
    set_skill("parry",20);
    set_skill("dodge",20);
    set_skill("unarmed",20);
    set_skill("force",25);
    set_skill("blade",40);
    setup();
add_money("silver",2);
carry_object("/d/obj/weapon/blade/blade")->wield();
}
