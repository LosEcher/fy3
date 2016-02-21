#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void consider();
string ask_me();

void create()
{
    set_name("��ҩʦ", ({"huang yaoshi", "huang", "yaoshi"}));
    set("title", "�һ�����");
    set("nickname", HIY "��а" NOR );
    set("gender", "����");
    set("age", 42);
    set("long", 
        "�������һ����������ºö�ȫ�ɼ��ģ���˱��˳�������а����\n");
    set("attitude", "peaceful");
    set("class", "scholar");
        
    set("str", 21);
    set("int", 30);
    set("con", 26);
    set("dex", 30);

    set("chat_chance", 1);
    set("chat_msg", ({
        "��ҩʦ̾�˿����������� ���� �ض�������ĺ��ӣ���С��û���� ������\n",
        "��ҩʦ��ͷ��˼����Ȼ���\n",
    }));
    set("inquiry", ([
        "����"     : "���ֱ����Ů���Ĺ����� \n",
        "�����澭" : "������ܰ���ȡ���澭�ϲᣬ��һ������л�㡣\n",
    ]));

    set("kee", 3000);
    set("max_kee", 3000);
    set("gin", 3000);
    set("max_gin", 3000);
    set("force", 3500);
    set("max_force", 3500);

    set("combat_exp", 1500000);
    set("score", 0);
         
    set_skill("force", 200);             // �����ڹ�
    set_skill("bibo-shengong", 200);     // �̲���
    set_skill("claw", 200);              // ����צ��
    set_skill("hand", 200);              // �����ַ�
    set_skill("finger", 200);            // ����ָ��
    set_skill("tanzhi-shentong", 200);   // ��ָ��ͨ
    set_skill("unarmed", 200);           // ����ȭ��
    set_skill("strike", 200);            // ����ȭ��
    set_skill("luoying-zhang", 200);     // ��Ӣ����
    set_skill("dodge", 200);             // ��������
    set_skill("yingxian-steps", 200);    // Ӱ�ɲ���
    set_skill("parry", 200);             // �����м�
    set_skill("sword", 200);             // ��������
    set_skill("luoying-shenjian", 200);  // ��Ӣ��
    set_skill("yuxiao-jian", 200);       // ���｣��
    set_skill("literate",150);           // ����ʶ��
        
    map_skill("force"  , "bibo-shengong");
    map_skill("finger" , "tanzhi-shentong");
    map_skill("unarmed", "luoying-zhang");
    map_skill("dodge"  , "yingxian-steps");
    map_skill("parry"  , "luoying-shenjian");
    map_skill("sword"  , "yuxiao-jian");

    create_family("�һ���", 1, "����");
    setup();
        
    
}

void attempt_apprentice(object ob)
{
    if (ob->query_int() < 30) {
        command("say �Ҳ������ʲ�ĵ��ӣ�����ذɣ�");
                return;
    }
    if ((int)ob->query_skill("bibo-shengong",1) < 50 ) {
        command("say ��ı����ڹ��ķ�̫����,����ŬŬ�������һ�°�!");
                return;
    }
    if ((int)ob->query("shen") >100000 || (int)ob->query ("shen") < -100000 ) {
        command("say ���һ��������������������������ֳ�������򽻵�������ذɣ�");
                return;
        }
    command("say �ܺã��ܺá�");
    command("recruit " + ob->query("id"));
}

int recognize_apprentice(object ob)
{
        mapping myfam;
        myfam = (mapping)ob->query("family");
        if ( myfam["family_name"] == "�һ���") return 1 ;
        if ((int)ob->query_temp("tmark/��") == 1 )
        message_vision("��ҩʦ���˿�$N��˵��������������˭Ҳ��Ƿ˭,\n"
                          "�㲻Ҫ������ѧϰ�����ˡ�\n", ob);
        if (!(int)ob->query_temp("tmark/��"))
                return 0; 
        ob->add_temp("tmark/��", -1);
        return 1;
}




