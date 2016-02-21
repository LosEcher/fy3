// huang_yaoshi.c
// 97.9.20 by Aug

inherit NPC;
inherit F_MASTER;

void autorecover();
void autoheal();

void create()
{
	set_name("��ҩʦ", ({ "huang yaoshi","huang" }) );
	set("title", "�һ�������");
	set("nickname","��а");	
	set("gender", "����");
	set("age", 61);
	set("class","taohua");

	set("long","��ҩʦ�Ǹ��������ݣ�������ˬ���������٣���Ȼ��������ˡ�\n");
	set("rank_info/respect", "�һ�������");

	set("max_gin", 3000);
	set("max_kee", 5000);
	set("max_sen", 3000);

	set("max_atman", 3000);
	set("atman", 3000);
	set("max_force", 10000);
	set("force", 10000);
	set("max_mana", 3000);
	set("mana", 3000);

        set("str", 50);
	set("cor", 35);
	set("cps", 35);
	set("spi", 35);
        set("int", 100);
        set("con", 40);
	set("kar", 50);
        set("per", 35);

	set("combat_exp", 1000000);
	set("score",100000);

	set_skill("force", 200);
	set_skill("parry", 200);
	set_skill("dodge", 200);
	set_skill("sword", 200);
        set_skill("literate", 200);
        set_skill("unarmed", 200);

        set("chat_chance_combat", 30);
	set("chat_msg_combat", ({
		(: perform_action,"unarmed.tanzhi" :),
                (: autorecover :),
	}) );

        set("chat_chance", 5);
        set("chat_msg",  ({
                (: autoheal :) ,
        }) );

//	set_temp("apply/attack", 100);
//	set_temp("apply/defense", 100);
//	set_temp("apply/armor", 100);
//	set_temp("apply/damage", 100);

      set_skill("suiyu-force",200);
      set_skill("luoying-sword",200);
      set_skill("luoying-strike",200);
      set_skill("bagua-steps",200);
      set_skill("lanhua-finger",200);
//      set_skill("medicine",200);
	
	map_skill("dodge",  "bagua-steps");
	map_skill("unarmed","lanhua-finger");
	map_skill("parry",  "luoying-sword");
	map_skill("force",  "suiyu-force");
        map_skill("sword",  "luoying-sword");
	
	create_family("�һ���", 1,"����");

//	set("family/family_name","�һ���");
//	set("family/generation",1);
//	set("family/title","������");
//	set("family/priv",-1);

	setup();

	add_money("gold", 10);
	carry_object(__DIR__"obj/changshan")->wear();
        carry_object(__DIR__"obj/baiyuxiao")->wield();
        carry_object(__DIR__"obj/changshan");
        carry_object(__DIR__"obj/changshan");
        carry_object(__DIR__"obj/baiyuxiao");
        carry_object(__DIR__"obj/baiyuxiao");
        carry_object(__DIR__"obj/jiuhua");
        carry_object(__DIR__"obj/jiuhua");
        carry_object(__DIR__"obj/jiuhua");
        carry_object(__DIR__"obj/jiuhua");
        carry_object(__DIR__"obj/jiuhua");
}

void autorecover()
{
        object me,ob;

        me=this_player();

        if( (me->query("force")<300) || (me->query("eff_kee") < (me->query("max_kee")/2)) )
        {
                ob=present("jiuhua",me);
                if(objectp(ob))
                {
                        command("eat jiuhua");
                }
        }

        if(me->query("kee")<me->query("eff_kee"))
        {
                command("yun recover");
	}

        if( !me->query_temp("weapon") )
        {
                ob=present("yuxiao",me);
                if(objectp(ob))
                {
                        command("wield yuxiao");
                }                
        }

        if( !me->query_temp("armor") )
        {
                ob=present("cloth",me);
                if(objectp(ob))
                {
                        command("wear cloth");
                }                
        }

}

void autoheal()
{
	object me;
	int i;

	me=this_object();

        if( me->query("eff_kee") > (me->query("max_kee")/2) )
        {
                for(i=0;(me->query("eff_kee")<me->query("max_kee"));i=i)
                {
                        command("yun heal");
                }
        }

        if(me->query("kee")<me->query("eff_kee"))
        {
                command("yun recover");
	}
}

int accept_fight(object ob)
{
	command("say �����Ǿ�������һ����");
	return 1;
}

int accept_kill(object ob)
{
	command("say ��Ҫ����ô��");
	return 1;
}

void attempt_apprentice(object me)
{
	object ob;
	int i;

      ob = present("letter", me);
	if(objectp(ob)) 
	{
		destruct(ob);

		message_vision(
"�Ƶ����ӹ�$N���ϵ��Ƽ��š�
���˵�˵��$N���ҹ���ׯ��������ӣ�ϣ�������ٽ��������ﱾ����ѧ��\n",me);

//                me->set("potential",me->query("potential")+300);

	}
	else
	{
		message_vision(
"�Ƶ�������$N���˵�˵��$N�����������ܽ���������ǲ��ɶ�õ��˲Ű���\n"
,me);

//                me->set("potential",me->query("potential")+600);         
	}

	message_vision("$N�Ǻ�Ц�����Ҿ�����$n����ͽ�ܰɣ�\n", this_object(),me);

	command("recruit " + me->query("id") );

	command("chat* haha");
	command("chat û�뵽�Ϸ������ĺ֮���ֵ�"+me->name()+"�����Ŀ���֮�š�");
}

void recruit_apprentice(object me)
{
	if( ::recruit_apprentice(me) )
		me->set("class1", "taohua");
}


