//music yangzhou' ����
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("�����", ({ "du dajin","du"}) );
	set("gender", "����" );
	set("age", 36);
	set("nickname",YEL"�����"NOR);
	set("combat_exp",1000000);
	set("long",
		"�����ھֵ�����ͷ����˵���������׼ҵ��ӡ�\n");
	set("mingwang",1);
	set("attitude", "peaceful");
	set_skill("unarmed",150);
	set_skill("jingang-quan",150);
	set_skill("dodge",150);
	set_skill("shaolin-shenfa",150);
	set_skill("force",150);
	set_skill("hunyuan-yiqi",150);
	set_skill("parry",150);
	set_skill("sword",150);
	set_skill("damo-jian",150);
	map_skill("unarmed","jingang-quan");
	map_skill("dodge","shaolin-shenfa");
	map_skill("parry","jingang-quan");
	map_skill("force","hunyuan-yiqi");
	map_skill("sword","damo-jian");
	set("max_force",1500);
	set("force",1500);
	set("force_factor",100);
	set("max_kee",1200);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/std/armor/tongjia")->wear();
	carry_object("/obj/std/armor/tongxue")->wear();
	carry_object("/obj/std/armor/tongkui")->wear();
	carry_object("/obj/std/armor/tongshoutao")->wear();
	carry_object("/obj/weapon/sword")->wield();
}
/*
void init()
{
	::init();
	add_action("do_zhaomu","zhaomu");
}

int do_zhaomu(string arg)
{
	object npc,me=this_player();
	int count=0,number,money,i;
	string biaoshi;
	mapping bs1=([
		"qinglong":"������ʦ",
		"baihu":"�׻���ʦ",
		"lvbao":"�̱���ʦ",
		"chilang":"������ʦ",
		"jinshe":"������ʦ",
	]);
	mapping bs2=([
		"qinglong":500000,
		"baihu":400000,
		"lvbao":200000,
		"chilang":100000,
		"jinshe":10000,
	]);
	object *guards;

	if(! arg)	{
		write("�ȿ��������ϵ���Ľ�����ɡ�\n");
		return 1;
	}
	if(sscanf(arg,"%s %d",biaoshi,number)!=2)	{
		write("�ȿ��������ϵ���Ľ�����ɡ�\n");
		return 1;
	}
	if( !bs1[biaoshi])	{
		write("û��������ʦ��\n");
		return 1;
	}
	if(number<=0)		{
		write("�����ٵ���һλ��ʦ��\n");
		return 1;
	}
	if(number>4)		{
		write("�����ֻ����Ľ��λ��ʦ��\n");
		return 1;
	}
// add by xxy
if (me->query("age")<16)   {
write("16�궼��������ʲô��ʦ?\n");
return 1;
}
// check if me can zhaomu this time;
	if( time()-(int)me->query("have_zhaomu")<3600)	{
		write("�����Ľ����ʦ��������˵�ɡ�\n");
		return 1;
	}
	me->set("have_zhaomu",time());
// check if me is guarded by other npc or player;
	guards=me->query_temp("guarded");
	if(sizeof(guards))	{
	for(i=0;i<sizeof(guards);i++)	{
		if(objectp(guards[i]))	{
			write("������"+guards[i]->query("name")+"�����ţ�û����Ľ��ʦ��\n");
			return 1;
		}
	}
	}
	me->delete_temp("guarded");
// check the biaoshi's number,should <40
	count+=sizeof(children("/d/zhongzhou/npc/qinglong"));
	count+=sizeof(children("/d/zhongzhou/npc/bahu"));
	count+=sizeof(children("/d/zhongzhou/npc/lvbao"));
	count+=sizeof(children("/d/zhongzhou/npc/chilang"));
	count+=sizeof(children("/d/zhongzhou/npc/jinshe"));
	if(count>=10)		{
		write("���������������ʦ������Ľ���ˣ����´�������ɡ�\n");
		return 1;
	}

// check the money
	money=(int)bs2[biaoshi]*number;
	if( !me->pay_money(money))	{
		write("��������������ϵ���Ǯ���������������Ǻ������粻�ɣ�\n");
		return 1;
	}

// create npc and guard me
	for(i=0;i<number;i++)	{
		npc=new("/d/zhongzhou/npc/"+biaoshi);
		npc->move(environment(me));
		npc->set_leader(me);
		me->add_temp("guarded",({ npc }));
		npc->set_temp("guarding",me);
		call_other(npc,"wait_reset");
	}
	message_vision("$N������$n��"+chinese_number(money/10000)+"���ƽ���������Ժ�\n����һ���֣��г�"+chinese_number(number)+"��"+bs1[biaoshi]+"�����úñ���"+me->query("name")+"����\n����$nһ��ȭ������λ"+RANK_D->query_respect(me)+"��Ҫǲ�����ڣ���ʹ��unguardָ�\n",this_object(),me);
	return 1;
}
*/
