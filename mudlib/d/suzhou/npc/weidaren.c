// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("Χ����",({"wei daren","wei"}));

	set("title","����Ѳ��");
	set("gender", "����" );
	set("age",40);
	set("long",
	"��ɫ��ڣ���ò���棬���Ȳ��������㲻������������������\n"
	);
	set("attitude","friendly");
	setup();
	carry_object(__DIR__"obj/yipinfu")->wear();
}
void init()
{
	::init();
	add_action("do_gao","gao");
}

int do_gao(string str)
{
	object ob,want;
	int number;
	ob=this_player();
	if(!ob->query_temp("oldsix_flag/money")||ob->query_temp("oldsix_flag/money")==0)	{
		command("say ����Ǯ������£����Ǻ������粻�ɣ�");
	return 1;
	}
	if (!str) {
	command("say ��Ҫ��˭����");
		return 1;
		}
	want=find_player(str);
	if (!want) {
		command("say û����ô����ҡ�");
		return 1;
		}
	if(want->query("oldsix_flag/tongji")==1)	{
		command("say "+want->query("name")+"����ͨ��֮���ˡ�");
		return 1;
							}
	if(want->query("oldsix_flag/lao")==1)	{
		command("say "+want->query("name")+"���ѱ�������Ѻ�ڴ������ˡ�");
		return 1;
	}
	number=ob->query_temp("oldsix_flag/money");
	ob->set_temp("oldsix_flag/money",0);
                want->set("oldsix_flag/time2",want->query("mud_age"));
        want->apply_condition("tongji_cancle");
	switch(number) {
		case 0:
		case 1:	{
	want->set("oldsix_flag/tongji",1);
	want->set("oldsix_flag/long",3);
	command("say �ðɣ�����ͨ��"+want->query("name")+"��");
	command("rumor ����ͨ���׷��"+want->query("name")+"��");
		return 1;
				}
		case 2: {
	want->set("oldsix_flag/tongji",1);
	want->set("oldsix_flag/long",2);
	    command("say �ðɣ�����ͨ��"+want->query("name")+"��");
	command("rumor ����ͨ���׷��"+want->query("name")+"��");
	return 1;
			}
	case 3:	{
	want->set("oldsix_flag/tongji",1);
	want->set("oldsix_flag/long",1);
	 command("say �ðɣ�����ͨ��"+want->query("name")+"��");
	command("rumor һ��ͨ���׷��"+want->query("name")+"��");
	return 1;
			}

}
}
int accept_object(object who,object item)
{	
	if(item->query("money_id") &&
	item->value()>=1000)
	{
	command("say Ǯ�Ҿ������ˣ����������������");
	if(item->value()<10000)	who->set_temp("oldsix_flag/money",1);
	else 
	if(item->value()<50000)	who->set_temp("oldsix_flag/money",2);
	else who->set_temp("oldsix_flag/money",3);
		return 1;
	}
	command("say �Ϸ����Ǯ���ۣ�����Щ��������ʵ�ڲ�����Ȥ��\n");
	return 0;
}
