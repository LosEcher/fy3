// hutaseng1.c
inherit NPC;

void create()
{
	set_name("����ɮ", ({ "huta seng","seng"}) );
	set("gender", "����" );
	set("class", "bonze");
	set("age", 30);
set("mingwang",200);
	set("str", 30);
	set("int", 30);
	set("con", 30);

set("kee",1000);
set("max_kee",1000);
set("gin",1000);
set("max_gin",1000);
set("force",3000);
set("max_force",3000);
set("force_factor",20);
	set("combat_exp", 80000);
	set("score", 10000);

	set_skill("force", 80);
	set_skill("dodge", 80);
	set_skill("parry", 70);
	set_skill("tiannan-step", 80);
	set_skill("kurong-changong", 70);

	map_skill("force", "kurong-changong");
	map_skill("dodge", "tiannan-step");
	set("inquiry" ,([
	"������" : "����������֮����ԭ��������������ʩ������ȥ�����𣿡�\n",
	"����" : "��ʩ��Ҳ��֪�����ǵ�������������ѵ�����˼��˼һ�£���\n",
	]));

	setup();
carry_object("/d/obj/weapon/staff/gangzhang")->wield();
}

int accept_object(object who, object ob)
{
    object obj=this_object();
	if (ob->query("money_id") )
	{
	if( ob->value() >= 100000) 
		{
        message_vision("$n���ĵذ�$N������������\n", who, obj);
		who->move("/d/tianlongsi/tading");
		return 1;
		}
	else
		{
 message_vision("$n˫�ֺ�ʮ������$N�����������������ӷ𣡡�\n", who, obj);
		return 1;
		}
	}
	return 0;
}
