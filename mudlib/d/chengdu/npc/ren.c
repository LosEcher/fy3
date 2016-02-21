// kongkong.c

inherit NPC;
inherit F_MASTER;

void consider();

void create()
{
	seteuid(getuid());
        set_name("��������", ({ "kong kong","beggar","qi gai","kong" }) );
	set("title", "������ؤ");
	set("gender", "����" );
        set("age", 32);
	set("long", "һ��������˪֮ɫ������ؤ��\n");
	set("attitude", "peaceful");

	set("str", 25);
	set("con", 25);
	set("int", 25);
	set("dex", 25);

        set("qi", 220);
        set("max_qi", 220);
        set("jing", 220);
        set("max_jing", 220);
        set("neili", 300);
        set("max_neili", 300);

        set("shen_type", 1);
        set("startroom",__DIR__"chengzhong");
	set("thief", 0);
        set("combat_exp", 20000);

	set_skill("force", 40); 
	set_skill("unarmed", 60);
	set_skill("sword", 50);
	set_skill("dodge", 80);
	set_skill("parry", 50);

	set("chat_chance", 20);
	set("chat_msg", ({
		"�տն�˵��: ���ĵĴ�ү�ġ� ����Ҫ���ļ���ͭ��ɡ�\n",
		"�տն�������ش��˸���Ƿ��\n",
		"�տն�����׽ס�����ϵ�ʭ�ӣ����: ��������û�����⣬ȫ�����Ǹ�ҧ���ˡ� \n",
		(: random_move :)
	}) );

	setup();

carry_object("/d/yangzhou/npc/obj/jitui");
carry_object("/d/yangzhou/npc/obj/jiuhu");
        add_money("silver", 2);
        
}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) ) {
		remove_call_out("stealing");
		call_out("stealing", 1, ob);
	}
}

