//zhangwuji.c

#include <ansi.h>
inherit NPC;
#include <renwu.h>

string do_tisheng();
void do_jiangli(object player,int lv,int type);

void create()
{
         set_name("����Ӣ��", ({ "liusheng yingxiong", "liusheng", "yingxiong" }));
	set("long", "���̽������޼ɣ�ͳ������ʮ����ڣ��������ƣ�߳��ǧ�\n"
               +"�������񹦡�����Ǭ����Ų�ơ��������£��ǽ����в�������\n"
               +"����Ӣ�ۡ�\n");
      set("bh_rank","��ʦ");
        set("title","��ɣ���񻧳�");
        set("banghui","��ɣ����");
	set("gender", "����");
    set("age", 20);
	set("shen_type",1);
    set("attitude", "friendly");

    set("str", 30);
    set("int", 30);
    set("con", 30);
    set("dex", 30);

	set("kee",3050);
	set("max_kee",3050);
	set("gin",1500);
	set("max_gin",1500);
	set("force",5000);
	set("max_force",5000);
	set("force_factor",120);

    set("combat_exp", 2900000);
    set("score", 455000);
    
	set_skill("force",200);
	set_skill("unarmed",200);
	set_skill("dodge",200);
	set_skill("parry",200);
	set_skill("sword",200);
	set_skill("blade",200);
	set_skill("jiuyang-shengong",200);
    set_skill("taiji-quan",200);
    set_skill("taiji-jian",200);
    set_skill("taiji-dao",200);
	set_skill("qiankundanuoyi",200);
	set_skill("tianlong-bu",200);

	map_skill("force", "jiuyang-shengong");
	map_skill("dodge","tianlong-bu");
	map_skill("unarmed","taiji-quan");
	map_skill("sword","taiji-jian");
	map_skill("blade","taiji-dao");
	map_skill("parry","qiankundanuoyi");


	set("inquiry",([
	"��ְ": (: do_tisheng :),
		]));
		setup();
		carry_object("/obj/weapon/sword")->wield();
		add_money("gold",1);
}

string do_tisheng()
{
	object me=this_player();
	string *lv11=({"��","��","��","��","��"});
	string *lv12=({"��","ľ","ˮ","��","��"});
	string *lv13=({"��","̳","��","��","��"});
	string *lv21=({"��","��","��","��","��","��","��","��","��"});
	string *lv22=({"��","��","��","��","��"});
	string *lv31=({"��","��","��","��","��"});
	string *lv32=({"��","ü","ë","��","��"});
	string *lv33=({"��","ӥ","ʨ","��","��"});
	string *lv41=({"��","��","��"});
	string *lv42=({"��","��","��","��"});
	string *lv43=({"��","��"});
	string banghui,str1,str2,str3;

	if(!stringp( banghui=me->query("banghui")) || banghui!=query("banghui"))
		return "�㲻�Ǳ����ֵܣ���ĳ����������ְ��";
	if((int)me->query("combat_exp")<10000)	{
		if(! (int)me->query("rank_lv"))
		return "��ľ���㲻������������ְλ��";
		me->delete("bh_rank");
		me->delete("rank_lv");
		return "����"+me->query("name")+"���²�������Ϊ���ڡ�";
	}
	else if(me->query("combat_exp")<100000)	{
		if((int)me->query("rank_lv")==1)
		return "���Ѿ��Ǳ���"+(string)me->query("bh_rank")+
			"��Ҫ����Ϊɢ�����ٵ�100000����㡣";
		str1=lv11[random(sizeof(lv11))];
		str2=lv12[random(sizeof(lv12))];
		str3=lv13[random(sizeof(lv13))];
		me->set("bh_rank",str1+str2+str3+str3+"��");
		if((int)me->query("rank_lv")>1)	{
		me->set("rank_lv",1);
		return me->query("name")+"���²�������Ϊ"+me->query("bh_rank")+"��";
		}
		me->set("rank_lv",1);
		return me->query("name")+"��Ϊ����"+me->query("bh_rank")+"��";
	}
	else if(me->query("combat_exp")<500000)	{
		if((int)me->query("rank_lv")==2)
		return "���Ѿ��Ǳ���"+(string)me->query("bh_rank")+
			"��Ҫ����Ϊ�������ٵ�500000����㡣";
		str1=lv21[random(sizeof(lv21))];
		str2=lv22[random(sizeof(lv22))];
		me->set("bh_rank",str1+str2+"ɢ��");
		if((int)me->query("rank_lv")>2)	{
		me->set("rank_lv",2);
		return me->query("name")+"���²�������Ϊ"+me->query("bh_rank")+"��";
		}
		me->set("rank_lv",2);
		return me->query("name")+"��Ϊ����"+me->query("bh_rank")+"��";
	}
	else if(me->query("combat_exp")<1000000) {
		if((int)me->query("rank_lv")==3)
		return "���Ѿ��Ǳ���"+(string)me->query("bh_rank")+
			"��Ҫ����Ϊʹ�����ٵ�1000000����㡣";
		str1=lv31[random(sizeof(lv31))];
		str2=lv32[random(sizeof(lv32))];
		str3=lv33[random(sizeof(lv33))];
		me->set("bh_rank",str1+str2+str3+"��");
		if((int)me->query("rank_lv")>3)	{
		me->set("rank_lv",3);
		return me->query("name")+"���²�������Ϊ"+me->query("bh_rank")+"��";
		}
		me->set("rank_lv",3);
		return me->query("name")+"��Ϊ����"+me->query("bh_rank")+"��";
	}
	else	{
		if((int)me->query("rank_lv")==4)
		return "���Ѿ��Ǳ���"+(string)me->query("bh_rank")+"�ˡ�";
		str1=lv41[random(sizeof(lv41))];
		str2=lv42[random(sizeof(lv42))];
		str3=lv43[random(sizeof(lv43))];
		me->set("bh_rank",str1+str2+str3+"ʹ");
		me->set("rank_lv",4);
		return me->query("name")+"��Ϊ����"+me->query("bh_rank")+"��";
	}

}

void init()
{
	object ob;

	::init();

	if( interactive(ob=this_player()) && !is_fighting())
	{
		remove_call_out("greeting");
		call_out("greeting",1,ob);
	}
	add_action("do_renwu","renwu");
	add_action("do_jiaochai","jiaochai");
}

void greeting(object ob)
{
	string banghui;
	if(!ob || environment(ob)!=environment()) return;
	banghui=(string)ob->query("banghui");
	if(! banghui || banghui!=query("banghui"))
		command("say �������������ߣ�Ȱ����ӱ���.");
	else	message_vision(HIC"���޼�˵������Ϊ���̳������һ�Ϊ��"+
		YEL"��ְ"HIC"�ġ�\n"NOR,this_object());
	return;
}




int accept_fight(object ob)
{
    if(((int)ob->query("combat_exp")<30000)&&((int)ob->query("shen")>0))
    {
        message_vision("�������������ǿ���ݣ��㲻���ҵĶ��֣���ȥ�ɡ�\n",ob);
        return 0;
    }
    message_vision("���޼�һ����˵������λ"+RANK_D->query_respect(ob)+
	"����������ˡ�\n", ob);
    return 1;
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
	if(! banghui || banghui!="����")	{
		command("say ��λ"+RANK_D->query_respect(player)+
		"�����������ˣ�����Ҫ����ĳ��ȡ����\n");
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
         destruct(huowu);
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

	tell_object(player,"���޼ɵ���"+msg+"\n");

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
	if(! banghui || banghui!="����")	{
		command("say ��λ"+RANK_D->query_respect(player)+
		"�����������ˣ�����Ҫ����ĳ���\n");
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
/*

	if(type==2)	{
		ob=present(id,player);
		if(!ob || (string)ob->query("name")!=name)	{
		over=0;
		}
		else	{
		over=1;
		}
	}
*/
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
	if(! stringp(banghui=ob->query("banghui")) ||
		banghui!=query("banghui"))
	return notify_fail(query("name")+"ҡͷ�������ҷ��׷ǹʣ�"+
		RANK_D->query_self(this_object())+"��θҵ���\n");
	if(ob->query("score")<5000)
		return notify_fail(query("name")+"�����㻹�Ƕ�Ϊ������Щʵ�°ɡ�\n");
	return 1;
}

