// woodcutter.c
void give_weapon(object me);
void give_armor(object me);
string* weapon=({
	"mujian",
	"mudao",
	"muci",
});
string* armor=({
	"dengyunxue",
	"jinsijia",
	"feilongkui",
});
string do_func(int i);
inherit NPC;
	
void create()
{
	set_name("�Źܼ�",({"zhang guanjia","zhang","guanjia"}));
	set("gender", "����" );
	set("mingwang",1);
	set("age",40);
	set("long","��æ����ʰ�ⷿ�ء�Ľ���ϵ��ӵı��������߶������ַ���\n");
	set("combat_exp",50000);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	set_temp("apply/damage",20);
	set_temp("apply/armor",40);
	set_skill("unarmed",60);
	set_skill("dodge",60);
	set("inquiry",([
		"����" : (: do_func(1) :),
		"����" : (: do_func(2) :),
        ]) );

	setup();
	carry_object("/obj/cloth")->wear();
}
string do_func(int i)
{
	object *inv,me;
	string str,str2;
	int count;
	me=this_player();
	if(me->query("family/family_name")!="����Ľ��")
	return "���ֻ�Ӵ�����Ľ�ݵĵ��ӡ�\n";
	inv=all_inventory(me);
	if(!inv)	{
		if(i==1)	{
		give_weapon(me);
		return "���������Ҫ�ú�ʹ�ð���";
		}
		if(i==2)	{
		give_armor(me);
		return "ϣ����Щ���߶����а�����";
		}
	}
	if(i==1)	{
	for(count=0;count<sizeof(inv);count++)
	    if(inv[count]->query("skill_type"))
            return "�㲻���Ѿ�����"+inv[count]->query("name")+"��\n";
		give_weapon(me);
	return "���������Ҫ�ú�ʹ�ð���";
	}
	if(i==2)	{
	for(count=0;count<sizeof(inv);count++)
	if(inv[count]->query("armor_type")&&inv[count]->query("armor_type")!="cloth"&&inv[count]->query("armor_type")!="bandage")
    return "�㲻���Ѿ�����"+inv[count]->query("name")+"��\n";
		give_armor(me);
	return "ϣ����Щ���߶����а�����";
	}
}

void give_weapon(object me)
{
	object thing;
	thing=new(__DIR__"obj/"+weapon[random(sizeof(weapon))]+".c");
	thing->move(me);
	    tell_object(me,"�ŹܼҸ���һ"+thing->query("unit")+thing->query("name")+"��\n");
	return;
}
void give_armor(object me)
{
	object thing;
	int i;
	for(i=0;i<sizeof(armor);i++)	{
		thing=new(__DIR__"obj/"+armor[i]+".c");
	thing->move(me);
	 tell_object(me,"�ŹܼҸ���һ"+thing->query("unit")+thing->query("name")+"��\n");
	}
	return;
}
