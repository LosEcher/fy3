inherit NPC;
void create()
{
    set_name("������",({"zhong wuli","zhong"}));
	set("shen_type",-1);
    set("gender","����");
    set("title","[�ʺ���]");
    set("combat_exp",5000);
    set("age",36);
    set("str",25);
    set("long","һ����ħ���¶���֮һ.\n");
    set_skill("parry",20);
    set_skill("dodge",20);
    set_skill("unarmed",20);
    set_skill("force",25);
    set_skill("blade",40);
    setup();
add_money("silver",2);
carry_object(__DIR__"obj/jingangwu")->wield();
}
