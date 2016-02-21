// master.c

inherit NPC;
inherit F_MASTER;
int do_ask();
void create()
{
	object ob;
	set_name("�ڰ���",({"heibai zi","heibaizi","zi"}));
	set("nickname","��ׯ��");
        set("gender", "����" );
	set("age",40);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
	set("mingwang",1);
        set("int", 24);
    set("max_kee",1000);
    set("eff_kee",1000);
    set("kee",1000);
    set("max_sen",500);
    set("eff_sen",500);
    set("sen",500);
    set("max_gin",500);
    set("eff_gin",500);
    set("gin",500);
	set("key",1);
	        set("inquiry",([
		"����":	(: do_ask :),
	]));
        set("max_force", 1500);
        set("force", 1500);
	set_skill("foxuexinde",80);
	set_skill("daoxuexinde",80);
	set("force_factor",80);

	set("rank_info/respect","��ׯ��");

        set("long",
                
	"��ɫ���ף�ʹ�˸е�һ�����⡣\n");

	create_family("��ɽ÷ׯ",1,"ׯ��");
	set("title","��ɽ÷ׯ");

	set("combat_exp",800000);
        set("score", 200000);


	set_skill("throwing",150);
	set_skill("unarmed",150);
	set_skill("parry",150);
	set_skill("dodge",150);
	set_skill("force",150);
	set_skill("literate",100);
	set_skill("xuantian-neigong",150);
	set_skill("xuantian-bu",150);
	set_skill("xuantian-quan",150);
	set_skill("mantianxing",150);
	map_skill("unarmed","xuantian-quan");
	map_skill("force","xuantian-neigong");
	map_skill("dodge","xuantian-bu");
	map_skill("throwing","mantianxing");
	map_skill("parry","mantianxing");
        setup();
	ob=carry_object(__DIR__"obj/weiqizi");
	ob->set_amount(200);
	ob->wield();
	carry_object(__DIR__"obj/sipao")->wear();
	add_money("gold",3);
}

void attempt_apprentice(object ob)
{
	if(ob->query_skill("xuantian-neigong",1)<50)	{
		command("say ��λ"+RANK_D->query_respect(ob)+"�ġ������ڹ�����������������\n");
		return;
	}
        command("say �ܺã�" + RANK_D->query_respect(ob) + 
"���Ŭ�������ձض��гɡ�\n");
        command("recruit " + ob->query("id") );
}

void recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
			ob->set("class","xiake");
}
int do_ask()
{
	object me,key;
	me=this_player();
	if(me->query("family/family_name")!="��ɽ÷ׯ")	{
		command("sigh");
		command("say ���Ǳ�ׯ��˽�£�ʵ����Ϊ���˵�Ҳ��");
		return 1;
	}
	if(me->query("family/master_id")!="heibai zi")	{
		command("sneer");
		command("say �㲻��"+me->query("family/master_name")+"�ĺ�ͽ���������Ҹ�ʲô��");
		return 1;
	}
	if(!me->query_temp("oldsix_flag/ask"))	{
		command("dunno");
		say("˵�գ��ڰ���������ת��֪����Щʲô��\n");
		return 1;
	}
	if(query("key")==0)	{
		command("say ������̫���ˣ����ѰѶ����������ˡ�");
		say("˵��֮�󣬻ع�ͷȥ���������ˡ�\n");
		return 1;
	}
	if(random(me->query_kar())>20)	{
		command("sigh");
		command("say �Ǻðɣ����Ҫ��Ϊʦ���ܰ���");
		tell_object(me,"˵�գ��ڰ��Ӵӻ����ͳ���Կ�׽������㡣\n");
		key=new(__DIR__"obj/yaoshi.c");
		key->move(me);
	set("key",0);
		return 1;
	}
	say("�ڰ��ӿ���֨֨����Ҳ��֪˵Щʲô��\n");
	return 1;
}
