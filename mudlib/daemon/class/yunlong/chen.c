// chen.c 陈近南

#include <ansi.h>
inherit NPC;
#include "/d/zhongzhou/npc/renwu.h"

string ask_me();
string do_tisheng();
void do_jiangli(object player,int lv,int type);

void create()
{
	set_name("陈近南",({"chen jinnan","chen","jinnan"}));
	set("nickname", HIC "英雄无敌" NOR);
	set("long", 
		"\n这是一个文士打扮的中年书生，神色和蔼。\n"
		"他就是天下闻名的天地会总舵主陈近南,\n"
		"据说十八般武艺，样样精通。\n"
		"偶尔向这边看过来，顿觉他目光如电，英气逼人。\n");
	set("gender", "男性");
	set("age", 45);
	set("attitude", "friendly");
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 30);
	set("dex", 30);
	set("banghui","天地会");
	set("bh_rank","总舵主");
	
	set("max_kee", 5000);
	set("max_gin", 2000);
	set("force",3000);
	set("max_force",3000);
	set("force_factor", 100);
	set("combat_exp", 2000000);
	set("score", 500000);

	set_skill("literate", 100);
	set_skill("force", 200);
	set_skill("dodge", 200);
	set_skill("unarmed", 200);
	set_skill("parry", 200);
	set_skill("whip", 200);
	set_skill("blade", 200);
	set_skill("sword", 200);
	set_skill("houquan",200);
	set_skill("yunlong-xinfa", 200);
	set_skill("wuhu-duanmendao",200);
	set_skill("yunlong-jianfa",200);

	set_skill("yunlong-shenfa",200);
	set_skill("yunlong-bianfa",200);
	set_skill("yunlong-shou",200);
	set_skill("ningxue-shenzhua",200);


	map_skill("dodge", "yunlong-shenfa");
	map_skill("force","yunlong-xinfa");
	map_skill("unarmed","ningxue-shenzhua");
	map_skill("blade", "wuhu-duanmendao");
	map_skill("parry","ningxue-shenzhua");
	map_skill("sword","yunlong-jianfa");
	map_skill("whip","yunlong-bianfa");

	set("book_count", 1);
        set("inquiry", ([
		"天地会" :  "\n只要是英雄好汉，都可以入我天地会！\n",
                "反清复明" : "去棺材店和回春堂仔细瞧瞧吧！\n",
		"云龙剑谱" : (: ask_me :),
		"升职" :(:do_tisheng:),
       ]) );
	set("chat_chance_combat", 70);  
	set("chat_msg_combat", ({
		"\n陈近南摇头叹道：螳臂当车，不自量力。唉，你这又是何苦呢?\n",
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("wield changjian") :),
		(: command("wield changjian") :),
		(: command("wield changjian") :),
		(: command("wield changjian") :),
		(: command("wield bian") :),
		(: command("wield bian") :),
		(: command("wield bian") :),
		(: command("wield bian") :),
                (: perform_action, "sword.xian" :),
                (: perform_action, "sword.xian" :),
                (: perform_action, "sword.xian" :),
                (: perform_action, "whip.chan" :),
                (: perform_action, "whip.chan" :),
                (: perform_action, "blade.duan" :),
                (: perform_action, "blade.duan" :),
                (: exert_function, "recover" :),
                (: exert_function, "recover" :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
		(: command("wield blade") :),
		(: command("wield blade") :),
		(: command("wield blade") :),
		(: command("wield blade") :),
		(: command("unwield blade") :),
		(: command("unwield blade") :),
		(: command("unwield blade") :),
		(: command("unwield blade") :),
		(: command("unwield blade") :),
		(: command("unwield blade") :),
                      }) );
 	setup();
	carry_object("/d/huanggon/obj/jinduan")->wear();
	carry_object("/obj/weapon/sword")->wield();
	carry_object("/d/huanggon/obj/hlbian")->wield();
	carry_object("/obj/weapon/blade")->wield();
}

string ask_me()
{
	string banghui;
        object ob;

	banghui=(string)this_player()->query("banghui");
	if(! banghui || banghui!=(string)query("banghui"))
                return RANK_D->query_respect(this_player()) + 
		"与我天地会素无来往，不知此话从何谈起？";
        if (query("book_count") < 1)
                return "你来晚了，本派的云龙真经不在此处。";
        add("book_count", -1);
        ob = new("/d/huanggon/obj/yljianpu");
	ob->move(this_player());
        return "好吧，这本「云龙剑谱」你拿回去好好钻研。";
}

int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"摇头道：非我天地会兄弟不教。\n");
	if(ob->query("score")<5000)
                return notify_fail(query("name")+"道：你要多为天地会出力啊。\n")
;
        return 1;
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
		command("say 这位"+RANK_D->query_respect(ob)+"是如何找到这儿来的？");
	else    message_vision(HIC"陈近南温言道：想要"+YEL"升职"HIC+
		"的话，得为我天地会多尽力啊。\n"NOR,this_object());
	return;
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
	if(! banghui || banghui!=query("banghui"))	{
		command("say 这位"+RANK_D->query_respect(player)+
		"非我天地会弟兄，陈某何德何能为你分配任务？");
		return 1;
	}
        if(!undefinedp(player->query("oldsix_quest")))   {
		command("say "+player->query("name")+"，你上次的任务还末曾交差(jiaochai)吧？。\n");
                return 1;
        }
//	if(intp(player->query("bad_quest"))
//	&& (int)player->query("mud_age")-(int)player->query("bad_quest")<600)	{
//		command("say 你还是好好反醒一下上次任务失败的原因吧。");
//		return 1;
//	}
//	if(intp(player->query("bad_quest")))	player->delete("bad_quest");
	huowu=present("huo wu",player);
	if(objectp(huowu))	{
		tell_object(player,"陈近南温言道：先把你身上的货物处理一下吧！\n");
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
        sec=long%60;    long/=60;
        min=long;
        msg="请在"+chinese_number(min)+"分"+chinese_number(sec)+
                "秒内，";
        if(data["type"]==1)     msg+="把"+data["name"]+"("+data["id"]+")杀了。";
        else if(data["type"]==2)
                msg+="把"+data["name"]+"("+data["id"]+")找来。";
        else if(data["type"]==3)        {
                huowu=new("/obj/huowu");
                huowu->set("start",time);
                huowu->move(player);
                msg+="把货物送到"+data["name"]+"后回来交差。";
                }
        else if(data["type"]==4)
                msg+="为本会招慕一位NPC帮众。";
        else    msg+="为本会抢夺一块地盘。";

	tell_object(player,"陈近南道："+msg+"\n");

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
	if(! banghui || banghui!=query("banghui"))	{
                command("say 这位"+RANK_D->query_respect(player)+
		"非我天地会弟兄，何以向我交差？");
		return 1;
	}
        if(undefinedp(player->query("oldsix_quest")))    {
                command("say "+player->query("name")+"，你并末领取任何任务(renwu)，何来交差之说？\n");
                return 1;
        }
        type=(int)player->query("oldsix_quest/type");
        id=(string)player->query("oldsix_quest/id");
        name=(string)player->query("oldsix_quest/name");
        start=(int)player->query("oldsix_quest/start");
        time=(int)player->query("oldsix_quest/time");
        over=(int)player->query("oldsix_quest/over");
        lv=(int)player->query("oldsix_quest/lv");

        if(type==2)     {
                ob=present(id,player);
                if(!ob || (string)ob->query("name")!=name)      {
                over=0;
                }
                else    {
                over=1;
                }
        }
        if(over==0)     {
                now_time=time();
                if(now_time<(start+time))
                message_vision("$N对$n道：你还有点时间，快抓紧完成任务去吧。\n",
this_object(),player);
                else    {
                message_vision("$N对$n叹道：你的任务已经过时了，好好反醒一下再来领取新任务(renwu)吧。\n",this_object(),player);
                player->delete("oldsix_quest");
		player->set("bad_quest",player->query("mud_age"));
                }
        }
        else if(over==1)        {
                if(time()<start+time)   {
                message_vision("$N拍了拍$n的肩膀道：这次任务完成的不错，休息一下再接新任务(renwu)吧。\n",this_object(),player);
                player->delete("oldsix_quest");
                if(objectp(ob)) destruct(ob);
                do_jiangli(player,lv,type);
                }
                else    {
                message_vision("$N安慰$n道：太可惜了，你应该早些来交差啊。\n",this_object(),player);
                player->delete("oldsix_quest");
                if(objectp(ob)) destruct(ob);
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
	tell_object(player,"你的经验点增加了"+chinese_number(exp)+"点！\n");
	tell_object(player,"你的武功技能增加了"+chinese_number(skl_exp)+"点！\n");
	tell_object(player,"使用分配(fenpei)命令分配你的武功技能点数！\n");
	}
	player->add("score",score);
	tell_object(player,"你的评价上升了"+chinese_number(score)+"点！\n");
}

string do_tisheng()
{
	object me=this_player();
	string *lv=({"青木堂","赤火堂","西金堂","玄水堂","黄土堂","莲花堂","洪顺堂","家后堂","参太堂","宏化堂"});
	string banghui,str1,str2;

	if(!stringp( banghui=me->query("banghui")) || banghui!=query("banghui"))
		return "哼，你不是我天地会弟兄，陈某可做不了这个主。";
	if((int)me->query("combat_exp")<10000)  {
                if(! (int)me->query("rank_lv"))
                return "你的经验点不够，不能提升职位！";
                me->delete("bh_rank");
                me->delete("rank_lv");
                return "由于"+me->query("name")+"办事不力，降为帮众。";
        }
        else if(me->query("combat_exp")<100000) {
                if((int)me->query("rank_lv")==1)
                return "你已经是"+(string)me->query("bh_rank")+
		"，要想升为坛主至少得100000经验点。";
		if(! (int)me->query("rank_lv"))
			str1=lv[random(sizeof(lv))];
		else	str1=me->query("bh_rank")[0..5];
		me->set("bh_rank",str1+"香主");
		if((int)me->query("rank_lv")>1)	{
		me->set("rank_lv",1);
		return me->query("name")+"办事不力，降为"+me->query("bh_rank")+"。";
		}
		me->set("rank_lv",1);
                return me->query("name")+"升为"+me->query("bh_rank")+"！";
	}
	else if(me->query("combat_exp")<500000) {
                if((int)me->query("rank_lv")==2)
                return "你已经是"+(string)me->query("bh_rank")+
		"，要想升为堂主至少得500000经验点。";
                if(! (int)me->query("rank_lv"))
                        str1=lv[random(sizeof(lv))];
                else    str1=me->query("bh_rank")[0..5];
		me->set("bh_rank",str1+"坛主");
		if((int)me->query("rank_lv")>2)	{
		me->set("rank_lv",2);
		return me->query("name")+"办事不力，降为"+me->query("bh_rank")+"。";
                }
                me->set("rank_lv",2);
                return me->query("name")+"升为"+me->query("bh_rank")+"！";
        }
        else if(me->query("combat_exp")<1000000) {
                if((int)me->query("rank_lv")==3)
                return "你已经是"+(string)me->query("bh_rank")+
		"，要想升为舵主至少得1000000经验点。";
                if(! (int)me->query("rank_lv"))
                        str1=lv[random(sizeof(lv))];
                else    str1=me->query("bh_rank")[0..5];
		me->set("bh_rank",str1+"堂主");
		if((int)me->query("rank_lv")>3) {
                me->set("rank_lv",3);
		return me->query("name")+"办事不力，降为"+me->query("bh_rank")+"。";
		}
                me->set("rank_lv",3);
                return me->query("name")+"升为"+me->query("bh_rank")+"！";
        }
        else    {
                if((int)me->query("rank_lv")==4)
                return "你已经是"+(string)me->query("bh_rank")+"了。";
                if(! (int)me->query("rank_lv"))
                        str1=lv[random(sizeof(lv))];
                else    str1=me->query("bh_rank")[0..5];
		me->set("rank_lv",4);
		me->set("bh_rank",str1+"舵主");
		return me->query("name")+"升为"+me->query("bh_rank")+"！";
        }

}

