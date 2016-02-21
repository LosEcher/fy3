// yue-lingshan.c

inherit NPC;

void create()
{
        set_name("����ɺ", ({ "yue lingshan", "yue", "lingshan" }) );
        set("nickname", "Сʦ��");
        set("gender", "Ů��" );
        set("age", 17);
        set("per", 29);
        set("str", 16);
        set("con", 24);
        set("dex", 30);
        set("int", 27);

        set("attitude", "friendly");

        set("max_kee",800);
        set("max_gin",500);
        set("force", 1000);
        set("max_force", 1000);
        set("force_factor", 80);
        set("combat_exp", 100000);

        set("long",     "����ɺ�ǻ�ɽ����������Ⱥ�Ķ���Ů����\n");

        create_family("��ɽ��", 14, "����");

	set_skill("unarmed",80);
	set_skill("sword",80);
	set_skill("force",80);
	set_skill("parry",80);
	set_skill("dodge",80);
        set_skill("literate", 70);

	set_skill("huashan-jianfa",80);
//      set_skill("yunu-sword", 80);
	set_skill("huashan-quanfa",80);
	set_skill("zixia-shengong",80);
	set_skill("feiyan-huixiang",80);

        map_skill("sword", "huashan-jianfa");
        map_skill("parry", "huashan-jianfa");
        map_skill("force", "zixia-shengong");
        map_skill("unarmed", "huashan-quanfa");
        map_skill("dodge", "feiyan-huixiang");

        setup();

        carry_object(__DIR__"obj/green_water_sword")->wield();
        carry_object("/obj/cloth")->wear();

}

int accept_fight(object me)
{
        command("say СŮ����������Ķ���?");
        return 0;
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
	if((string)ob->query("gender")=="Ů��" &&
                (string)ob->query("family/family_name")!="��ɽ��")
        tell_object(ob,query("name")+"˵������λ"+
        RANK_D->query_respect(ob)+"�������һ�ɽ��ʦѧ�յģ�\n");
        return;
}
void attempt_apprentice(object ob)
{
	string family;

	family=(string)ob->query("family/family_name");
	if((string)ob->query("gender")!="Ů��")
	command("say �ף�"+RANK_D->query_respect(ob)+
        "Ϊ�ο������Ц��");
        else if((int)ob->query("mingwang")<0)
	command("say �һ�ɽ���պڵ��ϵ����");
	else if(family=="��ɽ��" && (int)ob->query("family/generation")<=(int)query("family/generation"))
	command("say ������ɲ��ҵ���");
        else    {
        command("say �ðɣ����Ҿ�����Ϊͽ�ɡ�");
        command("recruit " + ob->query("id") );
        ob->set("class","xiake");
        }
}

