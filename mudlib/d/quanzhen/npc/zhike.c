// zhike.c ֪�͵���


inherit NPC;

string ask_me();

void create()
{
	set_name("֪�͵���", ({"zhike daozhang","zhike"}));
	set("gender", "����");
	set("age", 42);
	set("long",
		"����ȫ��̵��Ĵ��������������һλ����ǰ����С������\n"
		"���ϴ���������ʶ�㣬�����ݵ�ȫ�����¡��ƽ̼��������Ͼ�\n"
		"���ˣ��������������ϳ˹�����ϲ�������Ƶ�����ʶ��ڣ�\n"
		"�Ͱ�����ɽ�Ŵ�ר�½Ӵ��ÿ͡�\n"
);
	set("attitude", "friendly");
	set("shen_type",1);
	set("str", 18);
	set("int", 18);
	set("con", 20);
	set("dex", 21);

	set("kee", 500);
	set("max_kee", 500);
	set("gin", 350);
	set("max_gin", 350);
	set("force", 600);
	set("max_force", 600);
	
	set("combat_exp", 20000);
	set("score", 15000);
	 
	set_skill("force", 40);
	set_skill("xiantian-qigong", 40);    //��������
	set_skill("sword", 40);             
	set_skill("quanzhen-jian",40);  //ȫ�潣
	set_skill("dodge", 50);
	set_skill("jinyan-gong", 40);   //���㹦
	set_skill("parry", 50);
	set_skill("unarmed",50);
	set_skill("haotian-zhang", 50);    //�����
	set_skill("literate",60);
	set_skill("daoxuexinde",50);

	map_skill("force", "xiantian-qigong");
	map_skill("sword", "quanzhen-jian");
	map_skill("dodge", "jinyan-gong");
	map_skill("parry", "quanzhen-jian");
	map_skill("unarmed", "haotian-zhang");

	create_family("ȫ���", 4, "����");
	
	set("book_count",1);
        set("inquiry", ([
		"ȫ���" :  "��ȫ��������µ����������ڡ�\n",
		"����" : (: ask_me :),
		"ŷ����" : (: ask_me :),
        ]) );

	setup();
	
        carry_object("/obj/weapon/sword")->wield();
	carry_object(__DIR__"obj/grayrobe")->wear();

}

string ask_me()
{
	object me=this_player();
	me->set_temp("tmark/ָ",1);
	return("ȥ����ʦ����������������������澭�������������ʦ��һ��ָ������������ĸ�󡹦��\n");
}



