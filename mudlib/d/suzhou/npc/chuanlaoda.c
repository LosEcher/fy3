// music   yangzhou's ���ϴ�

inherit NPC;

int yangzhou_suzhou();
int enter_boad(string);

void create()
{
	set_name("���ϴ�",({"chuan laoda","chuan","laoda"}));
	set("gender", "����" );
	set("age", 54);
	set("long",
		"����λ��������Ĵ��ң�����ȥǿ׳������\n");
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set_skill("unarmed",30);
	set_skill("dodge",40);
	set("combat_exp",3000);
        set("str", 22);
        set("dex", 12);
        set("con", 12);
        set("int", 12);
	set("attitude", "peaceful");
        set("inquiry", ([
                       "chuan" : "��֪���뵽���ﰡ? \n" ,
                       "��" : "��֪���뵽���ﰡ? \n", 
				"yangzhou" : (:yangzhou_suzhou :),
				"����" : (: yangzhou_suzhou :),
                       ]) );
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 50);
}

void init()
{
::init();
add_action("enter_boat","enter");
add_action("enter_boat","jin");
add_action("enter_boat","shang");
}

int enter_boat(string arg)
{
if ((arg=="boat")||(arg=="chuan")) 
 {
	if( (this_player(1)->query_temp("yz_sz"))==2)
   {
   tell_object(this_player(1),"����˵���͹�����ඣ�˵�Ÿ�һ���밶��ȥ.\n");
	 this_player(1)->move("/d/suzhou/yunhe4");
   return 1;
   } 
  else
   {
   tell_object(this_player(1),
   "���ϴ����󺰵������ҵĴ���\n��һ����������ˮȥ��\n");
   return 1;
   }
 }
else tell_object(this_player(1),"���뵽�ģ�\n");
return 1;
}

int yangzhou_suzhou()
{
say ("���ϴ�˵������������ˮ·���ֿ��ְ�ȫ��ֻҪ��������.\n");
say ("���ϴ��Ц�˼�����˵����½·�ɲ����߰���·���߻���������������.\n");
return 1;
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
			who->set_temp("yz_sz",2);
                return 1;
          }
        return 0;
}

