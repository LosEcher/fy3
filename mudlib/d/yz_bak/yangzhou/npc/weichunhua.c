// by Mr.music Τ����

#include <ansi.h>

inherit NPC;

string ask_me(object who);

void create()
{
	set_name("Τ����", ({"weichunhua","wei","chun hua", "hua" }) );
	set("title", "�ĳ��ϰ�");
	set("gender", "Ů��" );
	set("mingwang", -1);
	set("age", 30);
	set("str", 45);
	set("cor", 15);
	set("cps", 45);
	set("int", 15);
	set("long",
		"���۾�һ������������а,��֪���롣\n" );

	set("combat_exp", 50000);
//        set("attitude", "aggressive");
	set("attitude", "heroism");

        set("chat_chance", 8);
        set("chat_msg", ({
                "����˵������ү��˧������Ǯ�ɡ� \n",
                "������Ц��Ц�ؿ�����һ�ۡ� \n",
                "����Ц����������������ܿ�����\n",
                (: random_move :) 
        }) );

	set("chat_chance_combat", 4);
	set("chat_msg_combat", ({
		"����˵��: ������ɱ��ѽ! \n",
		"����˵��: ���� ! �������˻����� ?....\n",
                "����˵��: ��������������ɲ� ? \n",
                (: random_move :)
	}) );

	set("inquiry", ([
		"ΤС��" : "��֪��С������ȥ�ˡ�������" ,
                "weixiaobao" : "��֪��С������ȥ�ˡ�������" ,
                "apple" : "���������ã��ܵ�Ƥ��... ",
	]) );

	set_skill("dodge", 90);
	set_skill("unarmed", 10);
	set_skill("parry", 90);

	setup();
	
	carry_object("/obj/cloth")->wear();
}


