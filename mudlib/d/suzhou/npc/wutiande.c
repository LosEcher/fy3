// woodcutter.c
mapping	*quest=({
	([
		"id":"tufei",
		"name":"����",
	]),
});
inherit NPC;
string do_ask();
void create()
{
	set_name("�����",({"wu tiande","tiande","wu"}));
	set("nick_name","�ν�");
	set("gender", "����" );
	set("age", 26);
	set("long","��ͥί�εĹٲ�����������\n");
	        set("inquiry", ([
		"����":	(: do_ask :),
		"renwu":(: do_ask :),
]));
	setup();
	carry_object("/obj/cloth")->wear();
}
string do_ask()
{
	object me;
	mapping my_renwu;
	string id;
	int time;
	me=this_player();
	if(me->query("mingwang")<0)
	return RANK_D->query_respect(me)+"�����������ˣ�������Ѱ�����ɣ�\n";
	id=me->query("renwu_kill/id");
	if(id&&!me->query("renwu_kill/end")&&time()-me->query("renwu_kill/start_time")<me->query("renwu_kill/time")*60)
	return "���ϴε�����û��ɰɣ���\n";
	my_renwu=quest[random(sizeof(quest))];
	time=2+random(10);
	me->set("renwu_kill/id",my_renwu["id"]);
	me->set("renwu_kill/name",my_renwu["name"]);
	me->set("renwu_kill/time",time);
	me->set("renwu_kill/start_time",time());
	me->set("renwu_kill/end",0);
	return time+"����֮�ڰ�"+my_renwu["name"]+"("+my_renwu["id"]+")"+"ɱ�ˣ�";
}
