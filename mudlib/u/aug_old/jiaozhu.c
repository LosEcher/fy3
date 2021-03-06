// jiaozhu.c 何惕守 by ksusan 7/12/97 7/27/97 12:00

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
	set_name("何惕守", ({ "he tishou","he","tishou","master"}) );
    set("title","五毒教教主");
	set("nickname","貌美如花");
	set("age", 24);
	set("gender", "女性");

	set("long", @LONG
何惕守凤眼含春，长眉入鬓，嘴角含着笑意，约莫二十三四岁的年纪，美艳绝伦
但见她赤着双足，每个足踝和手臂上各套两个黄金圆环，行动时金环互击，铮铮有声�
肤色白腻异常，脂光如玉，头上长发垂肩，也以金环束住。你一时惊呆了。
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

		create_family("五毒教", 4, "教主");

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
		"一股若有若无的幽香飘来，让人心神荡漾，情不自禁。。\n",
		}) );


		set("inquiry", ([
			"升级" : (: go_up :),
			"镇教之宝" : (: go_ask :),
			"柔儿": "那是我们五毒教的开山祖师呀！最近她忙着写蛊毒大法呢！\n",
			"ksusan": "那是我们五毒教的开山祖师呀！最近她忙着写蛊毒大法呢\n",
			"菁菁": "你说菁菁呀？ 那是五毒教第一美女，功夫很硬的呢！\n",
			"demi": "你说菁菁呀？ 那是五毒教第一美女，功夫很硬的呢！\n",
			"姓名": "我就是五毒教教主，何惕守呀！我漂亮吗？！\n",
			"name": "我就是五毒教教主，何惕守呀！我漂亮吗？！\n",
			"here": "你昏了头了？这里是五毒教呀！！\n",
			"rumors": "没事别乱打听，好好练你的功去！\n",
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
            command("say 你的实战经验还不够呀！\n");
			return ;
        if (((int)ob->query("mingwang")<0)&&((int)ob->query("mingwang")>-20000))
            command("say 你的黑道名望还不够呀！\n");
			return ;
         
        if ((int)ob->query("mingwang") >0)
            command("say 你整天和白道中人混在一起，还有脸来拜我为师？\n");
			return ;

        command("smile");
        command("say " + RANK_D->query_respect(ob) + 
 "，做了我的弟子就是红旗杀手，在教中地位极为尊崇，好处多多！你要努力呀！\n\n");
        command("recruit " + ob->query("id") );
 		return ;
 }

 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("title", "五毒教 红旗香主");
				ob->add("combat_exp",10000);
 }

void greeting(object ob)
{
    int heal;
    heal=40;

	if( getuid(ob) == "ksusan")
	    {
	    message_vision("何惕守肃立轻声道，“何惕守给仙女姐姐请安!”...\n",ob);
		return ;
		}
	if (getuid(ob) == "apple")
 	   {
       command("touch " + (string)ob->query("id"));
   	   message_vision("何惕守欢声道，“莫愁姐姐来啦？今天仙女姐姐好想你呢！快给她去mail吧.\n",ob);
       return ;
	   }
	if (getuid(ob) == "priscila")
 	   {
       command("lovelook " + (string)this_object()->query("id"));
   	   message_vision("何惕守欢声道，“小娴妹妹来啦？今天仙女姐姐好想你呢！快给她去mail吧.\n",ob);
       return ;
	   }
	if (ob->query("family/family_name")!="五毒教")
		{
    	message_vision("何惕守看了$N一眼, 冷哼道: 擅闯五毒禁地! 哪里走!\n何惕守扑向$N..\n",ob);
        kill_ob(ob);
        return ;
		}
    message_vision("何惕守皱眉道，“不好好练功到处乱跑干什么？！\n",ob);
    return ;
}


void say_something()
{   switch(random(3))
    {   case 0:
            message_vision("$N娇笑道：我们五毒教的女子可是个个貌美如花的哟， 要不要挑一个？\n",this_object());
            break;
        case 1:
            message_vision("$N幽幽的说：“楚楚居然不懂仙女姐姐的心， 可惜。。！\n",this_object());
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

	if (me->query("family/family_name")!="五毒教")
       return notify_fail("你不是五毒弟子呀！开什么玩笑\n");


		if ((int)me->query("combat_exp") >= 80000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <110 )
	    	{
				message_vision("何惕守轻笑一声，对$N说道: 你的本门功夫还不够精纯呀！\n", me);
			}else{
				if (me->query("title")=="五毒教 金蛛长老"){
    			message_vision("何惕守皱眉对$N道: 你已经是本教金蛛长老啦！胡闹什么呀！\n", me);
				}else{
    			message_vision("何惕守轻笑一声，对$N说道: 好吧，从今天起你就是本教金蛛长老啦！好好干啊!\n", me);
				seteuid(getuid(me));
				me->set("title", "五毒教 金蛛长老");
				me->add("combat_exp",7500);
				me->create_family("五毒教", 5, "长老");
				     }
				return 1;
		   }
		}	    							

		if ((int)me->query("combat_exp") >= 40000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <90 )
	    	{
				message_vision("何惕守轻笑一声，对$N说道: 你的本门功夫还不够精纯呀！\n", me);
			}else{
				if (me->query("title")=="五毒教 银蟾护法"){
    			message_vision("何惕守皱眉对$N道: 你已经是本教银蟾护法啦！胡闹什么呀！\n", me);
				}else{
    			message_vision("何惕守轻笑一声，对$N说道: 好吧，从今天起你就是本教银蟾护法啦！好好干吧!\n", me);
				seteuid(getuid(me));
				me->set("title", "五毒教 银蟾护法");
				me->add("combat_exp",6000);
				me->create_family("五毒教", 5, "护法");
					}
				return 1;
				}
		}	    							

		if ((int)me->query("combat_exp") >= 20000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <70 )
	    	{
				message_vision("何惕守轻笑一声，对$N说道: 你的本门功夫还不够精纯呀！\n", me);
			}else{
				if (me->query("title")=="五毒教 刑堂执事"){
    			message_vision("何惕守皱眉对$N道: 你已经是本教刑堂执事啦！胡闹什么呀！\n", me);
				}else{
    			message_vision("何惕守轻笑一声，对$N说道: 好吧，从今天起你就是刑堂执事啦！好好干!\n", me);
				seteuid(getuid(me));
				me->set("title", "五毒教 刑堂执事");
				me->add("combat_exp",4500);
				me->create_family("五毒教", 5, "执事");
					}
			return 1;
				}
		}	    							

		if ((int)me->query("combat_exp") >=10000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <50 )
	    	{
				message_vision("何惕守轻笑一声，对$N说道: 你的本门功夫还不够精纯呀！\n", me);
			}else{
				if (me->query("title")=="五毒教 青龙巡察"){
    			message_vision("何惕守皱眉对$N道: 你已经是本教青龙巡察啦！胡闹什么呀！\n", me);
				}else{
    			message_vision("何惕守轻笑一声，对$N说道: 好吧，从今天起你就是本教青龙巡察啦！好好干!\n", me);
				seteuid(getuid(me));
				me->set("title", "五毒教 青龙巡察");
				me->add("combat_exp",3000);
			    	}
			return 1;
			   }
		}	    							

        if ((int)me->query("combat_exp") >=5000)
		{
	    	if( me->query_skill("xiuluo-force", 1) <30 )
	    	{
				message_vision("何惕守轻笑一声，对$N说道: 你的本门功夫还不够精纯呀！\n", me);
			}else{
				if (me->query("title")=="五毒教 灵蝎虎卫"){
    			message_vision("何惕守皱眉对$N道: 你已经是本教灵蝎虎卫啦！胡闹什么呀！\n", me);
				}else{
    			message_vision("何惕守轻笑一声，对$N说道: 好吧，从今天起你就是本教灵蝎虎卫啦！好好干!\n", me);
				seteuid(getuid(me));
				me->set("title", "五毒教 灵蝎虎卫");
				me->add("combat_exp",1500);
					}
			return 1;
				}
		}	    							



	message_vision("何惕守轻笑一声，对$N说道: 等你的经验和功夫高了再来吧。。。\n", me);
			return 1;
}

int go_ask()
{
    object me;
    me=this_player();

	if ((string)me->query("family/family_name")!="五毒教")
       return 1;

	if (( me->query_skill("xuanyin-strike", 1) <60 )||(me->query_skill("xiuluo-force",1)<60))
	    {
	    message_vision("何惕守轻笑一声，对$N说道: 等你的功夫高了再来吧。。。\n", me);
			return 1;
		}
	if (query_temp("no_lingpai"))
	    {
	    message_vision("何惕守轻笑一声，对$N说道: 你来晚啦，黄花菜都凉啦！\n", me);
			return 1;
		}

    message_vision("何惕守笑着对$N说道: 你给我找一朵龙蜒花来再说吧...\n", me);
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
"$N恭恭敬敬的把一朵龙蜒花交给何惕守, 何惕守点头笑道，“不错，不错”，说着
给$N一块令牌，“这就是五毒教的镇山至宝，你拿去领悟吧. \n" ,me);
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

