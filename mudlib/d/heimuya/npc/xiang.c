// xiang.c
#include <ansi.h>
inherit NPC;
#include "/d/zhongzhou/npc/renwu.h"

int ask_kill();
string do_tisheng();
void do_jiangli(object player,int lv,int type);

void create()
{
    set_name("������", ({ "xiang wentian", "xiang"}));
    set("nickname", HIR "��������" NOR );
    set("gender", "����");
    set("banghui", "���½�");
    set("bh_rank","��ʹ");
    set("long", "���������½���ʹ��Ϊ�˼�Ϊ��ˬ��\n");
    set("age", 45);
    set("shen_type", -1);

    set("str", 21);
    set("per", 28);
    set("int", 30);
    set("con", 26);
    set("dex", 30);
    set("chat_chance", 1);
    set("inquiry", ([
      "����ͤ"     : "�����ˣ���ɱ��\n",
      "��������"   : "��λ��ͽ���ҷ�ɱ�������ɣ�\n",
      "ɱ��������" : (: ask_kill() :),
      "������"     : "��������������ʮ��......\n",
	"��ְ" :(:do_tisheng:),
    ]));
    set("kee", 4000);
    set("max_kee", 4000);
    set("gin", 1000);
    set("max_gin", 1000);
    set("force", 3500);
    set("max_force", 3500);
    set("force_factor", 350);

    set("combat_exp", 2500000);
    set("score", 0);

	set_skill("force",200);
	set_skill("hunyuan-yiqi",200);
	set_skill("kuihua-xinfa",100);
	set_skill("dodge",200);
	set_skill("shaolin-shenfa",200);
	set_skill("unarmed",200);
	set_skill("nianhua-zhi",200);
	set_skill("parry",200);
    set_skill("foxuexinde", 110);
    set_skill("literate", 110);
	set_skill("fumo-zhangfa",200);
	set_skill("duanyun-fufa",200);
	set_skill("huntian-cuifa",200);
	set_skill("hammer",200);
	set_skill("axe",200);
	set_skill("staff",200);

    map_skill("force", "hunyuan-yiqi");
    map_skill("dodge", "shaolin-shenfa");
	map_skill("unarmed","nianhua-zhi");
	map_skill("parry","nianhua-zhi");


    setup();
    carry_object(__DIR__"obj/cloth")->wear();
}

string do_tisheng()
{
	object me=this_player();
	string *lv=({"������","������","�׻���","������",});
	string banghui,str1,str2;

	if(!stringp( banghui=me->query("banghui")) || banghui!=query("banghui"))
		return "�ߣ��㲻�Ǳ��̵��֣���ĳ���������������";
	if((int)me->query("combat_exp")<10000)  {
                if(! (int)me->query("rank_lv"))
                return "��ľ���㲻������������ְλ��";
                me->delete("bh_rank");
                me->delete("rank_lv");
                return "����"+me->query("name")+"���²�������Ϊ���ڡ�";
        }
        else if(me->query("combat_exp")<100000) {
                if((int)me->query("rank_lv")==1)
                return "���Ѿ��Ǳ���"+(string)me->query("bh_rank")+
		"��Ҫ����Ϊ�������ٵ�100000����㡣";
		if(! (int)me->query("rank_lv"))
			str1=lv[random(sizeof(lv))];
		else	str1=me->query("bh_rank")[0..5];
		me->set("bh_rank",str1+"����");
		if((int)me->query("rank_lv")>1)	{
		me->set("rank_lv",1);
		return me->query("name")+"���²�������Ϊ"+me->query("bh_rank")+"��";
		}
		me->set("rank_lv",1);
                return me->query("name")+"��Ϊ����"+me->query("bh_rank")+"��";
	}
	else if(me->query("combat_exp")<500000) {
                if((int)me->query("rank_lv")==2)
                return "���Ѿ��Ǳ���"+(string)me->query("bh_rank")+
		"��Ҫ����Ϊ�������ٵ�500000����㡣";
                if(! (int)me->query("rank_lv"))
                        str1=lv[random(sizeof(lv))];
                else    str1=me->query("bh_rank")[0..5];
		me->set("bh_rank",str1+"����");
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
                return me->query("name")+"��Ϊ����"+me->query("bh_rank")+"��";
        }
        else    {
                if((int)me->query("rank_lv")==4)
                return "���Ѿ��Ǳ���"+(string)me->query("bh_rank")+"�ˡ�";
                if(! (int)me->query("rank_lv"))
                        str1=lv[random(sizeof(lv))];
                else    str1=me->query("bh_rank")[0..5];
		me->set("rank_lv",4);
		me->set("bh_rank",str1+"����");
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
		command("say �˴������½̽��أ���Ҫ�������ܡ�");
	else    message_vision(HIC"�����������Ҫ"+YEL"��ְ"HIC+
		"�Ļ����Ǿ�Ϊ���̶��Щ���ɡ�\n"NOR,this_object());
	return;
}

int ask_kill()
{
   object ob,me = this_player();

   command("tell "+this_player()->query("id")+" ��Ҫȥɱ�������ܣ�\n");
   message_vision(HIC "�������$N���˵�ͷ˵��������һ��֮����\n" NOR,this_player());
   ob=new("/d/heimuya/npc/obj/card4");
   ob->move(me);
   tell_object(me,"������ӻ�������һ����������������ϡ�\n");
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
	if(! banghui || banghui!=query("banghui"))	{
		command("say ��λ"+RANK_D->query_respect(player)+
		"�������½̵��֣���ĳ�εº���Ϊ���������");
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
		tell_object(player,"����������Ȱ������ϵĻ��ﴦ��һ�°ɣ�\n");
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

	tell_object(player,"���������"+msg+"\n");

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
		"�������½̵��֣��������ҽ��");
		return 1;
	}
        if(undefinedp(player->query("oldsix_quest")))    {
                command("say "+player->query("name")+"���㲢ĩ��ȡ�κ�����(renwu
)����������֮˵��\n");
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
		message_vision("$N��$n̾������������Ѿ���ʱ�ˣ��ú÷���һ�°ɡ�\n",this_object(),player);
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


int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ�������ҷ��׷ǹʣ�"+
                RANK_D->query_self(this_object())+"��θҵ���\n");
	if(ob->query("score")<2500)
		return notify_fail(query("name")+"�����㻹�Ƕ�Ϊ������Щʵ�°ɡ�\n");
        return 1;
}
