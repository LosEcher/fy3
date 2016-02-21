// music   yangzhou's ��С��

inherit NPC;
void create()
{
	set_name("���",({"laobao"}));
	set("gender","Ů��");
	set("age",40);
	set("long",
		"���ĺ������޵ķ糾Ů�ӣ���������Ц�Ŀ����㡣\n");
	set("combat_exp",2000);
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set_skill("unarmed",20);
	set("mingwang",-1);
	set_skill("dodge",30);
	set("attitude", "friendly");
	setup();
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
		message_vision("������$N��Ц������ɲ���"+
		RANK_D->query_respect(ob)+"���ĵط�����\n",ob);
		return ;
	}
	switch( random(2) ) {
		case 0:
		message_vision("���������$N������λ"+
		RANK_D->query_respect(ob)+"���ǿ����Ҽ���λ�����˰ɡ�\n",ob);
			break;
		case 1:
		message_vision("������ǰ����һ����ס$N���ֽе��������ǣ������ӿͰɣ�\n",ob);
			break;
                           }
}
int accept_fight(object who)
{
	int i;
	object npc,env,*inv;
	npc=new(__DIR__"dashou");
	env=environment(this_object());
	message_vision("������$N��Ц��������Ϊ������ô��������\n"+
	"�����ģ���\n���������Ĵ������̽�$N��Χ��������\n",who);
	if(sizeof(children(base_name(npc)))<=4 && (int)query("have_ds")<=4)
	{
		add("have_ds",1);
		npc->move(env);
	}
	else	destruct(npc);
	this_object()->kill_ob(who);
	inv=all_inventory(env);
	for(i=0;i<sizeof(inv);i++)	{
		if (inv[i]->query("id")!="dashou")	continue;
		inv[i]->kill_ob(who);
	}
	return 1;
}
