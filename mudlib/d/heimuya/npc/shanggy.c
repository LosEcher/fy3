//tonbaiwei.c
inherit NPC;

void greeting(object);
void init();
void create()
{
	set_name("�Ϲ���", ({ "shangguan yun","shangguan","yun"}) );
	set("gender", "����" );
	set("age", 40);
	set("banghui" , "���½�");
	set("bh_rank","�׻��ó���");
	set("long", "�����ֳ���, ˫Ŀ�����Ȼ, �������ơ�\n");
	set("attitude", "friendly");
	set("shen_type", -1);

	set("per", 21);
	set("str", 23);
	set("int", 23);
	set("con", 22);
	set("chat_chance",5);
	set("chat_msg",({
"�Ϲ���մմ��ϲ��������������Һ���ʶ������Ҫ��ְ�ˡ�\n",
"�Ϲ��Ƶ���һ�����еĸ��ȣ��ٺ���Ц������\n",
}));

	set("max_kee", 800);
	set("max_gin",800);
	set("force", 2000);
	set("max_force", 2000);
	set("force_factor", 200);
	set("combat_exp", 360000);
	set("score", 30000);
	set("mingwang",-30000);

	set_skill("force", 80);
	set_skill("dodge", 120);
	set_skill("unarmed", 80);
	set_skill("parry", 80);
	set_skill("staff",100);
	set_skill("hamagong",70);
	set_skill("chanchu-bufa", 120);
	set_skill("lingshe-zhangfa", 100);

	map_skill("force", "hamagong");
	map_skill("dodge", "chanchu-bufa");
	
	map_skill("parry", "lingshe-zhangfa");
	map_skill("staff", "lingshe-zhangfa");
	
	setup();
         carry_object(__DIR__"obj/gangzhang")->wield();
         carry_object(__DIR__"obj/cloth")->wear();
	carry_object(__DIR__"obj/zhenzhu");
	carry_object(__DIR__"obj/card2");

}



