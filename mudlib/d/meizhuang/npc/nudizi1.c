// woodcutter.c
inherit NPC;

string* xing=({"��","Ǯ","��","��","��","��","֣","��"});
string* ming=({"��","��","��","��","��","��","��","��","��","ɺ",
	"��","��","ٻ","�","��","��","��","��","��","��",});

void create()
{
	string name;
	int level,exp;
	name=xing[random(sizeof(xing))];
	name +=ming[random(sizeof(ming))];
	if(random(10)>5)	name +=ming[random(sizeof(ming))];
	level=50+random(10);
	exp=200000;
	set_name(name,({"nudizi","nu dizi","dizi"}));
	set("gender","Ů��");
	set("age",15+random(15));
	set("long","���ڿ����书��÷ׯŮ���ӡ�\n");
	set("title","��ɽ÷ׯ");
	set("combat_exp",exp);
	set("str", 30);
	set("mingwang",1);
	set_skill("unarmed",level);
	set_temp("apply/attack",15+random(5));
	set_temp("apply/defense",5);
	set_skill("dodge",level);
	set_skill("parry",level);
	set_skill("xuantian-bu",level);
	set_skill("xuantian-quan",level);
	map_skill("dodge","xuantian-bu");
	map_skill("unarmed","xuantian-quan");
	map_skill("parry","qixianwuxing-jian");
	set("max_force",1000);
	set("force",1000);
	set_skill("qixianwuxing-jian",level);
	set_skill("sword",level);
	map_skill("sword","qixianwuxing-jian");
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object(__DIR__"obj/zhujian")->wield();
	add_money("silver",10);
}
