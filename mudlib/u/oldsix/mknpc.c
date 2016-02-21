mapping data=([
	"name":"",
	"id":"",
	"skills_lv":0,
	"exp_lv":0,
	"max_zc":0,
	"zz":0,
	"weapon":"",
	"skills":([]),
	"title":"",
	"nickname":"",
	"gender":"",
	"age":0,
	"jiali":0
]);

inherit ITEM;

int do_setnpc();

void create()
{
        set_name("������NPC�༭��", ({ "mknpc", "maker" }) );
        set_weight(100);
	set("long","ʹ��make���������趨��ʹ��write����������ݴ��̡�\n");
        set("unit", "��" );
	setup();
}

void init()
{
	add_action("do_step1","make");
	add_action("do_save","write");
}


int do_step1()
{
//reset data
data=([
	"name":"",
	"id":"",
	"skills_lv":0,
	"exp_lv":0,
	"max_zc":0,
	"zz":0,
	"weapon":"",
	"skills":([]),
	"title":"",
	"nickname":"",
	"gender":"",
	"age":0,
	"jiali":0
]);

	write("�����������NPC����������");
	input_to("do_step2");
	return 1;
}

int do_step2(string arg)
{
	if(arg=="")	{
		write("�����������NPC����������");
		input_to("do_step2");
		return 1;
	}
	else if(arg==".")	{
		write("ȡ�����β�����\n");
		return 1;
	}

	if(file_size("/data/npc/"+arg+".o")!=-1)	{
		write("���������Ŀ�����NPC�ļ���\n");
		write("Ϊ�˱�֤������NPC��Ψһ�ԣ�����ϸ����Ƿ�������\n");
		write("����Ƕ�ԭNPC�ļ������޸ģ�\n���Ƚ�/data/npc/"+
		data["name"]+".oɾ�����ٽ��д˲�����\n");
		return 1;
	}
	data["name"]=arg;
	write("�����������NPC��Ӣ��ID��");
	input_to("do_step3");
	return 1;
}

int do_step3(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	else if(arg=="")	{
		write("�����������NPC��Ӣ��ID��");
		input_to("do_step3");
		return 1;
	}
	data["id"]=arg;
	write("�������Ա�1���У�2��Ů����");
	input_to("do_sex");
	return 1;
}

int do_sex(string arg)
{
	int i;
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	else if(arg=="")	{
		write("�������Ա�1���У�2��Ů����");
		input_to("do_sex");
		return 1;
	}
	if(sscanf(arg,"%d",i)!=1)	{
		write("�������Ա�1���У�2��Ů����");
		input_to("do_sex");
		return 1;
	}
	if(i!=1&&i!=2)	{
		write("�������Ա�1���У�2��Ů����");
		input_to("do_sex");
		return 1;
	}
	if(i==1)	data["gender"]="����";
	else		data["gender"]="Ů��";
	write("���������䣺");
	input_to("do_age");
	return 1;
}

int do_age(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	else if(arg=="")	{
		write("���������䣺");
		input_to("do_age");
		return 1;
	}
	if(sscanf(arg,"%d",data["age"])!=1)	{
		write("���������䣺");
		input_to("do_age");
		return 1;
	}
	write("������title(�س�Ϊ����title)��");
	input_to("do_step31");
	return 1;
}

int do_step31(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	data["title"]=arg;
	write("������nickname(�س�Ϊ����nickname)��");
	input_to("do_step32");
	return 1;
}

int do_step32(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	data["nickname"]=arg;
	write("�������书�ȼ���");
	input_to("do_step4");
	return 1;
}


int do_step4(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	if(arg=="")	{
		write("�������书�ȼ���");
		input_to("do_step4");
		return 1;
	}
	else if(sscanf(arg,"%d",data["skills_lv"])!=1)	{
		write("�������书�ȼ���");
		input_to("do_step4");
		return 1;
	}
	write("�����뾭��㣺");
	input_to("do_step5");
	return 1;
}

int do_step5(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	if(arg=="")	{
		write("�����뾭��㣺");
		input_to("do_step5");
		return 1;
	}
	else if(sscanf(arg,"%d",data["exp_lv"])!=1)	{
		write("�����뾭��㣺");
		input_to("do_step5");
		return 1;
	}
	write("������NPC�ļ���������");
	input_to("do_step55");
	return 1;
}

int do_step55(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	if(arg=="")	{
		write("������NPC�ļ���������");
		input_to("do_step55");
		return 1;
	}
	else if(sscanf(arg,"%d",data["jiali"])!=1)	{
		write("������NPC�ļ���������");
		input_to("do_step55");
		return 1;
	}

	write("������NPC��ʹ����(noneΪ��ʹ������)��");
	input_to("do_step61");
	return 1;
}

int do_step61(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	if(arg=="")	{
		write("������NPC��ʹ����(noneΪ��ʹ������)��");
		input_to("do_step61");
		return 1;
	}
	if(arg=="none")	data["weapon"]="none";
	else if(file_size("/std/weapon/"+arg+".c")==-1)	{
		write("û������������\n");
		write("������NPC��ʹ����(noneΪ��ʹ������)��");
		input_to("do_step61");
		return 1;
	}
	else	data["weapon"]=arg;
	write("����������ҳ϶ȣ�С��100����");
	input_to("do_step6");
	return 1;
}

int do_step6(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	else if(arg=="")	{
		write("����������ҳ϶ȣ�С��100����");
		input_to("do_step6");
		return 1;
	}
	if(sscanf(arg,"%d",data["max_zc"])!=1)	{
		write("����������ҳ϶ȣ�С��100����");
		input_to("do_step6");
		return 1;
	}
	if(data["max_zc"]>100)	{
		write("����������ҳ϶ȣ�С��100����");
		input_to("do_step6");
		return 1;
	}
	write("����������������1��3����");
	input_to("do_step7");
	return 1;
}

int do_step7(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	else if(arg=="")	{
		write("����������������1��3����");
		input_to("do_step7");
		return 1;
	}
	if(sscanf(arg,"%d",data["zz"])!=1)	{
		write("����������������1��3����");
		input_to("do_step7");
		return 1;
	}
	if(data["zz"]>3 || data["zz"]<1)	{
		write("����������������1��3����");
		input_to("do_step7");
		return 1;
	}
	write("�Ƿ��趨������NPC�������书(y/n)��");
	input_to("do_step8");
	return 1;
}

int do_step8(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	if(arg=="y")	{
		write("���趨unarmed�������书��");
		input_to("do_step9");
		return 1;
	}
	else if(arg=="n")	{
		do_setnpc();
		return 1;
	}
	write("�Ƿ��趨������NPC�������书(y/n)��");
	input_to("do_step8");
	return 1;
}

int do_step9(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	else if(arg=="")	{
		write("���趨unarmed�������书��");
		input_to("do_step9");
		return 1;
	}
	if(file_size(SKILL_D(arg)+".c")==-1)	{
		write("û�������书��\n");
		write("���趨unarmed�������书��");
		input_to("do_step9");
		return 1;
	}
	if(!SKILL_D(arg)->valid_enable("unarmed"))	{
		write("�����书����enable��unarmed�ϡ�\n");
		write("���趨unarmed�������书��");
		input_to("do_step9");
		return 1;
	}
	data["skills"]["unarmed"]=arg;
	write("���趨dodge�������书��");
	input_to("do_step10");
	return 1;
}

int do_step10(string arg)
{
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	else if(arg=="")	{
		write("���趨dodge�������书��");
		input_to("do_step10");
		return 1;
	}
	if(file_size(SKILL_D(arg)+".c")==-1)	{
		write("û�������书��\n");
		write("���趨dodge�������书��");
		input_to("do_step10");
		return 1;
	}
	if(!SKILL_D(arg)->valid_enable("dodge"))	{
		write("�����书����enable��dodge�ϡ�\n");
		write("���趨dodge�������书��");
		input_to("do_step10");
		return 1;
	}
	data["skills"]["dodge"]=arg;
	write("���趨force�������书��");
	input_to("do_step11");
	return 1;
}

int do_step11(string arg)
{
	string weapon;

	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	else if(arg=="")	{
		write("���趨force�������书��");
		input_to("do_step11");
		return 1;
	}
	if(file_size(SKILL_D(arg)+".c")==-1)	{
		write("û�������书��\n");
		write("���趨force�������书��");
		input_to("do_step11");
		return 1;
	}
	if(!SKILL_D(arg)->valid_enable("force"))	{
		write("�����书����enable��force�ϡ�\n");
		write("���趨force�������书��");
		input_to("do_step11");
		return 1;
	}
	data["skills"]["force"]=arg;
	weapon=data["weapon"];

	if(weapon!="none")	{
		write("���趨"+weapon+"�������书��");
		input_to("do_step12");
		return 1;
	}
	else	do_setnpc();
	return 1;
}
	
int do_step12(string arg)
{
	string weapon;
	
	weapon=data["weapon"];
	if(arg==".")	{ write("ȡ�����β�����\n"); return 1;	}
	else if(arg=="")	{
		write("���趨"+weapon+"�������书��");
		input_to("do_step12");
		return 1;
	}
	if(file_size(SKILL_D(arg)+".c")==-1)	{
		write("û�������书��\n");
		write("���趨"+weapon+"�������书��");
		input_to("do_step12");
		return 1;
	}
	if(!SKILL_D(arg)->valid_enable(weapon))	{
		write("�����书����enable��"+weapon+"�ϡ�\n");
		write("���趨"+weapon+"�������书��");
		input_to("do_step12");
		return 1;
	}
	data["skills"][weapon]=arg;
	do_setnpc();
	return 1;
}


int do_setnpc()
{
	object npc,me=this_player();

	npc=new("/u/oldsix/stdnpc");
	npc->set("name",data["name"]);
	npc->set("id",data["id"]);
	npc->set("gender",data["gender"]);
	npc->set("age",data["age"]);
	if(data["title"]!="")	npc->set("title",data["title"]);
	if(data["nickname"]!="")	npc->set("nickname",data["nickname"]);
	if(data["jiali"]>0)		npc->set("force_factor",data["jiali"]);
	npc->set_skill("unarmed",data["skills_lv"]);
	npc->set_skill("dodge",data["skills_lv"]);
	npc->set_skill("force",data["skills_lv"]);
	npc->set_skill("parry",data["skills_lv"]);
	if(data["weapon"]!="none")
		npc->set_skill(data["weapon"],data["skills_lv"]);
	npc->set("combat_exp",data["exp_lv"]);
	npc->set("skills_lv",data["skills_lv"]);
	npc->set("exp_lv",data["exp_lv"]);
	if(sizeof(data["skills"]))	{
		npc->set_skill(data["skills"]["unarmed"],data["skills_lv"]);
		npc->set_skill(data["skills"]["dodge"],data["skills_lv"]);
		npc->set_skill(data["skills"]["force"],data["skills_lv"]);
		if(data["weapon"]!="none")
		npc->set_skill(data["skills"][data["weapon"]],data["skills_lv"]);
		npc->map_skill("unarmed",data["skills"]["unarmed"]);
		npc->map_skill("parry",data["skills"]["unarmed"]);
		npc->map_skill("dodge",data["skills"]["dodge"]);
		npc->map_skill("force",data["skills"]["force"]);
		if(data["weapon"]!="none")
		npc->map_skill(data["weapon"],data["skills"][data["weapon"]]);
	}
	npc->set("max_zhongcheng",data["max_zc"]);
	npc->set("zhengzhao",data["zz"]);
	write("������NPC����������ϡ�\n������ϸ����NPC�����Ƿ���ȷ��\n��Ҫ���̣���ʹ��write���\n");
	npc->move(environment(me));
	npc->set_temp("name",data["name"]);
	return 1;
}

int do_save()
{
	object npc,me=this_player();

	npc=present("machine",environment(me));
	if(! npc)	return notify_fail("���û�п�����NPC��ģ�͡�\n");
	if(! (string)npc->query_temp("name"))
		return notify_fail("����ʹ��make������п�����NPC���������ɡ�\n");
	if(! wizardp(me))
		return notify_fail("����Ȩ��ô����\n");
	npc->save();
	write("������NPC�������ļ�/data/npc/"+npc->query_temp("name")+".oд����ϡ�\n");
	return 1;
}
