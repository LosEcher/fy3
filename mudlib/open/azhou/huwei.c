
inherit NPC;

string ask_me();

void create()
{
        set_name("����", ({ "huwei" }));
        set("nickname", "���ܵ�������");
        set("long", 
                "�����ǰ��ܵ���������\n"
                "��һ���ɸɾ����Ļ�ɫ���ۡ�\n"
                "����Լ��ʮ��ͷ������޳���������⡣\n");
        set("gender", "����");
        set("age", 23);
        set("attitude", "peaceful");
        set("shen_type", 1);
        set("str", 30);

        set("int", 30);
        set("con", 30);
        set("dex", 30);
        
        set("max_qi", 1000);
        set("max_jing", 1000);
        set("neili", 2000);
        set("max_neili", 2000);
        set("jiali", 50);
        set("combat_exp", 100000);
        set("score", 60000);

        set_skill("force", 100);
        set_skill("dodge", 100);
        set_skill("unarmed", 100);
        set_skill("parry", 100);
        set_skill("sword", 100);
//      set_skill("literate", 100);

        set("inquiry", ([
                "����" : "�����˰����Ǹ��˲���Ĵ�Ӣ�ۣ��������Ļ������������ĸ��֣�",
         ]));
        setup();
        carry_object("/open/azhou/obj/suoyi")->wear();
        carry_object(__DIR__"obj/tiepian")->wield();
        
}

