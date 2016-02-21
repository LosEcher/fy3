// dubi.c ��������

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("��������", ({ "dubi shenni", "dubi" }));
	set("gender", "Ů��");
	set("age", 44);
	set("str", 25);
	set("dex", 20);
	set("long", "����һλ����Ů�ᣬ���շ�����Ŀ��ǰ����\n"+
	"һֻ����տ���Ҳ�����Ƕ���һ�ۣ�������ˣ�\n"+
	"��Ȼ�ڲ�ס�����˵ķ�ɡ�\n");
	set("combat_exp", 200000);
	set("score", 10000);
	set("shen_type", 1);
	set("attitude", "peaceful");

	set_skill("whip", 150);
	set_skill("force", 90);
	set_skill("unarmed", 90);
	set_skill("dodge", 150);
	set_skill("parry", 90);

	set_temp("apply/attack", 100);
	set_temp("apply/defense", 100);
	set_temp("apply/armor", 40);
	set_temp("apply/damage", 100);
	set("force", 1500); 
	set("max_force", 1500);
	set("force_factor", 100);
        set("inquiry", ([
                "����" :  "����̾��һ������˵���������ҵĵ�����ӣ�\n�˳���ͦ��������ֻ��ϧ��ΤС��ƭȥ�ˡ�\n",
        ]) );
	setup();
       carry_object("/d/city2/obj/fuchen")->wield();
	carry_object("/obj/cloth")->wear();
	add_money("gold", 2);
}

void init()
{
::init();
remove_call_out("greeting");
call_out("greeting", 1, this_player() );
}


void greeting(object ob)
{
int i;	
object man,*obj;

man=this_object();
message_vision("$N̤��������ֻ������Ů���£���Ϣ��ֹ��\n",ob);		
if( !ob || environment(ob) != environment()) return;
    
if((int)ob->query_temp("hastrystab")==6)
{
message_vision(HIC "$N̤��������ֻ������ʬ���£�һ��Ů�ᴭϢ��ֹ��\n" NOR,ob);		
ob->delete_temp("hastrystab");
ob->delete_temp("warned2");
if(ob->query("mingwang")<600)
{
ob->add("mingwang",100);
message_vision(HIC "$N�Ľ�����������ˣ�\n" NOR,ob);
command("tell "+ob->query("id")+" �����ڵĽ��������� " +(string)(ob->query("mingwang")));
return ;
}
message_vision(HIC "����Ů���$N΢΢һЦ��\n" NOR,ob);		
return;
}
obj = all_inventory(environment(ob));
for(i=0; i<sizeof(obj); i++) {
	if( !living(obj[i]) || userp(obj[i]) || obj[i]==man ) continue;
	if( !userp(obj[i]) ) { 
		man->set_leader(obj[i]);
		man->kill_ob(obj[i]);
		obj[i]->fight_ob(man);
		}
	}
return ;
}
