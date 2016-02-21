// chen.c �½���

#include <ansi.h>
inherit NPC;
#include "/d/zhongzhou/npc/renwu.h"

string ask_me();
string do_tisheng();
void do_jiangli(object player,int lv,int type);

void create()
{
	set_name("�½���",({"chen jinnan","chen","jinnan"}));
	set("nickname", HIC "Ӣ���޵�" NOR);
	set("long", 
		"\n����һ����ʿ����������������ɫ�Ͱ���\n"
		"������������������ػ��ܶ����½���,\n"
		"��˵ʮ�˰����գ�������ͨ��\n"
		"ż������߿��������پ���Ŀ����磬Ӣ�����ˡ�\n");
	set("gender", "����");
	set("age", 45);
	set("attitude", "friendly");
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 30);
	set("dex", 30);
	set("banghui","��ػ�");
	set("bh_rank","�ܶ���");
	
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
		"��ػ�" :  "\nֻҪ��Ӣ�ۺú���������������ػᣡ\n",
                "���帴��" : "ȥ�ײĵ�ͻش�����ϸ���ưɣ�\n",
		"��������" : (: ask_me :),
		"��ְ" :(:do_tisheng:),
       ]) );
	set("chat_chance_combat", 70);  
	set("chat_msg_combat", ({
		"\n�½���ҡͷ̾�����۵��������������������������Ǻο���?\n",
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
		"������ػ�������������֪�˻��Ӻ�̸��";
        if (query("book_count") < 1)
                return "�������ˣ����ɵ������澭���ڴ˴���";
        add("book_count", -1);
        ob = new("/d/huanggon/obj/yljianpu");
	ob->move(this_player());
        return "�ðɣ��Ȿ���������ס����û�ȥ�ú����С�";
}

int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ����������ػ��ֵܲ��̡�\n");
	if(ob->query("score")<5000)
                return notify_fail(query("name")+"������Ҫ��Ϊ��ػ��������\n")
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
		command("say ��λ"+RANK_D->query_respect(ob)+"������ҵ�������ģ�");
	else    message_vision(HIC"�½������Ե�����Ҫ"+YEL"��ְ"HIC+
		"�Ļ�����Ϊ����ػ�ྡ������\n"NOR,this_object());
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
		command("say ��λ"+RANK_D->query_respect(player)+
		"������ػ���֣���ĳ�εº���Ϊ���������");
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
		tell_object(player,"�½������Ե����Ȱ������ϵĻ��ﴦ��һ�°ɣ�\n");
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
        msg="����"+chinese_number(min)+"��"+chinese_number(sec)+
                "���ڣ�";
        if(data["type"]==1)     msg+="��"+data["name"]+"("+data["id"]+")ɱ�ˡ�";
        else if(data["type"]==2)
                msg+="��"+data["name"]+"("+data["id"]+")������";
        else if(data["type"]==3)        {
                huowu=new("/obj/huowu");
                huowu->set("start",time);
                huowu->move(player);
                msg+="�ѻ����͵�"+data["name"]+"��������";
                }
        else if(data["type"]==4)
                msg+="Ϊ������ĽһλNPC���ڡ�";
        else    msg+="Ϊ��������һ����̡�";

	tell_object(player,"�½��ϵ���"+msg+"\n");

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
                command("say ��λ"+RANK_D->query_respect(player)+
		"������ػ���֣��������ҽ��");
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
                message_vision("$N��$n�����㻹�е�ʱ�䣬��ץ���������ȥ�ɡ�\n",
this_object(),player);
                else    {
                message_vision("$N��$n̾������������Ѿ���ʱ�ˣ��ú÷���һ��������ȡ������(renwu)�ɡ�\n",this_object(),player);
                player->delete("oldsix_quest");
		player->set("bad_quest",player->query("mud_age"));
                }
        }
        else if(over==1)        {
                if(time()<start+time)   {
                message_vision("$N������$n�ļ��������������ɵĲ�����Ϣһ���ٽ�������(renwu)�ɡ�\n",this_object(),player);
                player->delete("oldsix_quest");
                if(objectp(ob)) destruct(ob);
                do_jiangli(player,lv,type);
                }
                else    {
                message_vision("$N��ο$n����̫��ϧ�ˣ���Ӧ����Щ�������\n",this_object(),player);
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
	tell_object(player,"��ľ����������"+chinese_number(exp)+"�㣡\n");
	tell_object(player,"����书����������"+chinese_number(skl_exp)+"�㣡\n");
	tell_object(player,"ʹ�÷���(fenpei)�����������书���ܵ�����\n");
	}
	player->add("score",score);
	tell_object(player,"�������������"+chinese_number(score)+"�㣡\n");
}

string do_tisheng()
{
	object me=this_player();
	string *lv=({"��ľ��","�����","������","��ˮ��","������","������","��˳��","�Һ���","��̫��","�껯��"});
	string banghui,str1,str2;

	if(!stringp( banghui=me->query("banghui")) || banghui!=query("banghui"))
		return "�ߣ��㲻������ػ���֣���ĳ���������������";
	if((int)me->query("combat_exp")<10000)  {
                if(! (int)me->query("rank_lv"))
                return "��ľ���㲻������������ְλ��";
                me->delete("bh_rank");
                me->delete("rank_lv");
                return "����"+me->query("name")+"���²�������Ϊ���ڡ�";
        }
        else if(me->query("combat_exp")<100000) {
                if((int)me->query("rank_lv")==1)
                return "���Ѿ���"+(string)me->query("bh_rank")+
		"��Ҫ����Ϊ̳�����ٵ�100000����㡣";
		if(! (int)me->query("rank_lv"))
			str1=lv[random(sizeof(lv))];
		else	str1=me->query("bh_rank")[0..5];
		me->set("bh_rank",str1+"����");
		if((int)me->query("rank_lv")>1)	{
		me->set("rank_lv",1);
		return me->query("name")+"���²�������Ϊ"+me->query("bh_rank")+"��";
		}
		me->set("rank_lv",1);
                return me->query("name")+"��Ϊ"+me->query("bh_rank")+"��";
	}
	else if(me->query("combat_exp")<500000) {
                if((int)me->query("rank_lv")==2)
                return "���Ѿ���"+(string)me->query("bh_rank")+
		"��Ҫ����Ϊ�������ٵ�500000����㡣";
                if(! (int)me->query("rank_lv"))
                        str1=lv[random(sizeof(lv))];
                else    str1=me->query("bh_rank")[0..5];
		me->set("bh_rank",str1+"̳��");
		if((int)me->query("rank_lv")>2)	{
		me->set("rank_lv",2);
		return me->query("name")+"���²�������Ϊ"+me->query("bh_rank")+"��";
                }
                me->set("rank_lv",2);
                return me->query("name")+"��Ϊ"+me->query("bh_rank")+"��";
        }
        else if(me->query("combat_exp")<1000000) {
                if((int)me->query("rank_lv")==3)
                return "���Ѿ���"+(string)me->query("bh_rank")+
		"��Ҫ����Ϊ�������ٵ�1000000����㡣";
                if(! (int)me->query("rank_lv"))
                        str1=lv[random(sizeof(lv))];
                else    str1=me->query("bh_rank")[0..5];
		me->set("bh_rank",str1+"����");
		if((int)me->query("rank_lv")>3) {
                me->set("rank_lv",3);
		return me->query("name")+"���²�������Ϊ"+me->query("bh_rank")+"��";
		}
                me->set("rank_lv",3);
                return me->query("name")+"��Ϊ"+me->query("bh_rank")+"��";
        }
        else    {
                if((int)me->query("rank_lv")==4)
                return "���Ѿ���"+(string)me->query("bh_rank")+"�ˡ�";
                if(! (int)me->query("rank_lv"))
                        str1=lv[random(sizeof(lv))];
                else    str1=me->query("bh_rank")[0..5];
		me->set("rank_lv",4);
		me->set("bh_rank",str1+"����");
		return me->query("name")+"��Ϊ"+me->query("bh_rank")+"��";
        }

}

