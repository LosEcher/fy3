#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void consider();

void create()
{
    set_name("��������", ({"dongfang bubai", "dongfang", "dong"}));
    set("nickname", HIY "�����޵�" NOR );
    set("gender", "����");
    set("age", 42);
    set("long",
        "������������̽������ų����˿ɵУ������һ�ƺ�Ϊ���������ܡ���\n");
    set("attitude", "peaceful");

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

    set("qi", 4000);
    set("max_qi", 4000);
    set("jing", 1000);
    set("max_jing", 1000);
    set("neili", 3500);
    set("max_neili", 3500);
    set("jiali", 100);

    set("combat_exp", 2500000);
    set("score", 0);

    set_skill("force", 150);             // �����ڹ�
    set_skill("bibo-shengong", 150);     // �̲���
    set_skill("finger", 170);            // ����ָ��
    set_skill("tanzhi-shentong", 170);   // ��ָ��ͨ
    set_skill("unarmed", 120);           // ����ȭ��
    set_skill("dodge", 150);        // ��������
    set_skill("anying-fuxiang", 120);    // ��Ӱ����
    set_skill("parry", 150);             // �����м�
    set_skill("sword", 200);             // ��������
    set_skill("pixie-jian", 200);        // PiXieJian
    set_skill("qimen-wuxing",150);       // ��������
    set_skill("literate",150);           // ����ʶ��
    set_skill("kuihua-xinfa", 150);       // �����ķ�

    map_skill("force"  , "kuihua-xinfa");
    map_skill("sword", "pixie-jian");
    map_skill("finger" , "tanzhi-shentong");
    map_skill("unarmed", "luoying-zhang");
    map_skill("dodge"  , "anying-fuxiang");
    map_skill("parry"  , "luoying-shenjian");

    create_family("�������", 2, "����");

    setup();
    carry_object(__DIR__"obj/yuxiao")->wield();
    carry_object(__DIR__"obj/cloth")->wear();

}

void attempt_apprentice(object ob)
{
    if (ob->query_int() < 30) {
        command("say �Ҳ������ʲ�ĵ��ӣ�����ذɣ�\n");
                return;
    }
    if (ob->query("gender") !="����" ) {
        command("say Ҫ���񹦣������Թ���");
              return;
    }
    if ((int)ob->query("shen") >100000 || (int)ob->query ("shen") < -100000 ) {
        command("say �Һ�ľ�������������������������ֳ�������򽻵�������ذɣ�;\n");
                return;
        }
    command("say �ܺã��ܺá�\n");
    command("recruit " + ob->query("id"));
}
int recognize_apprentice(object ob)
{
        mapping myfam;
        myfam = (mapping)ob->query("family");
        if ( myfam["family_name"] == "��ľ��") return 1 ;
        if ((int)ob->query_temp("tmark/��") == 1 )
        message_vision("�������ܿ��˿�$N��˵��������������˭Ҳ��Ƿ˭,\n"
                          "�㲻Ҫ������ѧϰ�����ˡ�\n", ob);
        if (!(int)ob->query_temp("tmark/��"))
                return 0;
        ob->add_temp("tmark/��", -1);
        return 1;
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