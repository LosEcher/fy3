// lu_chengfeng.c ½�˷�
// str = ����, int = ����, cps = ����, con = ����, wis = �۸�, dex = ������
// 97.8.18  by Aug

//#include <localtime.h>

inherit NPC;
inherit F_MASTER;


void enter_room();
void leave_room();

int give_letter();

int IN_BOOKROOM=1;

void create()
{
	set_name("½�˷�", ({ "lu chengfeng", "lu" }) );
	set("title", "���Ϲ���ׯׯ��");
	set("gender", "����" );
	set("long",
"½�˷�ԼĪ��ʮ������ͣ���ɫ���ݣ��ƺ����ز���������ߡ�
��ϧ˫�Ȳз��ˡ�����Ŀ�⾼����������ͦ�ı�ֱ���˵������ú���\n");

	set("age", 46);
	set("str", 30);
	set("cor", 30);
	set("cps", 33);
 	set("int", 30);
	
	set("shen_type", 1);

	set("max_force", 5000);
	set("force", 5000);
	set("force_factor", 3);


	create_family("�һ���", 2, "����");

	set("combat_exp", 300000);
	set("score", 30000);
	set("mingwang",30000);

	set_skill("force", 120);
	set_skill("parry", 120);
	set_skill("dodge", 120);
	set_skill("sword", 120);
	set_skill("literate", 150);

     	set_skill("suiyu-force",120);
     	set_skill("luoying-sword",120);
     	set_skill("luoying-strike",120);
     	set_skill("bagua-steps",120);
     	set_skill("lanhua-finger",120);
	
	map_skill("dodge",  "bagua-steps");
	map_skill("unarmed","lanhua-finger");
	map_skill("parry",  "luoying-sword");
	map_skill("force",  "suiyu-force");
    	map_skill("sword",  "luoying-sword");

	set("inquiry", ([
		"½��ׯ" : "�������½��ׯ",
		"����ׯ" : "������ǹ���ׯ",
		"�һ���" : (: give_letter :),
	]) );	
//	set("schedule", ([
//		600: (: enter_room :),
//		2200: (: leave_room :),
//	]));

	setup();
	add_money("gold", 5);
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/sword")->wield();
}

void attempt_apprentice(object ob)
{
	if(ob->query("family/generation")<=2)
	{
		command("?");
		command("say " + RANK_D->query_respect(ob) +  "���ǿ���ʲô��Ц����");
		return;		
	}


	if( ((int)ob->query_skill("suiyu-force",1)<40)) 
	{
		command("sigh");
		command("say " + RANK_D->query_respect(ob) +  "������������ƺ���������ѽ����й��������Ŭ��ѽ��");
		return;
	}

	if( ((int)ob->query_skill("literate",1)<40)) 
	{
		command("sigh");
		command("say " + RANK_D->query_respect(ob) +  "����Ķ���д���ƺ���������ѽ����й��������Ŭ��ѽ��");
		return;
	}

	
	if ( (ob->query("mingwang")<5000)&&(ob->query("mingwang")>(-5000)) )
	{
        command("sigh");
        command("say " + RANK_D->query_respect(ob) + 
        "���������̫���˰ɣ���Ҫ�����������ӣ����˻�Ц���ҵġ�");
        return;
      }

	command("haha");
	command("say �ã��ã�" + RANK_D->query_respect(ob) +  "���ӽ�����������ҵ��״������ˣ���Ҫ���ͱ������������ޣ�\n");
 	command("recruit " + ob->query("id") );
}

void recruit_apprentice(object ob)
{
	if( ::recruit_apprentice(ob) )
 		ob->set("class1", "taohua");
}

int give_letter()
{
	object ob,ob2;

	ob=this_player();

	if(ob->query("family/generation")<=2)
	{
		command("?");
		command("say " + RANK_D->query_respect(ob) +  "���ǿ���ʲô��Ц����");
		return 1;		
	}

	if( ((int)ob->query_skill("suiyu-force",1)<80)) 
	{
		command("sigh");
		command("say " + RANK_D->query_respect(ob) +  "������������ƺ���������ѽ����й��������Ŭ��ѽ��");
		return 1;
	}

	if( ((int)ob->query_skill("literate",1)<40)) 
	{
		command("sigh");
		command("say " + RANK_D->query_respect(ob) +  "����Ķ���д���ƺ���������ѽ����й��������Ŭ��ѽ��");
		return 1;
	}

	
	if ( (ob->query("mingwang")<20000)&&(ob->query("mingwang")>(-20000)) )
	{
        command("sigh");
        command("say " + RANK_D->query_respect(ob) + 
        "���������̫���˰ɣ�����֮���ɱ�����һ�����");
        return 1;
      }

	command("haha");
	command("say �ã���! ���һ����ֵ�һ����֮�ţ�����͸��Ҷ�ʦд�ţ��Ƽ�"
		+RANK_D->query_respect(ob)+"�����һ�������ѧϰ��");
	message_vision("½ׯ����$Nһ���д�õ��š�\n",ob);
 
	ob2=new(__DIR__"obj/letter");
	ob2->set("pl_name",ob->query("id"));
	ob2->set("long","����һ��д��"+ob->query("name")+"�����֣��������Ļ�����Ƽ��š�\n");
	ob2->move(ob);

	return 1;
}


int accept_fight(object me)
{
	command("say �ã����Ǿ�������һ����\n");
	return 1;
}

int accept_kill()
{
	command("emote ��Ц����ƾ���ɱ�����ң�\n");
}

/*
void enter_room()
{
    object *all, ob;
	int i;

      if(IN_BOOKROOM==1) return;

	command("emote ���˸���Ƿ��˵����˯����á���ȥ�鷿�ˡ�");
      ob=this_object();
      ob->move("/d/lu/bookroom");

	command("emote �ù��ȳ��ŵ��棬Ʈ���鷿��");

    all = all_inventory(environment(ob));
        
    for (i=0; i<sizeof(all); i++) 
      {
	  if( all[i]==this_object() ||!all[i]->is_character()) continue;
        {
	    message_vision(
"$N����$n���һ�£��е���������ô�����ģ��ð���һ��͵������
$N����һ�����Ϸ��ŵĹ��ٵ�һ�����ң���ʱ��ǽ�������һ�ѽ��롣
��һ������Ȼ�ӵ������⣬������û�ܶ㿪���롣
�ǰѽ���ȫ��������ı��ϡ�\n", this_object(),all[i]);

        all[i]->move("/d/lu/hall");

	    all[i]->set("gin", (int)all[i]->query("max_gin")*(random(4)/5)+1);
        all[i]->set("kee", (int)all[i]->query("max_kee")*(random(4)/5)+1);
        all[i]->set("sen", (int)all[i]->query("max_sen")*(random(4)/5)+1);
        }	
     }


      IN_BOOKROOM=1;
}

void leave_room()
{
    object *all, ob;
	int i;

      if( this_object()->is_fighting() )	return ;

	command("say �����ˣ���Ҫ˯��ȥ�ˣ��㻹�����������");
	command("emote ����ϳ��鷿��");

	all = all_inventory(environment(ob));
        
    for (i=0; i<sizeof(all); i++) 
      {
	  if( all[i]==this_object() ||!all[i]->is_character()) continue;
        {

		all[i]->move(environment()->query("exits/east"));
		}
	  }

      ob=this_object();
      ob->move("/d/lu/bedroom");

	command("emote �ù��ȳ��ŵ��棬Ʈ�����ҡ�");
	command("emote ���ǿ���ȥ����Ҫ˯���ˡ�");
    for (i=0; i<sizeof(all); i++) 
      {
	  if( all[i]==this_object() ||!all[i]->is_character()) continue;
        {

		all[i]->move(environment()->query("exits/south"));
		}

	   }

      IN_BOOKROOM=0;
}
*/