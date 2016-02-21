// by Mr.music Τ����

#include <ansi.h>

inherit KZZNPC;

string ask_me(object who);
string query_save_file() { return DATA_DIR + "npc/Τ����"; }

void create()
{
#include <kzznpc.h>
	set_name("Τ����", ({"weichunhua","wei","chun hua", "hua" }) );
	set("title", "�ĳ��ϰ�");
	set("gender", "Ů��" );
	set("mingwang", -1);
	set("age", 30);
	set("str", 45);
	set("cor", 15);
	set("cps", 45);
	set("int", 15);
	set("max_kee",800);
        set("area_name","�ĳ�");
      	set("area_file","/d/yangzhou/duchang.c");
	set("long",
		"���۾�һ������������а,��֪���롣\n" );

	set("combat_exp", 150000);
//        set("attitude", "aggressive");
	set("attitude", "heroism");

        set("chat_chance", 8);
        set("chat_msg", ({
                "����˵������ү��˧������Ǯ�ɡ� \n",
                "������Ц��Ц�ؿ�����һ�ۡ� \n",
                "����Ц����������������ܿ�����\n",
//                (: random_move :) 
        }) );

	set("chat_chance_combat", 4);
	set("chat_msg_combat", ({
		"����˵��: ������ɱ��ѽ! \n",
		"����˵��: ���� ! �������˻����� ?....\n",
                "����˵��: ��������������ɲ� ? \n",
//                (: random_move :)
	}) );

	set("inquiry", ([
		"ΤС��" : "��֪��С������ȥ�ˡ�������" ,
                "weixiaobao" : "��֪��С������ȥ�ˡ�������" ,
                "apple" : "���������ã��ܵ�Ƥ��... ",
	]) );

	setup();
	
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/sword")->wear();
}

#include <die.h>
