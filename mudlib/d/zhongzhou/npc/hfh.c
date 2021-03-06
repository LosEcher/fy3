// oldsix 黄飞鸿
#include <ansi.h>
inherit NPC;
#include <renwu.h>

int check_name(string str,object me);
int create_banghui(string str);
void do_jiangli(object player,int lv,int type);

void create()
{
	set_name("黄飞鸿",({"huang feihong","huang","huangfeihong"}));
	set("long","广东十虎之一，除了负责武林帮会(banghui)的建立外，\n也为玩家组建的帮会提供任务(renwu)。\n");
	set("title",RED"武状元"NOR);
	set("gender","男性");
	set("age",30);
        set("per",90);

	set_skill("unarmed",200);
	set_skill("dodge",200);
	set_skill("parry",200);
	set_temp("apply/attack",100);
	set_temp("apply/defense",100);
	set_temp("apply/damage",50);

        set("inquiry", ([
		"banghui"	:"要创建帮会请create <帮会名>\n",
		"帮会"		:"要创建帮会请create <帮会名>\n",
        ]) );


	set("combat_exp",2000000);
        setup();
}
int check_name(string name,object me)
{
        int i;

        i = strlen(name);

	if( (strlen(name) < 4) || (strlen(name) > 16 ) ) {
		tell_object(me,"帮会名称请定在二到八个字。\n");
                return 0;
        }
        while(i--) {
                if( name[i]<=' ' ) {
			tell_object(me,"对不起，你的帮会名中不能用控制字符。\n");
                        return 0;
                }
                if( i%2==0 && !is_chinese(name[i..<0]) ) {
			tell_object(me,"请用「中文」命名你的帮会。\n");
                        return 0;
                }
        }
	return 1;
}


void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() )
                {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
                }
	add_action("create_banghui","create");
	add_action("do_renwu","renwu");
	add_action("do_jiaochai","jiaochai");
}

int create_banghui(string str)
{
	object me,lingpai;
	int count;

	me=this_player();
	if((string)me->query("banghui"))	{
		tell_object(me,"你已经是"+me->query("banghui")+"的人了，不能另创帮会。\n");
		return 1;
	}
	if(me->query("combat_exp")<100000)	{
		tell_object(me,RANK_D->query_respect(me)+"的实战经验还差"+
		(string)(100000-me->query("combat_exp"))+"点，暂时无法开帮立会。\n");
		return 1;
	}
	if(! count=me->query("oldsix/have_create"))	count=0;
	if(count>=2)	{
		tell_object(me,"黄飞鸿怒道：你以为帮会是创着玩吗？想再建帮会，下辈子吧！！\n",);
		return 1;
	}
	
	if(! str)	{
		tell_object(me,"你要创建什么名字的帮会？\n");
		return 1;
	}
	if(! check_name(str,me))	return 1;

	if(file_size("/data/guild/"+str+".o")!=-1) {
		tell_object(me,"非常抱歉，你起的帮会名早就有了。\n");
		return 1;
	}
	lingpai=new("/obj/lingpai");
	lingpai->create(str);
	lingpai->set("bangzhu",me->query("name"));
	lingpai->set("bangzhu_id",me->query("id"));
	lingpai->set("player",([me->query("id"):me->query("name")]));
	lingpai->set("npc",([]));
	lingpai->set("area",([]));
	lingpai->set("money",0);
	lingpai->save();
	destruct(lingpai);

	me->set("banghui",str);
	me->set("bh_rank","领袖");
	count++;
	me->set("oldsix/have_create",count);
	me->save();
	command("chat 恭喜"+me->query("name")+"的帮会「"+str+"」创建成功！\n");
	return 1;
}

void greeting(object ob)
{
	string banghui;
	object lingpai;
	if( !ob || environment(ob) != environment() ) return;
	if((string)(banghui=ob->query("banghui")))      {
		lingpai=new("/obj/lingpai");
		lingpai->create(banghui);
		if(lingpai->query("no_use"))	{
			tell_object(ob,"黄飞鸿道："+ob->query("name")+"，你的帮会文件有问题，快与巫师联系吧。\n");
		}
		else if(lingpai->query("bangzhu_id")!="???")	{
			if( lingpai->query("bangzhu_id")==ob->query("id") &&
			lingpai->query("bangzhu")==ob->query("name"))
			tell_object(ob,"黄飞鸿一抱拳道：这位"+ob->query("banghui")+
			ob->query("bh_rank")+"，贵帮生意如何？\n");
			else	tell_object(ob,"黄飞鸿道："+ob->query("name")+
			"，贵帮帮主身体可好？\n");
		}
		else tell_object(ob,"黄飞鸿偷偷在你耳边道：贵帮主失踪多日，"+
                        RANK_D->query_respect(ob)+"只需花一千两黄金就可以买下帮主之位。\n");
		destruct(lingpai);
	}
	else	tell_object(ob,"黄飞鸿对你一抱拳道：这位"+RANK_D->query_respect(ob)+"是来创建帮会的吗？\n");
}
int accept_object(object who,object obj)
{
	string banghui;
	object lingpai;
	if(! banghui=who->query("banghui"))	{
		tell_object(who,"黄飞鸿笑道：我可不敢平白无故接受你的东西。\n");
		return 0;
	}
	lingpai=new("/obj/lingpai");
	lingpai->create(banghui);
	if(lingpai->query("no_use"))	{
		tell_object(who,"黄飞鸿叹道："+who->query("name")+"，你的帮会文件有问题，快与巫师联系吧。\n");
		destruct(lingpai);
		return 0;
	}
	if(lingpai->query("bangzhu_id") != "???")	{
		tell_object(who,"黄飞鸿十分惊讶，说道：贵帮帮主还活的好好的，我可不改把帮主之位卖给"+
		RANK_D->query_respect(who)+"啊。\n");
		destruct(lingpai);
		return 0;
	}
	if(! obj->query("money_id"))	{
		tell_object(who,"黄飞鸿皱眉道：这些破烂我没兴趣。\n");
		destruct(lingpai);
		return 0;
	}
	if(obj->value()<10000000)	{
		tell_object(who,"黄飞鸿道：至少一千两黄金，不然我如何向上面交待？\n");
		destruct(lingpai);
		return 0;
	}
	lingpai->set("bangzhu",who->query("name"));
	lingpai->set("bangzhu_id",who->query("id"));
	lingpai->save();
	destruct(lingpai);
	command("chat "+who->query("name")+
	"花了一千两黄金，买下了"+banghui+"帮主之位。\n");
	return 1;
}

int do_renwu()
{
	object player,huowu;
	string banghui;
	string *npc_bh=({"明教","日月教","天地会","丐帮"});
	mapping data;
	int long,sec,min;
	string msg;
	int time;

	player=this_player();
	banghui=(string)player->query("banghui");
	if(member_array(banghui,npc_bh)!=-1)	{
		tell_object(player,"黄飞鸿道：你即是"+banghui
		+"帮众，何以要向黄某领任务？\n");
		return 1;
	}
	if(!undefinedp(player->query("oldsix_quest")))   {
		tell_object(player,"黄飞鸿道："+player->query("name")+"，你上次的任务还末曾交差(jiaochai)吧？。\n");
		return 1;
	}
//	if(intp(player->query("bad_quest"))
//	&& (int)player->query("mud_age")-(int)player->query("bad_quest")<600)	{
//		tell_object(player,"黄飞鸿怒道：你还是好好反醒一下上次任务失败的原因//吧。\n");
//		return 1;
//	}
//	if(intp(player->query("bad_quest")))	player->delete("bad_quest");
	huowu=present("huo wu",player);
	if(objectp(huowu))	{
		tell_object(player,"黄飞鸿道：先把你身上的货物处理一下吧！\n");
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
	msg="请在"+chinese_number(min)+"分"+chinese_number(sec)+
		"秒内，";
	if(data["type"]==1)	msg+="把"+data["name"]+"("+data["id"]+")杀了。";
	else if(data["type"]==2)
		msg+="把"+data["name"]+"("+data["id"]+")找来。";
	else 	{
		huowu=new("/obj/huowu");
		huowu->set("start",time);
		huowu->move(player);
		msg+="把货物送到"+data["name"]+"后回来交差。";
		}
	tell_object(player,"黄飞鸿道："+msg+"\n");

	return 1;
}

int do_jiaochai()
{
	object player,ob;
	int type,start,time,over,lv;
	int now_time,score;
	string id,name,banghui;
	string *npc_bh=({"明教","日月教","天地会","丐帮"});

	player=this_player();
	banghui=(string)player->query("banghui");
	if(member_array(banghui,npc_bh)!=-1)	{
		tell_object(player,"黄飞鸿道：你即是"+banghui
		+"帮众，何以要向黄某交差？\n");
		return 1;
	}
	if(undefinedp(player->query("oldsix_quest")))    {
		tell_object(player,"黄飞鸿笑道："+player->query("name")+"，你并末领取任何任务(renwu)，何来交差之说？\n");
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
		tell_object(player,"黄飞鸿道：你还有点时间，快抓紧完成任务去吧。\n");
		else	{
		tell_object(player,"黄飞鸿叹道：你的任务已经过时了，好好反醒一下吧。\n");
		player->delete("oldsix_quest");
		player->set("bad_quest",player->query("mud_age"));
		}
	}
	else if(over==1)	{
		if(time()<start+time)	{
		tell_object(player,"黄飞鸿拍了拍你的肩膀道：这次任务完成的不错，休息一下再接新任务(renwu)吧。\n");
		player->delete("oldsix_quest");
		if(objectp(ob))	destruct(ob);
		do_jiangli(player,lv,type);
		}
		else	{
		tell_object(player,"黄飞鸿安慰道：太可惜了，你应该早些来交差啊。\n");
		player->delete("oldsix_quest");
		if(objectp(ob))	destruct(ob);
		}
	}
	return 1;
}

void do_jiangli(object player,int lv,int type)
{
	int exp,skl_exp;
	int db;

	exp=(lv*50)+random(lv*50);
	skl_exp=exp+random(exp);
	if( player->query("combat_exp")<10000)	db=1;
	else if( player->query("combat_exp")<80000)	db=3;
	else if( player->query("combat_exp")<500000)	db=6;
	else db=10;
	skl_exp*=db;
	player->add("combat_exp",exp);
	player->add("wgjn",skl_exp);
	tell_object(player,"你的经验点增加了"+chinese_number(exp)+"点！\n");
	tell_object(player,"你的武功技能增加了"+chinese_number(skl_exp)+"点！\n");
	tell_object(player,"使用分配(fenpei)命令分配你的武功技能点数！\n");
}

