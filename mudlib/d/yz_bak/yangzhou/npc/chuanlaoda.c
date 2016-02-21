// music   yangzhou's ���ϴ�

inherit NPC;

void yangzhou_suzhou();
int enter_boad(string);

void create()
{
	set_name("���ϴ�",({"chuan laoda","laoda"}));
	set("gender", "����" );
	set("age", 54);
	set("long",
		"����λ��������Ĵ��ң�����ȥǿ׳������\n");
	set("mingwang", 2);
	set("combat_exp", 50000);
        set("str", 22);
        set("kar", 12);
        set("con", 12);
        set("int", 12);
	set("attitude", "peaceful");
        set("inquiry", ([
                       "chuan" : "��֪���뵽���ﰡ? \n" ,
                       "��" : "��֪���뵽���ﰡ? \n", 
                       "suzhou" : (: yangzhou_suzhou :),
                       "����" : (: yangzhou_suzhou :),
                       ]) );
	setup();
        carry_object("/obj/cloth")->wear();
        carry_object(__DIR__"obj/chuanjiang")->wield();
	add_money("coin", 100);
}

void init()
{
add_action("enter_boat","enter");
add_action("enter_boat","jin");
add_action("enter_boat","shang");
}

int enter_boat(string arg)
{
if ((arg=="boat")||(arg=="chuan")) 
 {
  if( this_player(1)->query_temp("in_river") != 0 )
     {
      say("���ϴ�Ǹ��˵��������ȥ�ˣ��Ժ�Ƭ�̣����͵���\n");
      return 1;
    } 
  if( (this_player(1)->query_temp("yz_sz"))==1 )
   {
   tell_object(this_player(1),"����˵���͹�һ·ƽ��.\n");
   say(this_player(1)->query("name")+"����С�����밶��·. \n");
   this_player(1)->move("/d/yangzhou/yunhe1");
   return 1;
   } 
  else
   {
   tell_object(this_player(1),
   "���ϴ����󺰵������ҵĴ���\n��һ����������ˮȥ��\n");
   return 1;
   }
 }
// else tell_object(this_player(1),"���뵽�ģ�\n");
return 0;
}

void yangzhou_suzhou()
{
say ("���ϴ�˵�������ݺ�����֮����ˮ·���ֿ��ְ�ȫ��ֻҪ��������.\n");
say ("���ϴ��Ц�˼�����˵����½·�ɲ����߰���·���߻���������������.\n");
return;
}


int accept_object(object who, object ob)
{
        if ( ((int)who->query_temp("yz_sz")) !=0 )
           {
           message_vision("���ϴ�ЦЦ˵���͹ٲ����ٸ�Ǯ�ˣ�\n", who);   
           return 1;
           }
        if (ob->query("money_id") && ob->value() >= 500) 
           {
                message_vision("���ϴ��۾�һ�У���$N˵���͹����ϴ���\n", 
who);
                who->set_temp("yz_sz",1);
                return 1;
          }
        return 0;
}

