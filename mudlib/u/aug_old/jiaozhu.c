// jiaozhu.c ������ by ksusan 7/12/97 7/27/97 12:00

#include <ansi.h>

inherit NPC;
inherit F_MASTER;

#define MY_WALK_DIR "/d/wudu"
void say_something();
void go_dir();
int go_ask();
int go_up();


/*
string * cmds=({
    "u&me","hi","poem","addoil",
    "hi","sorry"});
*/

void create()
{
	set_name("������", ({ "he tishou","he","tishou","master"}) );
    set("title","�嶾�̽���");
	set("nickname","ò���绨");
	set("age", 24);
	set("gender", "Ů��");

	set("long", @LONG
�����ط��ۺ�������ü���ޣ���Ǻ���Ц�⣬ԼĪ��ʮ���������ͣ����޾���
����������˫�㣬ÿ�����׺��ֱ��ϸ��������ƽ�Բ�����ж�ʱ�𻷻������������
��ɫ�����쳣��֬������ͷ�ϳ������磬Ҳ�Խ���ס����һʱ�����ˡ�
LONG);
		set("shen_type", -1);

		set("str", 37);
		set("int", 30);
		set("spi", 30);
		set("con", 30);
		set("cps", 30);
		set("cor", 20);
		set("per", 30);

        set("max_force", 10000);
        set("force", 10000);
        set("force_factor", 50);

        set("combat_exp", 1000000);
        set("score", 100000);
	
	   	set_skill("literate", 160);

		create_family("�嶾��", 4, "����");

		set_skill("force", 150);
		set_skill("parry", 150);
		set_skill("dodge", 150);	
		set_skill("strike", 150);
		set_skill("poison", 150);

		set_skill("xiuluo-force", 150);
		set_skill("xuanyin-strike", 150);
		set_skill("wuxian-steps", 150);
		set_skill("gudu-dafa", 150);

		map_skill("dodge", "wuxian-steps");
		map_skill("unarmed", "xuanyin-strike");
		map_skill("parry", "xuanyin-strike");
		map_skill("force", "xiuluo-force");	

     	set("chat_chance",5);
     	set("chat_msg",({
        	(: say_something :),
        	(: go_dir :), 
		"һ���������޵�����Ʈ�����������������鲻�Խ�����\n",
		}) );


		set("inquiry", ([
			"����" : (: go_up :),
			"���֮��" : (: go_ask :),
			"���": "���������嶾�̵Ŀ�ɽ��ʦѽ�������æ��д�ƶ����أ�\n",
			"ksusan": "���������嶾�̵Ŀ�ɽ��ʦѽ�������æ��д�ƶ�����\n",
			"ݼݼ": "��˵ݼݼѽ�� �����嶾�̵�һ��Ů�������Ӳ���أ�\n",
			"demi": "��˵ݼݼѽ�� �����嶾�̵�һ��Ů�������Ӳ���أ�\n",
			"����": "�Ҿ����嶾�̽�����������ѽ����Ư���𣿣�\n",
			"name": "�Ҿ����嶾�̽�����������ѽ����Ư���𣿣�\n",
			"here": "�����ͷ�ˣ��������嶾��ѽ����\n",
			"rumors": "û�±��Ҵ������ú�����Ĺ�ȥ��\n",
		]));	

	setup();
	add_money("gold", 5);
	carry_object(__DIR__"obj/wucai_cloth")->wear();
//	carry_object(__DIR__"obj/yaodai")->wield();
}
void init()
{
	object ob;

	::init();

	add_action("do_give", "give");

	if( interactive(ob = this_player()) && !is_fighting() )
	{
		remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}

}

void attempt_apprentice(object ob)
 {
        if ((int)ob->query("combat_exp") < 50000)
            command("say ���ʵս���黹����ѽ��\n");
			return ;
        if (((int)ob->query("mingwang")<0)&&((int)ob->query("mingwang")>-20000))
            command("say ��ĺڵ�����������ѽ��\n");
			return ;
         
        if ((int)ob->query("mingwang") >0)
            command("say ������Ͱ׵����˻���һ�𣬻�����������Ϊʦ��\n");
			return ;

        command("smile");
        command("say " + RANK_D->query_respect(ob) + 
 "�������ҵĵ��Ӿ��Ǻ���ɱ�֣��ڽ��е�λ��Ϊ��磬�ô���࣡��ҪŬ��ѽ��\n\n");
        command("recruit " + ob->query("id") );
 		return ;
 }

 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("title", "�嶾�� ��������");
				ob->add("combat_exp",10000);
 }

void greeting(object ob)
{
    int heal;
    heal=40;

	if( getuid(ob) == "ksusan")
	    {
	    message_vision("�������������������������ظ���Ů����밲!��...\n",ob);
		return ;
		}
	if (getuid(ob) == "apple")
 	   {
       command("touch " + (string)ob->query("id"));
   	   message_vision("�����ػ���������Ī����������������Ů���������أ������ȥmail��.\n",ob);
       return ;
	   }
	if (getuid(ob) == "priscila")
 	   {
       command("lovelook " + (string)this_object()->query("id"));
   	   message_vision("�����ػ���������С�����������������Ů���������أ������ȥmail��.\n",ob);
       return ;
	   }
	if (ob->query("family/family_name")!="�嶾��")
		{
    	message_vision("�����ؿ���$Nһ��, ��ߵ�: �ô��嶾����! ������!\n����������$N..\n",ob);
        kill_ob(ob);
        return ;
		}
    message_vision("��������ü���������ú������������ܸ�ʲô����\n",ob);
    return ;
}


void say_something()
{   switch(random(3))
    {   case 0:
            message_vision("$N��Ц���������嶾�̵�Ů�ӿ��Ǹ���ò���绨��Ӵ�� Ҫ��Ҫ��һ����\n",this_object());
            break;
        case 1:
            message_vision("$N���ĵ�˵����������Ȼ������Ů�����ģ� ��ϧ������\n",this_object());
            break;
        case 2:
               command("hi");
               command("lovelook " + (string)this_object()->query("id"));
            break;
//        default:
//             command(cmds[random(sizeof(cmds))]);
     }
} 
//
int go_up()
{
    object me;
    me=this_player();

	if (me->query("family/family_name")!="�嶾��")
       return notify_fail("�㲻���嶾����ѽ����ʲô��Ц\n");


		if ((int)me->query("combat_exp") >= 80000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <110 )
	    	{
				message_vision("��������Цһ������$N˵��: ��ı��Ź��򻹲�������ѽ��\n", me);
			}else{
				if (me->query("title")=="�嶾�� ���볤��"){
    			message_vision("��������ü��$N��: ���Ѿ��Ǳ��̽��볤����������ʲôѽ��\n", me);
				}else{
    			message_vision("��������Цһ������$N˵��: �ðɣ��ӽ���������Ǳ��̽��볤�������úøɰ�!\n", me);
				seteuid(getuid(me));
				me->set("title", "�嶾�� ���볤��");
				me->add("combat_exp",7500);
				me->create_family("�嶾��", 5, "����");
				     }
				return 1;
		   }
		}	    							

		if ((int)me->query("combat_exp") >= 40000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <90 )
	    	{
				message_vision("��������Цһ������$N˵��: ��ı��Ź��򻹲�������ѽ��\n", me);
			}else{
				if (me->query("title")=="�嶾�� ��󸻤��"){
    			message_vision("��������ü��$N��: ���Ѿ��Ǳ�����󸻤����������ʲôѽ��\n", me);
				}else{
    			message_vision("��������Цһ������$N˵��: �ðɣ��ӽ���������Ǳ�����󸻤�������úøɰ�!\n", me);
				seteuid(getuid(me));
				me->set("title", "�嶾�� ��󸻤��");
				me->add("combat_exp",6000);
				me->create_family("�嶾��", 5, "����");
					}
				return 1;
				}
		}	    							

		if ((int)me->query("combat_exp") >= 20000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <70 )
	    	{
				message_vision("��������Цһ������$N˵��: ��ı��Ź��򻹲�������ѽ��\n", me);
			}else{
				if (me->query("title")=="�嶾�� ����ִ��"){
    			message_vision("��������ü��$N��: ���Ѿ��Ǳ�������ִ����������ʲôѽ��\n", me);
				}else{
    			message_vision("��������Цһ������$N˵��: �ðɣ��ӽ��������������ִ�������úø�!\n", me);
				seteuid(getuid(me));
				me->set("title", "�嶾�� ����ִ��");
				me->add("combat_exp",4500);
				me->create_family("�嶾��", 5, "ִ��");
					}
			return 1;
				}
		}	    							

		if ((int)me->query("combat_exp") >=10000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <50 )
	    	{
				message_vision("��������Цһ������$N˵��: ��ı��Ź��򻹲�������ѽ��\n", me);
			}else{
				if (me->query("title")=="�嶾�� ����Ѳ��"){
    			message_vision("��������ü��$N��: ���Ѿ��Ǳ�������Ѳ����������ʲôѽ��\n", me);
				}else{
    			message_vision("��������Цһ������$N˵��: �ðɣ��ӽ���������Ǳ�������Ѳ�������úø�!\n", me);
				seteuid(getuid(me));
				me->set("title", "�嶾�� ����Ѳ��");
				me->add("combat_exp",3000);
			    	}
			return 1;
			   }
		}	    							

        if ((int)me->query("combat_exp") >=5000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <30 )
	    	{
				message_vision("��������Цһ������$N˵��: ��ı��Ź��򻹲�������ѽ��\n", me);
			}else{
				if (me->query("title")=="�嶾�� ��Ы����"){
    			message_vision("��������ü��$N��: ���Ѿ��Ǳ�����Ы������������ʲôѽ��\n", me);
				}else{
    			message_vision("��������Цһ������$N˵��: �ðɣ��ӽ���������Ǳ�����Ы���������úø�!\n", me);
				seteuid(getuid(me));
				me->set("title", "�嶾�� ��Ы����");
				me->add("combat_exp",1500);
					}
			return 1;
				}
		}	    							



	message_vision("��������Цһ������$N˵��: ����ľ���͹�����������ɡ�����\n", me);
			return 1;
}

int go_ask()
{
    object me;
    me=this_player();

	if ((string)me->query("family/family_name")!="�嶾��")
       return 1;

	if (( me->query_skill("xuanyin-strike", 1) <60 )||(me->query_skill("xiuluo-force",1)<60))
	    {
	    message_vision("��������Цһ������$N˵��: ����Ĺ�����������ɡ�����\n", me);
			return 1;
		}
	if (query_temp("no_lingpai"))
	    {
	    message_vision("��������Цһ������$N˵��: �����������ƻ��˶�������\n", me);
			return 1;
		}

    message_vision("������Ц�Ŷ�$N˵��: �������һ�����ѻ�����˵��...\n", me);
    me->set_temp("can_give",1);
    return 1;
	
}

int do_give(string arg)
{
	object ob1,me,ob;

	me=this_player();
	ob1 = present("longyan hua", me);

    if (me->query_temp("can_give")!=1) return 0;

	if ((arg!="longyan hua to he tishou")&&(arg!="longyan hua to he"))
    return 0;


	if (!objectp(ob1))  return 0;

    destruct(ob1);
 
    message_vision(
"$N���������İ�һ�����ѻ�����������, �����ص�ͷЦ����������������˵��
��$Nһ�����ƣ���������嶾�̵���ɽ����������ȥ�����. \n" ,me);
	set_temp("no_lingpai",1);
    clone_object(__DIR__"obj/wuxian_ling")->move(me);
    me->delete_temp("can_give");
    return 1;
}
//
void go_dir()
{   string *dir;
    mapping exits;
    int willgo;
    exits=environment(this_object())->query("exits");
    if(!mapp(exits))    return;
    dir=keys(exits);
    if(strsrch(exits[dir[willgo=random(sizeof(dir))]],MY_WALK_DIR)>=0)
        command("go " + dir[willgo]);
} 

