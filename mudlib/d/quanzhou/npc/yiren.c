// dizi.c

inherit NPC;

void create()
{
	int skill;

	set_name("��ˣ����", ({ "yiren", "zhasua"}) );
	set("gender", "����" );
	set("age", 20+random(30));
	set("combat_exp",10000+random(30000));
       set_skill("parry",20+random(40));
	set_skill("dodge", 20+random(40));
	set_skill("unarmed", 20+random(40));
        set("chat_chance", 8);
        set("chat_msg", ({
                "����·��,�и���Ŀ,�����廢���ŵ�!\n",
                "��λ��������,��Ǯ�İ��Ǯ��,ûǮ�İ���˳�.\n",
                "���³�������,�������һ�˵�!\n",
                "��ˣ����������ʽ,��������������һ�˵�.\n",
        }) );

	setup();
	carry_object("/obj/cloth")->wear();
       carry_object("/d/quanzhou/obj/blade")->wield();
            add_money("silver",5);
}
