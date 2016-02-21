// lao-denuo.c

inherit NPC;


void create()
{
        set_name("�͵�ŵ", ({ "lao denuo","lao","denuo" }) );
        set("nickname", "�Ϻ���");
        set("gender", "����");
        set("age", 61);
        set("long",
                "�͵�ŵ������Ⱥ�Ķ����ӡ�\n");
        set("attitude", "peaceful");

        set("str", 26);
        set("con", 30);
        set("int", 24);
        set("dex", 30);
	set("force",1200);
	set("max_force",1200);
	set("force_factor",80);

	set("combat_exp",150000);
        set("shen_type", -1);
        set("score", 20000);

        set("chat_chance_combat", 80);
        set("chat_msg_combat", ({
                (: exert_function, "powerup" :),
                (: exert_function, "recover" :)
        }) );

	set_skill("unarmed",80);
	set_skill("sword",80);
	set_skill("force",80);
	set_skill("parry",80);
	set_skill("dodge",80);
        set_skill("literate", 40);

	set_skill("huashan-jianfa",80);
	set_skill("zixia-shengong",80);
	set_skill("huashan-quanfa",80);
	set_skill("feiyan-huixiang",80);

        map_skill("sword", "huashan-jianfa");
        map_skill("parry", "huashan-quanfa");
        map_skill("force", "zixia-shengong");
        map_skill("unarmed", "huashan-quanfa");
        map_skill("dodge", "feiyan-huixiang");

        create_family("��ɽ��", 14, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
carry_object("/d/huashan/npc/obj/zixia-book");
}

void init()
{
        object ob;

        ::init();

        if( interactive(ob=this_player()) && !is_fighting())
        {
                remove_call_out("greeting");
                call_out("greeting",1,ob);
        }
}

void greeting(object ob)
{
	if((string)ob->query("gender")=="����" &&
		(string)ob->query("family/family_name")!="��ɽ��")
	tell_object(ob,query("name")+"˵������λ"+
	RANK_D->query_respect(ob)+"�������һ�ɽ��ʦѧ�յģ�\n");
	return;
}
void attempt_apprentice(object ob)
{
	string family;

	family=(string)ob->query("family/family_name");
	if((string)ob->query("gender")!="����")
	command("say ����"+RANK_D->query_respect(ob)+
	"Ϊ�ο������Ц��");
	else if((int)ob->query("mingwang")<0)
	command("say �ߣ��һ�ɽ���պڵ��ϵ����");
	else if(family=="��ɽ��" && (int)ob->query("family/generation")<=(int)query("family/generation"))
	command("say ��ɲ��ҵ�����");
	else	{
	command("say �ðɣ����Ҿ�����Ϊͽ�ɡ�");
	command("recruit " + ob->query("id") );
	ob->set("class","xiake");
	}
}


