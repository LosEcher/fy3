// music   yangzhou's ����

inherit NPC;

void create()
{
        set_name("����", ({ "weibing", "bing", "wei" }) );
        set("gender", "����" );
        set("age", 25);
        set("long",
                "��ͨ���س�������\n");
        set("mingwang", 1);
        set("combat_exp", 5000);
	set_skill("blade",30);
	set_skill("parry",30);
	set_skill("unarmed",30);
        set_skill("dodge",30);
        set("str", 30);
        set("cor", 20);
        set("con", 2);
        set("int", 2);
        set("attitude", "peaceful");
        setup();
        carry_object("/obj/armor/tiejia")->wear();
        carry_object("/obj/weapon/changdao")->wield();
        add_money("silver",10);
}
