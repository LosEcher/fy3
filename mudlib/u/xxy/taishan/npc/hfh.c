// oldsix �Ʒɺ�
#include <ansi.h>
inherit NPC;
inherit F_BH;

int check_name(string str);
int create_banghui(string str);
int write_to_file(string str,object me);

void create()
{
	set_name("�Ʒɺ�",({"huang feihong","huang","huangfeihong"}));
	set("long","�㶫ʮ��֮һ��ר�Ÿ������ְ��(banghui)�Ľ�����\n");
	set("title","��״Ԫ");
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
int check_name(string name)
{
        int i;

        i = strlen(name);

	if( (strlen(name) < 4) || (strlen(name) > 16 ) ) {
		command("say ��������붨�ڶ����˸���\n");
                return 0;
        }
        while(i--) {
                if( name[i]<=' ' ) {
			command("say �Բ�����İ�����в����ÿ����ַ���\n");
                        return 0;
                }
                if( i%2==0 && !is_chinese(name[i..<0]) ) {
			command("say ���á����ġ�������İ�ᡣ\n");
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
}

int create_banghui(string str)
{
	object me,lingpai;
	int count;

	me=this_player();
	if((string)me->query("banghui"))	{
		command("say ���Ѿ���"+me->query("banghui")+"�����ˣ���������ᡣ\n");
		return 1;
	}
	if(me->query("combat_exp")<100000)	{
		command("say "+RANK_D->query_respect(me)+"��ʵս���黹��"+
		(string)(100000-me->query("combat_exp"))+"�㣬��ʱ�޷��������ᡣ\n");
		return 1;
	}
	if(! count=me->query("oldsix/have_create"))	count=0;
	if(count>=2)	{
		message_vision("$Nŭ����"+me->query("name")+
		"������Ϊ����Ǵ����������ٽ���ᣬ�±��Ӱɣ���\n",
		this_object());
		return 1;
	}
	
	if(! str)	{
		command("say ��Ҫ����ʲô���ֵİ�᣿\n");
		return 1;
	}
	if(! check_name(str))	return 1;

	if(file_size("/data/guild/"+str+".o")!=-1) {
		command("say �ǳ���Ǹ������İ����������ˡ�\n");
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
	count++;
        me->set("oldsix/have_create",count);
	me->save();
	command("say ��ϲ"+RANK_D->query_respect(me)+"�����<"+str+">��ᴴ���ɹ���\n");
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
			command("say "+ob->query("name")+"����İ���ļ������⣬������ʦ��ϵ�ɡ�");
		}
		else if(lingpai->query("bangzhu_id")!="???")
			command("say ��λ"+RANK_D->query_respect(ob)+
			"����������ɺã�\n");
		else command("say "+banghui+"����ʧ�ٶ��գ�"+
                        RANK_D->query_respect(ob)+"ֻ�軨һǧ���ƽ�Ϳ������°���֮λ��\n");
		destruct(lingpai);
	}
	else	command("say ��λ"+RANK_D->query_respect(ob)+"��������������\n");
}
int accept_object(object who,object obj)
{
	string banghui;
	object lingpai;
	if(! banghui=who->query("banghui"))	{
		command("say �ҿɲ���ƽ���޹ʽ�����Ķ�����\n");
		return 0;
	}
	lingpai=new("/obj/lingpai");
	lingpai->create(banghui);
	if(lingpai->query("no_use"))	{
		command("say "+who->query("name")+"����İ���ļ������⣬������ʦ��ϵ�ɡ�");
		destruct(lingpai);
		return 0;
	}
	if(lingpai->query("bangzhu_id") != "???")	{
		command("say ����������ĺúõģ��ҿɲ��İѰ���֮λ����"+
		RANK_D->query_respect(who)+"����\n");
		destruct(lingpai);
		return 0;
	}
	if(! obj->query("money_id"))	{
		command("say ��Щ������û��Ȥ��\n");
		destruct(lingpai);
		return 0;
	}
	if(obj->value()<10000000)	{
		command("say ����һǧ���ƽ𣬲�Ȼ����������潻����\n");
		destruct(lingpai);
		return 0;
	}
	lingpai->set("bangzhu",who->query("name"));
	lingpai->set("bangzhu_id",who->query("id"));
	lingpai->save();
	destruct(lingpai);
	message("channel:rumor",YEL"��ҥ�ԡ�ĳ�ˣ�"+who->query("name")+
	"����һǧ���ƽ�������"+banghui+"����֮λ��\n"NOR,users());
	return 1;
}

