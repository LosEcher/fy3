// woodcutter.c

inherit NPC;

void create()
{
	set_name("��ʦ��",({"chushifu","chu shifu","shifu"}));
	set("gender", "����" );
	set("age",40);
	set("long","��ͷ�����Ŀ����Ĵ�ʦ����\n");
	set("combat_exp",90000);
	set("str", 30);
	set("mingwang",1);
	set_skill("unarmed",50);
	set_skill("dodge",50);
	set_skill("parry",50);
	set("max_force",800);
	set("force",800);
	set_temp("apply/attack",50);
	set_temp("apply/defense",60);
	set_temp("apply/damage",30);
	set_temp("apply/armor",30);
	set_temp("apply/parry",50);
	set_temp("apply/dodge",50);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",10);
}
void init()
{
        ::init();
        add_action("do_get","get");
}
int do_get(string str)
{
        string from;
        object me;
        me=this_player();
        if(!str)        return 0;
        if( sscanf(str,"%s from %s",str,from)==2)       {
	if(from=="chujia"&&me->query("family/family_name")!="��ɽ÷ׯ")  {
		command("say ���ֻΪ÷ׯ�����ṩ�Ժȣ�\n");
                return 1;
        }
        }
        return 0;
}
