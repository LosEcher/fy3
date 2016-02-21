#include <ansi.h>
inherit NPC;
#include "/d/zhongzhou/npc/renwu.h"
string do_tisheng();
void do_jiangli(object player,int lv,int type);
void create()
{
	set_name("���߹�", ({"hong qigong","hong"}));
	set("nickname", "��ָ��ؤ");
        set("bh_rank","����");
	set("gender", "����");
	set("age", 75);
	
	set("attitude", "peaceful");
        set("class", "beggar");
	set("str", 30);
	set("int", 30);
	set("con", 30);
        set("banghui","ؤ��");
	set("kee", 3000);
	set("shen_type",1);
	set("max_kee",3000);
	set("gin", 600);
	set("max_gin", 600);
	set("force", 3200);
	set("max_force", 3200);
	set("force_factor", 100);
	
	set("combat_exp", 2000000);
	set("score", 800000);
	
	set_skill("force", 200); // �����ڹ�
	set_skill("huntian-qigong", 200); // ��������
	set_skill("unarmed", 200); // ����ȭ��
	set_skill("xianglong-zhang", 200); // ����ʮ����
	set_skill("dodge", 200); // ��������
	set_skill("xiaoyaoyou", 200); // ��ң��
	set_skill("parry", 200); // �����м�
	set_skill("staff", 200); // ��������
        set_skill("dagou-bang",200);
	
	map_skill("force", "huntian-qigong");
	map_skill("unarmed", "xianglong-zhang");
	map_skill("dodge", "xiaoyaoyou");
        map_skill("parry","dagou-bang");
        map_skill("staff","dagou-bang");
	set("inquiry",([
        "����ؤ��":"�ϻ��Ӳ��ٹ���Щ����,�����Ұ���������ȥ.\n",
        "��ְ": (: do_tisheng :),
        ]));
	
	setup();
	carry_object(__DIR__"obj/dagoubang")->wield();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	::init();
  add_action("do_renwu","renwu");
  add_action("do_jiaochai","jiaochai");
}
string do_tisheng()
{
	object me=this_player();
	string banghui;
        string *ranks=({"һ������","��������","��������","�Ĵ�����","�������",
                        "��������","�ߴ�����","�˴�����","�Ŵ�����"});
        int *lvl=({20000,50000,100000,200000,500000,800000,1200000,1500000,2000000});
        int i=0;
	if(!stringp( banghui=me->query("banghui")) || banghui!=query("banghui"))
		return "�㲻��ؤ����ӣ��Ǻ�,���Ͻл���Ц����!";
	if((int)me->query("combat_exp")<10000)	{
		if(! (int)me->query("rank_lv"))
		return "��ľ��鲻������������ְλ��";
		me->delete("bh_rank");
		me->delete("rank_lv");
		return "����"+me->query("name")+"���²�������Ϊ���ڡ�";
	}
	if((int)me->query("combat_exp")>2000000 &&
	(int)me->query("rank_lv")>=9)
         return "���Ѿ��Ǳ���Ŵ�����,����������.";
if (me->query("combat_exp")>2000000)  {
me->set("ranl_lv",9);
me->set("bh_rank","�Ŵ�����");
return me->query("name")+"��Ϊ����"+me->query("bh_rank")+"!";
}
       while (me->query("combat_exp")>lvl[i])  i++;
		if((int)me->query("rank_lv")==i)
		return "���Ѿ��Ǳ���"+(string)me->query("bh_rank")+
			"��Ҫ����Ϊ"+ranks[i+1]+"���ٵ�"+lvl[i]+"�㾭��ֵ��";
		me->set("bh_rank",ranks[i]);
		if((int)me->query("rank_lv")>i)		{
		me->set("rank_lv",i);
		return me->query("name")+"���²�������Ϊ"+me->query("bh_rank")+"��";
		}
		me->set("rank_lv",i);
		return me->query("name")+"��Ϊ����"+me->query("bh_rank")+"��";
}
int do_renwu()
{
	object player,huowu;
	string banghui;
	mapping data;
	int long,sec,min;
	string msg;
	int time;

	player=this_player();
	banghui=(string)player->query("banghui");
	if(! banghui || banghui!="ؤ��")	{
		command("say ��λ"+RANK_D->query_respect(player)+
		"����ؤ����ӣ����Ͻл�Ҫʲô����\n");
		return 1;
	}
	if(!undefinedp(player->query("oldsix_quest")))   {
		command("say "+player->query("name")+"�����ϴε�����ĩ������(jiaochai)�ɣ���\n");
		return 1;
	}
//	if(intp(player->query("bad_quest"))
//	&& (int)player->query("mud_age")-(int)player->query("bad_quest")<600)	{
//		command("say �㻹�Ǻú÷���һ���ϴ�����ʧ�ܵ�ԭ��ɡ�");
//		return 1;
//	}
//	if(intp(player->query("bad_quest")))	player->delete("bad_quest");
	huowu=present("huo wu",player);
	if(objectp(huowu))	{
		tell_object(player,"���߹������Ȱ������ϵĻ��ﴦ��һ�°ɣ�\n");
		return 1;
	}
	if((int)player->query("combat_exp")<10000)
		data=renwu1[random(sizeof(renwu1))];
	else if((int)player->query("combat_exp")<100000)
		data=renwu2[random(sizeof(renwu2))];
	else if((int)player->query("combat_exp")<800000)
		data=renwu3[random(sizeof(renwu3))];
	else 	data=renwu4[random(sizeof(renwu4))];
	time=time();
	player->set("oldsix_quest/type",data["type"]);
	player->set("oldsix_quest/id",data["id"]);
	player->set("oldsix_quest/name",data["name"]);
	player->set("oldsix_quest/lv",data["lv"]);
	player->set("oldsix_quest/start",time);
	player->set("oldsix_quest/over",0);
	long=data["lv"]*60+random(60);
	long+=120;
	player->set("oldsix_quest/time",long);
	sec=long%60;	long/=60;
	min=long;
	msg="����"+chinese_number(min)+"��"+chinese_number(sec)+
		"���ڣ�";
	if(data["type"]==1)	msg+="��"+data["name"]+"("+data["id"]+")ɱ�ˡ�";
	else if(data["type"]==2)
		msg+="��"+data["name"]+"("+data["id"]+")������";
	else if(data["type"]==3)	{
		huowu=new("/obj/huowu");
		huowu->set("start",time);
		huowu->move(player);
		msg+="�ѻ����͵�"+data["name"]+"��������";
		}
	else if(data["type"]==4)
		msg+="Ϊ������ĽһλNPC���ڡ�";
	else	msg+="Ϊ��������һ����̡�";

	tell_object(player,"���߹�����"+msg+"\n");

	return 1;
}

int do_jiaochai()
{
	object player,ob;
	int type,start,time,over,lv;
	int now_time,score;
	string id,name,banghui;

	player=this_player();
	banghui=(string)player->query("banghui");
	if(! banghui || banghui!="ؤ��")	{
		command("say ��λ"+RANK_D->query_respect(player)+
		"����ؤ����ӣ����ϻ��ӽ�ʲô�\n");
		return 1;
	}
	if(undefinedp(player->query("oldsix_quest")))    {
		command("say "+player->query("name")+"���㲢ĩ��ȡ�κ�����(renwu)����������֮˵��\n");
		return 1;
	}
	type=(int)player->query("oldsix_quest/type");
	id=(string)player->query("oldsix_quest/id");
	name=(string)player->query("oldsix_quest/name");
	start=(int)player->query("oldsix_quest/start");
	time=(int)player->query("oldsix_quest/time");
	over=(int)player->query("oldsix_quest/over");
	lv=(int)player->query("oldsix_quest/lv");

	if(type==2)	{
		ob=present(id,player);
		if(!ob || (string)ob->query("name")!=name)	{
		over=0;
		}
		else	{
		over=1;
		}
	}
	if(over==0)	{
		now_time=time();
		if(now_time<(start+time))
		message_vision("$N��$n�����㻹�е�ʱ�䣬��ץ���������ȥ�ɡ�\n",this_object(),player);
		else	{
		message_vision("$N��$n̾������������Ѿ���ʱ�ˣ��ú÷���һ�°ɡ�\n",this_object(),player);
		player->delete("oldsix_quest");
		player->set("bad_quest",player->query("mud_age"));
		}
	}
	else if(over==1)	{
		if(time()<start+time)	{
		message_vision("$N������$n�ļ��������������ɵĲ�����Ϣһ���ٽ�������(renwu)�ɡ�\n",this_object(),player);
		player->delete("oldsix_quest");
		if(objectp(ob))	destruct(ob);
		do_jiangli(player,lv,type);
		}
		else	{
		message_vision("$N��ο$n����̫��ϧ�ˣ���Ӧ����Щ�������\n",this_object(),player);
		player->delete("oldsix_quest");
		if(objectp(ob))	destruct(ob);
		}
	}
	return 1;
}

void do_jiangli(object player,int lv,int type)
{
	int exp,skl_exp;
	int score,db;

	if(type==4)	score=50;
	if(type==5)	score=100;
	if(type!=4&&type!=5)	{
	exp=(lv*50)+random(lv*50);
	skl_exp=exp+random(exp);
	if( player->query("combat_exp")<10000)	db=1;
	else if( player->query("combat_exp")<80000)	db=3;
	else if( player->query("combat_exp")<500000)	db=6;
	else db=10;
	skl_exp*=db;
	player->add("combat_exp",exp);
	player->add("wgjn",skl_exp);
	score=10;
	tell_object(player,"��ľ����������"+chinese_number(exp)+"�㣡\n");
	tell_object(player,"����书����������"+chinese_number(skl_exp)+"�㣡\n");
	tell_object(player,"ʹ�÷���(fenpei)�����������书���ܵ�����\n");
	}
	player->add("score",score);
	tell_object(player,"�������������"+chinese_number(score)+"�㣡\n");
}

int recognize_apprentice(object ob)
{
  string banghui;
  banghui=ob->query("banghui");
  if (!banghui||banghui!="ؤ��")  
   return notify_fail("���߹�ҡͷ��:�㲢����ؤ�����,�ϻ��Ӳ��ܴ��书����.\n");
	if(ob->query("score")<5000)
   return notify_fail("���߹���ü��:������Ϊ��������Щ����,�ϻ����ٿ��ǰ�.\n");
  return 1;
}
   
