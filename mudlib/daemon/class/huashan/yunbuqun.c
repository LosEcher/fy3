inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("����Ⱥ", ({ "yue buqun", "master", "yue" }) );
        set("title", "��ɽ����������");
        set("nickname", "���ӽ�");        
	set("gender", "����");
        set("age", 47);
        set("long",
 "�����ǻ�ɽ�ɵ����������ˣ��������˳ơ����ӽ���������Ⱥ��������ȥ\n"
 "�Ǹ����Ƶ������ˣ��������Ǳ�����񣬺���һ����ʦ�ķ緶��\n" );
        set("inquiry", ([
                "��ϼ�ؼ�": "�Բ����������ˣ���ϼ�ؼ������������\n",
                "����": "���������ҵ��鷿͵������ץ������"
]) );        
	set("attitude", "peaceful");
        set("str", 28);
        set("int", 28);
        set("spi", 25);
        set("per", 28);
        set("cps", 30);
        set("force", 4500);
        set("max_force", 4500);
        set("force_factor",75);
        set("rank_info/respect", "������");        
          set("combat_exp",1950000);
        set("score",150000);
        set_skill("unarmed", 130);
        set_skill("sword", 130);
        set_skill("force", 130);
        set_skill("blade", 130);
        set_skill("parry", 130);
        set_skill("dodge", 130);
set_skill("literate", 150);
set_skill("huashan-jianfa",130);
 set_skill("huashan-zhangfa", 130);
set_skill("zixia-shengong", 130);
set_skill("huashan-shenfa", 130);
        map_skill("dodge", "huashan-steps");
        map_skill("unarmed", "huashan-strike");
        map_skill("force", "zixia-shengong");
        map_skill("sword", "huashan-sword");
        create_family("��ɽ��", 13, "������");
        setup();
carry_object("/obj/weapon/sword")->wield();
//        carry_object(__DIR__"obj/cloth")->wear()
}
void attempt_apprentice(object ob)
{
        if( (string)ob->query("gender") != "����" )
                command("say �Ҳ���Ů���ӵģ����ﻹ�������ʦ�ɡ�");
        else {
                command("nod");
                command("say " + RANK_D->query_respect(ob) + "�պ�سɴ��� ��\n");                command("recruit " + ob->query("id") );
             }
}
void recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
                ob->set("class", "huashan");
}
