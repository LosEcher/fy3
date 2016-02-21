// dongfang.c
#include <ansi.h>
inherit NPC;

void consider();

void create()
{
    set_name("��������", ({"dongfang bubai", "dongfang", "bubai"}));
    set("title","�����޵�");
    set("banghui", "���½�");
    set("bh_rank","����");
    set("gender", "����");
    set("shen_type", -1);
    set("age", 42);
    set("long",
        "������������̽������ų����˿ɵУ������һ�ƺ�Ϊ���������ܡ���\n");
    set("attitude", "peaceful");

    set("per", 21);
    set("str", 21);
    set("int", 30);
    set("con", 26);
    set("dex", 30);

    set("chat_chance", 1);
    set("chat_msg", ({
 "��������̾�˿����������� ���� �ҵ�����....����ô��������,�Һ�\n"
 "������ ������������������¶������ã��\n",
        }));
    set("inquiry", ([
        "����ͤ"   : "���ֱ���Ұ��˵�����,������ѽ�� \n",
        "��������" : "������ܰ���ȡ�ÿ��������ϲᣬ��һ������л�㡣\n",
    ]));

    set("kee", 4000);
    set("max_kee", 4000);
    set("gin", 1000);
    set("max_gin", 1000);
    set("force", 4500);
    set("max_force", 4500);
    set("force_factor", 400);

    set("combat_exp", 2500000);
    set("score", 0);

    set_skill("force", 200);             // �����ڹ�
    set_skill("unarmed", 200);           // ����ȭ��
    set_skill("dodge", 200);             // ��������
    set_skill("parry", 200);             // �����м�
    set_skill("sword", 200);             // ��������
    set_skill("pixie-jianfa", 200);        // ��а����
    set_skill("literate", 100);          // ����ʶ��
    set_skill("kuihua-xinfa", 200);      // �����ķ�

    map_skill("force", "kuihua-xinfa");
	map_skill("sword","pixie-jianfa");
    map_skill("dodge", "pixie-jianfa");
    map_skill("parry", "pixie-jianfa");

    setup();
	carry_object(__DIR__"obj/hongchouxiaoshan")->wear();
	carry_object(__DIR__"obj/zhen")->wield();

}

int recognize_apprentice(object ob)
{
	string banghui;
	banghui=(string)ob->query("banghui");
	if(banghui==query("banghui"))	{
	if(ob->query("score")<5000)
		return notify_fail(query("name")+"�����㻹�Ƕ�Ϊ������Щʵ�°ɡ�\n");
	return 1;
	}
	else	{
        if ((int)ob->query_temp("tmark/��") == 1 )
        message_vision("�������ܿ��˿�$N��˵��������������˭Ҳ��Ƿ˭,\n"
                          "�㲻Ҫ������ѧϰ�����ˡ�\n", ob);
        if (!(int)ob->query_temp("tmark/��"))
                return 0;
        ob->add_temp("tmark/��", -1);
        return 1;
	}
}



int accept_object(object who, object ob)
{

        if ( (string) ob->query("id") =="kuihua baodian1" ) {
                if (!(int)who->query_temp("tmark/��",)) who->set_temp("tmark/��",100);
                message_vision("�������ܿ��˿�$N�������ؼ������˵�ͷ��˵����\n"
                               "�ѵ��㽫�����ͻء������ҵĶ����Ҿ������ˡ�\n"
                               "��Ϊ����,����Դ�������ѧ�㹦��\n", who);
                who->add_temp("tmark/��", 100);
                return 1;

        }
        return 0;
}
