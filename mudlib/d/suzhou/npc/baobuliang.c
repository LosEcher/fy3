// woodcutter.c

inherit NPC;

void create()
{
	set_name("������",({"bao buliang","bao","buliang"}));
	set("gender","Ů��");
	set("age",12);
	set("long","����ͬ��С��Ů���ǰ�ׯ�����������顣\n");
	set_skill("sword",40);
	set_skill("dodge",40);
	set("per",30);
	set("combat_exp",9000);
	set_temp("apply/attack",30);
	set("mingwang",1);
	set_temp("apply/defense",40);
	set_temp("apply/damage",10);
	set("str",15);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object(__DIR__"obj/changjian")->wield();
}
void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
	if(ob->query("gender")=="Ů��")	{
	message_vision("����������ǰ����ס$N����˵��������������������𣿡�\n",ob);
	}else
	message_vision("�������������$N����������û�������˼���������ѽ����\n",ob);
}
