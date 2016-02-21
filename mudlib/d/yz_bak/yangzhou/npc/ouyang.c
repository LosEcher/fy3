//Mr.music yangzhou ŷ����

inherit NPC;
inherit F_MASTER;

int get_again();

void create()
{
        set_name("ŷ����", ({ "ouyangxiu", "ouyang xiu","ouyang" }) );
        set("gender", "����" );
        set("age", 54);
        set("str", 90);
        set("cor", 90);
        set("cps", 90);
        set("int", 90);
        set("mingwang",1);
        set("max_force", 4000);
        set("force", 3000);
        set("force_factor", 3);

        set("rank_info/respect", "����");

        set("long","��λ��������֪��ŷ����ˣ�\n��顢��顢�����֤������һ�ֲٰ졣\n");

        create_family("����ѧ��", 1, "�糤");
        set("title","����֪��");
        set("combat_exp", 100000);
        set("score", 2000);
        set("inquiry",([
        "���":"Ҫ����16����,�Ͱ���һ��,��jiehun xxx.\n",
        "���":"��lihun xxx�ͳ�.\n",
        "�����֤": (: get_again :),
        ]));

        set_skill("unarmed", 200);
        set_skill("parry", 200);
        set_skill("dodge", 200);
        set_skill("sword", 200);
        set_skill("force", 200);
        set_skill("literate", 300);

        setup();
        carry_object("/obj/cloth")->wear();
}

void attempt_apprentice(object ob)
 {
        if( (int)ob->query_skill("literate",1) < 50 ) 
            {
             command("say " + RANK_D->query_respect(ob) +
 "�������ˣ�����ѧ�����������Բ��㡣\n");
                return;
            }
        command("smile");
        command("say " + RANK_D->query_respect(ob) + 
 "��˼���ݣ����ⲻ�������ӿɽ̡�\n");
        command("recruit " + ob->query("id") );
 }

 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("class", "shusheng");
 }
 

void init()
{
        ::init();
        add_action("do_jiehun","jiehun");
        add_action("do_jiehun","marry");
        add_action("do_lihun","lihun");
}

int do_lihun(string arg)
{
	object me,ob,card;
	string target;
	me=this_player(1);

	if(!arg || arg==me->query("id"))   {
             tell_object(me,"���Լ����Լ���鰡��\n");
             return 1;
            }
	target=(string)me->query("marry/id");
	if( !target)	{
		tell_object(me,"�㻹û�н�飬�����飿\n");
		return 1;
	}
	if( target!=arg)	{
		tell_object(me,"�����ż����"+arg+"��\n");
		return 1;
	}

	ob=new("/cmds/adm/stdnpc");
	ob->create(arg);
	if( ob->query("no_use") || (string)ob->query("marry/id")!=me->query("id"))	{
		me->delete("marry");
		card=present("jiehunzheng",me);
		if( objectp(card))	destruct(card);
		say("ŷ���޵��������ż���Ѳ�������������͸�������ɡ�\n");
		say("ŷ���޵��������������������������ˡ�\n");
		destruct(ob);
		return 1;
	}

	ob=find_player(arg);
	if( !objectp(ob))	
         {
            tell_object(me,"�������Ŀǰ������Ϸ�аɣ�\n");
            return 1;
         }

      say(me->query("name")+"��Ҫ��"+ob->query("name")+"���.\n");

      if(!present(arg,environment()))
        {
         say("֪��ҡҡͷ˵:"+ob->query("name")+"���ڲ������\n");
         return 1;
        }
      if( ob->query_temp("want_lihun")==me->query("id") )
        {
         say("֪��̾Ϣ�������Ǻ���Ϊ֮��\n");
         card=present("jiehunzheng",me);
         if( objectp(card))	destruct(card);
         card=present("jiehunzheng",ob);
         if( objectp(card))	destruct(card);

         me->delete("marry");
         me->delete_temp("want_marry");
         me->delete_temp("want_lihun");
         ob->delete("marry");
         ob->delete_temp("want_marry");
         ob->delete_temp("want_lihun");
         tell_object(me,"��Ļ�����ϵ�������\n");
         tell_object(ob,"��Ļ�����ϵ�������\n");
        }
      else
        {
         say("֪����:"+me->query("name")+",����뷨��֪����"+
             ",������Ҫ����"+ob->query("name")+"����˼.\n");
         me->set_temp("want_lihun",arg);
         return 1;
        }

return 1;
}



int do_jiehun(string arg)
{
object me;
object ob;
object card;

me=this_player(1);

if(!arg || arg==me->query("id"))   {
             tell_object(me,"���Լ����Լ���鰡��\n");
             return 1;
            }

if( !objectp(ob = find_player(arg)))
         {
            tell_object(me,"�������Ŀǰ����������ɣ�\n");
            return 1;
         }


      say(me->query("name")+"��Ҫ��"+ob->query("name")+"���.\n");
      
      if(me->query("age") <16)
        {
         say("֪��ҡҡͷ����Ȼ��û�ﵽ������䡣\n");
         return 1;
        }
	if( me->query("marry/id") || me->query("marry/name"))
	{
	  say("֪���������ѽ�����ˣ���������˵��\n");
	  return 1;
	}
      
      if(!present(arg,environment()))
        {
         say("֪��ҡҡͷ˵:"+ob->query("name")+"���ڲ������\n");
         return 1;
        }
      if( ob->query_temp("want_marry")==me->query("id") )
        {
         say("֪��΢Ц����ף��������ͷг�ϣ����޶��ġ�\n");   
         ob->set("marry/id",me->query("id"));
         ob->set("marry/name",me->query("name"));
         me->set("marry/id",arg);
         me->set("marry/name",ob->query("name"));
         card= clone_object("/obj/marry_c");
         card->set("name","���"+ob->query("name")+"("+arg+")�Ľ��֤");
         card->set("marry_id",arg);
         card->set("marry_name",ob->query("name"));
         card->move(me);
         card= clone_object("/obj/marry_c");
         card->set("name","���"+me->query("name")+"("+me->query("id")+")�Ľ��֤");
         card->set("marry_id",me->query("id"));
         card->set("marry_name",me->query("name"));
         card->move(ob);
         say("֪���ݸ�"+ob->query("name")+"��"+me->query("name")
                  +"һ��һ�Ž��֤��.\n");
         me->delete_temp("want_marry");
         ob->delete_temp("want_marry");
         command("chat ����"+me->query("name")+"��"+ob->query("name")+
         "��λ���ˣ�ǧ����أ���Ϊ�򸾣�");
         return 1 ;
         
        } 
      else
        {
         if( me->query("gender") == ob->query("gender") )
          {
           say ("ͬ��������, ŷ���ޱ�"+me->query("name")+
                  "���ÿ��°�ĭ���˹�ȥ.\n");
           return 1;
          }
         say("֪��΢Ц��:"+me->query("name")+",���������֪����"+
             ",������Ҫ����"+ob->query("name")+"����˼.\n");
         me->set_temp("want_marry",arg);
         return 1;
        }

return 1;
}


int get_again()
{
	object me=this_player(),card;
	string id,name;

	id=(string)me->query("marry/id");
	name=(string)me->query("marry/name");

	if( !id || !name)	{
		tell_object(me,"ŷ���޵����㻹û��飬��ʲô����\n");
		return 1;
	}
	
	card=present("jiehunzheng",me);
	if( objectp(card))	{
		tell_object(me,"ŷ����ŭ���������ϲ��������ѵ���ϷŪ���ٲ��ɣ�\n");
		return 1;
	}
	card=new("/obj/marry_c");
	card->set("marry_id",id);
	card->set("marry_name",name);
	card->set("name","���"+name+"("+id+")�Ľ��֤");
	card->move(me);
	tell_object(me,"ŷ���޵��ͷ�����ðɣ����Ž��֤һ��Ҫ���ܺð���\n");
	return 1;
}
