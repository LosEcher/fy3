// oldsix �Ʒɺ�
#include <ansi.h>
inherit NPC;
#include <renwu.h>

int check_name(string str,object me);
int create_banghui(string str);
void do_jiangli(object player,int lv,int type);

void create()
{
	set_name("�Ʒɺ�",({"huang feihong","huang","huangfeihong"}));
	set("long","�㶫ʮ��֮һ�����˸������ְ��(banghui)�Ľ����⣬\nҲΪ����齨�İ���ṩ����(renwu)��\n");
	set("title",RED"��״Ԫ"NOR);
	set("gender","����");
	set("age",30);
        set("per",90);

	set_skill("unarmed",200);
	set_skill("dodge",200);
	set_skill("parry",200);
	set_temp("apply/attack",100);
	set_temp("apply/defense",100);
	set_temp("apply/damage",50);

        set("inquiry", ([
		"banghui"	:"Ҫ���������create <�����>\n",
		"���"		:"Ҫ���������create <�����>\n",
        ]) );


	set("combat_exp",2000000);
        setup();
}
int check_name(string name,object me)
{
        int i;

        i = strlen(name);

	if( (strlen(name) < 4) || (strlen(name) > 16 ) ) {
		tell_object(me,"��������붨�ڶ����˸��֡�\n");
                return 0;
        }
        while(i--) {
                if( name[i]<=' ' ) {
			tell_object(me,"�Բ�����İ�����в����ÿ����ַ���\n");
                        return 0;
                }
                if( i%2==0 && !is_chinese(name[i..<0]) ) {
			tell_object(me,"���á����ġ�������İ�ᡣ\n");
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
		tell_object(me,"���Ѿ���"+me->query("banghui")+"�����ˣ���������ᡣ\n");
		return 1;
	}
	if(me->query("combat_exp")<100000)	{
		tell_object(me,RANK_D->query_respect(me)+"��ʵս���黹��"+
		(string)(100000-me->query("combat_exp"))+"�㣬��ʱ�޷��������ᡣ\n");
		return 1;
	}
	if(! count=me->query("oldsix/have_create"))	count=0;
	if(count>=2)	{
		tell_object(me,"�Ʒɺ�ŭ��������Ϊ����Ǵ����������ٽ���ᣬ�±��Ӱɣ���\n",);
		return 1;
	}
	
	if(! str)	{
		tell_object(me,"��Ҫ����ʲô���ֵİ�᣿\n");
		return 1;
	}
	if(! check_name(str,me))	return 1;

	if(file_size("/data/guild/"+str+".o")!=-1) {
		tell_object(me,"�ǳ���Ǹ������İ����������ˡ�\n");
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
	me->set("bh_rank","����");
	count++;
	me->set("oldsix/have_create",count);
	me->save();
	command("chat ��ϲ"+me->query("name")+"�İ�ᡸ"+str+"�������ɹ���\n");
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
			tell_object(ob,"�Ʒɺ����"+ob->query("name")+"����İ���ļ������⣬������ʦ��ϵ�ɡ�\n");
		}
		else if(lingpai->query("bangzhu_id")!="???")	{
			if( lingpai->query("bangzhu_id")==ob->query("id") &&
			lingpai->query("bangzhu")==ob->query("name"))
			tell_object(ob,"�Ʒɺ�һ��ȭ������λ"+ob->query("banghui")+
			ob->query("bh_rank")+"�����������Σ�\n");
			else	tell_object(ob,"�Ʒɺ����"+ob->query("name")+
			"������������ɺã�\n");
		}
		else tell_object(ob,"�Ʒɺ�͵͵������ߵ��������ʧ�ٶ��գ�"+
                        RANK_D->query_respect(ob)+"ֻ�軨һǧ���ƽ�Ϳ������°���֮λ��\n");
		destruct(lingpai);
	}
	else	tell_object(ob,"�Ʒɺ����һ��ȭ������λ"+RANK_D->query_respect(ob)+"��������������\n");
}
int accept_object(object who,object obj)
{
	string banghui;
	object lingpai;
	if(! banghui=who->query("banghui"))	{
		tell_object(who,"�Ʒɺ�Ц�����ҿɲ���ƽ���޹ʽ�����Ķ�����\n");
		return 0;
	}
	lingpai=new("/obj/lingpai");
	lingpai->create(banghui);
	if(lingpai->query("no_use"))	{
		tell_object(who,"�Ʒɺ�̾����"+who->query("name")+"����İ���ļ������⣬������ʦ��ϵ�ɡ�\n");
		destruct(lingpai);
		return 0;
	}
	if(lingpai->query("bangzhu_id") != "???")	{
		tell_object(who,"�Ʒɺ�ʮ�־��ȣ�˵��������������ĺúõģ��ҿɲ��İѰ���֮λ����"+
		RANK_D->query_respect(who)+"����\n");
		destruct(lingpai);
		return 0;
	}
	if(! obj->query("money_id"))	{
		tell_object(who,"�Ʒɺ���ü������Щ������û��Ȥ��\n");
		destruct(lingpai);
		return 0;
	}
	if(obj->value()<10000000)	{
		tell_object(who,"�Ʒɺ��������һǧ���ƽ𣬲�Ȼ����������潻����\n");
		destruct(lingpai);
		return 0;
	}
	lingpai->set("bangzhu",who->query("name"));
	lingpai->set("bangzhu_id",who->query("id"));
	lingpai->save();
	destruct(lingpai);
	command("chat "+who->query("name")+
	"����һǧ���ƽ�������"+banghui+"����֮λ��\n");
	return 1;
}

int do_renwu()
{
	object player,huowu;
	string banghui;
	string *npc_bh=({"����","���½�","��ػ�","ؤ��"});
	mapping data;
	int long,sec,min;
	string msg;
	int time;

	player=this_player();
	banghui=(string)player->query("banghui");
	if(member_array(banghui,npc_bh)!=-1)	{
		tell_object(player,"�Ʒɺ�����㼴��"+banghui
		+"���ڣ�����Ҫ���ĳ������\n");
		return 1;
	}
	if(!undefinedp(player->query("oldsix_quest")))   {
		tell_object(player,"�Ʒɺ����"+player->query("name")+"�����ϴε�����ĩ������(jiaochai)�ɣ���\n");
		return 1;
	}
//	if(intp(player->query("bad_quest"))
//	&& (int)player->query("mud_age")-(int)player->query("bad_quest")<600)	{
//		tell_object(player,"�Ʒɺ�ŭ�����㻹�Ǻú÷���һ���ϴ�����ʧ�ܵ�ԭ��//�ɡ�\n");
//		return 1;
//	}
//	if(intp(player->query("bad_quest")))	player->delete("bad_quest");
	huowu=present("huo wu",player);
	if(objectp(huowu))	{
		tell_object(player,"�Ʒɺ�����Ȱ������ϵĻ��ﴦ��һ�°ɣ�\n");
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
	else 	{
		huowu=new("/obj/huowu");
		huowu->set("start",time);
		huowu->move(player);
		msg+="�ѻ����͵�"+data["name"]+"��������";
		}
	tell_object(player,"�Ʒɺ����"+msg+"\n");

	return 1;
}

int do_jiaochai()
{
	object player,ob;
	int type,start,time,over,lv;
	int now_time,score;
	string id,name,banghui;
	string *npc_bh=({"����","���½�","��ػ�","ؤ��"});

	player=this_player();
	banghui=(string)player->query("banghui");
	if(member_array(banghui,npc_bh)!=-1)	{
		tell_object(player,"�Ʒɺ�����㼴��"+banghui
		+"���ڣ�����Ҫ���ĳ���\n");
		return 1;
	}
	if(undefinedp(player->query("oldsix_quest")))    {
		tell_object(player,"�Ʒɺ�Ц����"+player->query("name")+"���㲢ĩ��ȡ�κ�����(renwu)����������֮˵��\n");
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
		tell_object(player,"�Ʒɺ�����㻹�е�ʱ�䣬��ץ���������ȥ�ɡ�\n");
		else	{
		tell_object(player,"�Ʒɺ�̾������������Ѿ���ʱ�ˣ��ú÷���һ�°ɡ�\n");
		player->delete("oldsix_quest");
		player->set("bad_quest",player->query("mud_age"));
		}
	}
	else if(over==1)	{
		if(time()<start+time)	{
		tell_object(player,"�Ʒɺ���������ļ��������������ɵĲ�����Ϣһ���ٽ�������(renwu)�ɡ�\n");
		player->delete("oldsix_quest");
		if(objectp(ob))	destruct(ob);
		do_jiangli(player,lv,type);
		}
		else	{
		tell_object(player,"�Ʒɺ谲ο����̫��ϧ�ˣ���Ӧ����Щ�������\n");
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
	tell_object(player,"��ľ����������"+chinese_number(exp)+"�㣡\n");
	tell_object(player,"����书����������"+chinese_number(skl_exp)+"�㣡\n");
	tell_object(player,"ʹ�÷���(fenpei)�����������书���ܵ�����\n");
}

