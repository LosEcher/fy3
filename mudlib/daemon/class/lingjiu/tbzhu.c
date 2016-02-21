// /d/lingjiu/npc/tbzhu.c ���첿 ʯɩ
// By adx @ CuteRabbit 22:21 99-3-19

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("ʯɩ", ({ "shi sao", "shi", "sao" }));
	set("long",
	    "����"+HIC"�����չ���"NOR+"����Ų������첿������.\n"+
	    "������ͯ�Ѷ���, ��������,������˪.\n");
	set("title", HIC"���첿����"NOR);
	set("gender", "Ů��");
	set("age", 30);
        set("shen_type",-1);
	set("attitude", "peaceful");

	set("per", 22);
	set("class", "scholar");
	set("str", 25);
	set("int", 25);
	set("con", 30);
	set("dex", 30);

	set("kee", 1300);
	set("max_kee", 1300);
	set("gin", 500);
	set("max_gin", 500);
	set("force", 2000);
	set("max_force", 2000);
	set("force_factor", 80);

	set("combat_exp", 700000);
	set_skill("force", 100);
	set_skill("unarmed", 100);
	set_skill("dodge", 100);
	set_skill("parry", 100);
	

	set_skill("liuyang-zhang",80);
	set_skill("yueying-wubu",80);
	set_skill("duzun-gong", 70);
        set_skill("tianyu-qijian", 70);

	map_skill("force", "duzun-gong");

	map_skill("dodge", "yueying-wubu");
	map_skill("unarmed", "liuyang-zhang");
	map_skill("parry", "liuyang-zhang");

        set("inquiry", ([
	"���չ�" : "������ǡ�\n",
	"ͯ��" : "�������չ������ˡ�\n",
	"����" : "���չ����ڵ������������������չ�Ψһ�����ӡ�\n",
	"������" : "�����������Ĺ����أ�\n",
        ]));


	create_family("���չ�",4,"����");
	set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
		(: perform_action, "strike.zhong" :),
		(: perform_action, "hand.duo" :),
		(: perform_action, "sword.san" :),
		(: command("unwield jian") :),
		(: command("wield jian") :),
		(: exert_function, "recover" :),
		(: exert_function, "recover" :),
		(: command("unwield jian") :),
		(: command("wield jian") :),
            }) );
	setup();
 	carry_object("/obj/weapon/sword")->wield();
 	carry_object("/d/lingjiu/obj/qingyi")->wear();
        carry_object("/d/lingjiu/obj/doupeng")->wear();
        carry_object("/d/lingjiu/obj/jiudai");
        add_money("silver",25);
}
void init()
{
        object ob;
 
        ::init();
 
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
       if ((string)ob->query("family/family_name") == "���չ�") 
	{
               message_vision("ʯɩ����$N���ͷ��΢΢Ц��Ц��\n",ob);
               return;
	}
	else	 message_vision("ʯɩ������$N������$N��Щ��ë��\n",ob);
}

int accept_object(object me, object ob)
{
	object qing;

        if( ob->query("money_id") ) 
	{
                if(ob->value() < 5)
		{
			command("heng");
			command("say ��򷢽л��Ӱ�������");
			return 1;
		}
		else
		{
                        this_player()->apply_condition("shengsifu_poison", 0);
			command("say �ã������ϵ��������ѽ��ˣ�");
			command("say �´θ������Ĺ���һ��Ҫ׼ʱ��");
			return 1;
		}
	}
}
