// ren-yingying.c

inherit NPC;

void create()
{
        set_name("��ӯӯ", ({ "ren yingying", "yingying" }) );
        set("title","ħ��ʥ��");
        set("gender", "Ů��" );
        set("age", 19);
        set("str", 16);
        set("con", 30);
        set("int", 30);

        set("attitude", "friendly");

        set("gin",1000);
        set("max_gin",1000);
        set("kee",1500);
        set("max_kee",1500);
        set("force", 1200);
        set("max_force", 1200);
        set("force_factor", 50);
        set("mingwang",50000);

        set("long",     "��ӯӯ��ħ��ǰ���������еĶ���Ů����\n");
        set("combat_exp", 500000);
        set("shen_tpye", 1);
        set_skill("unarmed", 90);
        set_skill("sword", 90);
        set_skill("force", 100);
        set_skill("parry", 100);
        set_skill("dodge", 100);
        set_skill("literate", 100);
        set("chat_chance",5);
        set("chat_msg",({
 "��ӯӯüͷ���壬����Ѱ˼����Ȼ������������������ޡ�\n",
 "��ӯӯ���������´������ղ��ڣ�Ϊ���������㲡�",
 }));

        set_skill("huashan-jianfa", 100);
        set_skill("zixia-shengong", 100);
        set_skill("huashan-quanfa", 100);
        set_skill("feiyan-huixiang", 100);

        map_skill("sword", "huashan-jianfa");
        map_skill("parry", "huashan-jianfa");
        map_skill("force", "zixia-shengong");
        map_skill("unarmed", "huashan-quanfa");
        map_skill("dodge", "feiyan-huixiang");
        setup();

        carry_object("/obj/std/weapon/duanjian")->wield();
        carry_object("/obj/armor/female5-cloth")->wear();

}

int accept_fight(object me)
{
        command("say �Ҿò�ͬ�˽��֣����Ҵ�����.");
        return 0;
}
/*void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting",2 , ob);
        }
}
void greeting(object ob)
{
      say( "��ӯӯ΢΢̾�˿���������֪���ҵ��������ںη�?��\n");
	if ( ((int)ob->query_kar()>=25) && ((int)ob->query_int()>=25) )
      {
           tell_object(ob,"��ӯӯ˵������������ҵ���������.\n");
           ob->set("marks/feng-qingyang",1);
      tell_object(ob,"��ӯӯ������仰��ƮȻ��ȥ.\n");
      call_out("goway",10);
	}
}
void goway(){
      destruct(this_object());
}  */
