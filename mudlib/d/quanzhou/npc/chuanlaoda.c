// dizi.c

inherit NPC;
void create()
{
	int skill;

	set_name("�ﶼ��", ({ "sun", "ducha"}) );
	set("gender", "����" );
	set("age", 40+random(10));
        set("title","����������");
	set("long", "�ٸ����������ͷ�Ĺ�Ա,
���������������������(ask sun about ����)��\n");
	set("combat_exp",40000);
       set("inquiry", ([
		"����" : "���ȵ�֪����������·��,Ȼ����Ҿ����ˡ�",
		"·��" : "����Ȫ��֪���Ĺ涨,����һ����Ҫ��֤��ݡ�",
	]) );


	set_skill("dodge", 10);
	set_skill("unarmed", 10);
	setup();
	carry_object("/obj/armor/cloth")->wear();
       add_money("silver",5);
}
int accept_object(object who,object item)
{	
   string str;
   object room1;

   if (!item->query("where")) return 0;
    room1=load_object("/d/quanzhou/haigang");
   if (!room1->query("exits/enter"))    {
      tell_room(room1,"����ָ��ָ��ͷ��:���ճ���,��Ȼ�������!\n");
      return notify_fail("");
     }
message_vision("$Nһ����,��$n��:���ϴ���!\n",this_object(),who);
      str=item->query("where");
           switch(str)
          {
           case "hainan":
                     who->set_temp("luyin/target",1);
                     return 1;
           case "taiwan":
                     who->set_temp("luyin/target",2);
	     return 1;
	  }
return 0;
}
