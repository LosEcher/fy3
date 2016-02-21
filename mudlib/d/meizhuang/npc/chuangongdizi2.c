// master.c

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("��ׯ����������",({"dizi","di zi"}));
        set("gender", "����" );
	set("age",20);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
	set("mingwang",1);
        set("int", 24);
    set("max_kee",600);
    set("eff_kee",600);
    set("kee",600);
    set("max_sen",300);
    set("eff_sen",300);
    set("sen",300);
    set("max_gin",300);
    set("eff_gin",300);
    set("gin",300);
	set_temp("apply/attack",40);
	set_temp("apply/defense",10);
    set_temp("apply/armor",20);
	set("max_force",500);
	set("force",500);
	set_skill("foxuexinde",40);
	set_skill("daoxuexinde",40);


        set("long",
                
	"�ڰ��ӵĴ���ӣ�����Ϊ�µ��Ӵ����书��\n");

	create_family("��ɽ÷ׯ",2,"����");

	set("combat_exp",200000);
        set("score", 200000);


	set_skill("throwing",60);
	set_skill("unarmed",60);
	set_skill("parry",60);
	set_skill("dodge",60);
	set_skill("force",60);
	set_skill("literate",40);
	set_skill("mantianxing",60);
	set_skill("xuantian-neigong",60);
	set_skill("xuantian-bu",60);
	set_skill("xuantian-quan",60);
		map_skill("unarmed","xuantian-quan");
	map_skill("throwing","mantianxing");
		map_skill("force","xuantian-neigong");
		map_skill("dodge","xuantian-bu");
	map_skill("parry","mantianxing");
        setup();
        carry_object("/obj/std/armor/tongjia")->wear();
        carry_object("/obj/std/armor/pixue")->wear();
	carry_object(__DIR__"obj/zhuding")->wield();
	add_money("silver",50);
}

void attempt_apprentice(object ob)
{
        command("say �ܺã�" + RANK_D->query_respect(ob) + 
"���Ŭ�������ձض��гɡ�\n");
        command("recruit " + ob->query("id") );
}

void recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
			ob->set("class","xiake");
}
void init()
{
        ::init();
        add_action("do_get","get");
}
int do_get(string str)
{
        string from;
        object me;
        me=this_player();
        if(!str)        return 0;
        if( sscanf(str,"%s from %s",str,from)==2)       {
        if(from=="bingqijia"&&me->query("family/family_name")!="��ɽ÷ׯ")  {
                command("say ��Ҫ�������ܣ�\n");
                return 1;
        }
        }
        return 0;
}
