// woodcutter.c

inherit NPC;

string* food=({
	"blxr",
	"xysh",
	"ssgy",
});
string* water=({
	"qingciwan",
	"zishahu",
	"baiyubei",
});
string do_func(int i);

void create()
{
	set_name("��ʦ��",({"da shifu","da","shifu"}));
	set("gender", "����" );
	set("age",40);
	set("mingwang",1);
	set("long","���ׯ��ͷ������ʦ����Ľ���ϵ��ӵĳԡ��ȶ���������\n");
	set("combat_exp",30000);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	set_temp("apply/damdage",10);
	set_temp("apply/armor",30);
	set_skill("unarmed",50);
	set_skill("dodge",50);
	set("inquiry",([
		"��" : (: do_func(1) :),
		"��" : (: do_func(2) :),
        ]) );

	setup();
	carry_object("/obj/cloth")->wear();
}
string do_func(int i)
{
	object *inv,me,thing;
	string str,str2;
	int count;
	me=this_player();
	if(me->query("family/family_name")!="����Ľ��")
	return "���ֻ�Ӵ�����Ľ�ݵĵ��ӡ�\n";
	inv=all_inventory(me);
	if(i==1) {
		thing=new(__DIR__"obj/"+food[random(sizeof(food))]+".c");
		str="food_remaining";
	str2="�ȳ�������˵�ա�\n";
	}
	else	{
		thing=new(__DIR__"obj/"+water[random(sizeof(water))]+".c");
		str="max_liquid";
	str2="�������Լ�ȥ�ࡣ\n";
	}
	if(!sizeof(inv))	{
	thing->move(me);
	tell_object(me,"��ʦ������һ"+thing->query("unit")+thing->query("name")+"��\n");
	return "��"+thing->query("unit")+thing->query("name")+"����ȥ�ɡ�\n";
	}
	for(count=0;count<sizeof(inv);count++)	{
		if(inv[count]->query(str))
	return "�����ϲ�����"+inv[count]->query("name")+"��"+str2;
	}
	thing->move(me);
	tell_object(me,"��ʦ������һ"+thing->query("unit")+thing->query("name")+"��\n");
	 return "��"+thing->query("unit")+thing->query("name")+"����ȥ�ɡ�\n";
}
