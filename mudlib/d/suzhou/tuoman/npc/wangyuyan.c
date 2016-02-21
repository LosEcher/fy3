// guard.c

#include <ansi.h>

inherit NPC;
mapping valid_types = ([
        "unarmed":      "ȭ��",
        "sword":        "����",
        "blade":        "����",
        "stick":        "����",
        "staff":        "�ȷ�",
        "throwing":     "����",
        "parry":        "�м�",
        "dodge":        "�Ṧ",
        "move":         "�ж�",
		"whip":         "�޷�",
]);

void create()
{
	set_name("������",({"wang yuyan","wang","yuyan"}));
	set("mingwang",1);
	set("title","�˼�����");
	set("gender","Ů��");
	set("age",18);
	set("str",20);
	set("per",50);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"���ɰ�����ֱ�������㵹��\n"
	);
	set("combat_exp",50);
	set("attitude","peace");
	set_skill("parry",10);
	set_skill("dodge",10);
	set_skill("unarmed",10);
	setup();
	carry_object(__DIR__"obj/silk")->wear();
}
void init()
{
object ob;
        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
		}
//	add_action("do_ask","ask");
}
int do_ask(string str)
{
	string dest,topic,*skill;
	int i,count;
	object me;
	me=this_player();
	if(!str|| sscanf(str, "%s about %s", dest, topic)!=2 )	{
		return 0;
								}
	if(dest!="yuyan") return 0;
	if(me->query("kee")<50||me->query("sen")<50||me->query("gin")<50)	{
		tell_object(me,"��ľ�����̫���ˣ����ǵȻ����ֽ̰ɣ�\n");
		return 1;
	}
	if(!me->query_skill(topic,1))	{
		message_vision("�����̶�$N˵�����㼴Ȼ�������Ź������������ָ���أ�\n",me);
		return 1;
					}
	if(!undefinedp(valid_types[topic])) {
		message_vision("�����̶�$N̾����"+to_chinese(topic)+"������"+
		valid_types[topic]+"�Ļ��������ÿ�"+RANK_D->query_respect(me)+
		"�Լ�������\n",me);
	return 1;
					}
	if(topic=="force"||SKILL_D(topic)->valid_enable("force"))	{
	message_vision("�����̶���$Nҡ��ҡͷ����"+to_chinese(topic)+
	"ֻƾ���ǿ�����ʲô�ġ�\n"+
		"������"+RANK_D->query_respect(me)+"�Լ��������а���\n",me);
	return 1;
	}
	if(topic=="literate"||SKILL_D(topic)->valid_enable("literate"))	{
	message_vision("�����̶���$N��Ц����"+to_chinese(topic)+
	"�ҿ���һ�Բ�ͨ��"+
		"��������ֻ���ұ����ˡ�\n",me);
		return 1;
		}
	if(me->query("potential")-me->query("learned_points")<1)
	{
	message_vision("��������Ц��������ȥ���۵�Ǳ����˵�ɣ�\n",me);
	return 1;
	}
	count=0;
	skill=keys(valid_types);
	for(i=0;i<sizeof(skill);i++)	{
		count +=SKILL_D(topic)->valid_enable(skill[i]);
					}
	if (count>0)	{
	message_vision("$N��"+to_chinese(topic)+"����������ǰ������һ����\n",me);
	message_vision("�����̵�������$N������һ��\n",me);
	if(random(me->query_int())>25)	{
		message_vision("$NĬĬ��˼����һ���ƺ���������\n",me);
	me->improve_skill(topic,random(me->query("int")*10));
					}
	else
		{
			message_vision("$NĬĬ��˼����һ�󣬵��޷����Ҫ����\n",me);
		}
	me->receive_damage("sen",50);
	me->receive_damage("kee",50);
	me->receive_damage("gin",50);
	me->set("learned_points",me->query("learned_points")+1);
	return 1;
		}
	message_vision("������˵��������"+to_chinese(topic)+
	"������������Ĺ�����û���о�����\n"+
RANK_D->query_respect(me)+"�����ұ���ȥ��һ�ʰɡ�\n",me);
	return 1;
}
void greeting(object ob)
{
 	if( !ob || environment(ob) != environment() ) return;
	say("ֻ������Ů���ĵ�̾�˿�����\n"+
		"��֪������ںδ����Ƿ񻹼ǹ����ҡ�\n");
}
