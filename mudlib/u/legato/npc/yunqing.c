#include <ansi.h>;
inherit NPC;
inherit F_MASTER;
int perform();
void create()
{
        set_name("����", ({ "yun qing", "yun"}) );
        set("title","���㹫��");
        set("gender", "����");
        set("nickname",MAG"���곤��"NOR);
        set("age", 28);
        set("str", 40);
        set("cor", 40);
        set("cps", 43);
        set("int", 40);
        
        set("shen_type", 6);

        set("max_force", 5000);
        set("force", 5000);
        set("force_factor", 50);

        set("attitude", "peaceful");
        set("combat_exp", 5867362);
       set_skill("unarmed", 180);
        set_skill("sword", 180);
        set_skill("parry", 180);
        set_skill("dodge", 180);
       set_skill("force", 180);
       set_skill("luoyan-jianfa",180);
       set_skill("yuxuan-guizhen",180);
       set_skill("tianfeng-xuan",180);
       set_skill("tiangang-zhi",180);
       set_skill("changge-jianfa",200);
       set_skill("literate",200);
       map_skill("dodge","tianfeng-xuan");
       map_skill("sword","changge-jianfa");
       map_skill("unarmed","tiangang-zhi");
       map_skill("parry","tiangang-zhi");
       map_skill("force","yuxuan-guizhen");
       create_family("�㵴��",2,"����");
        set_temp("apply/attack", 25);
        set_temp("apply/defense", 25);
        set_temp("apply/damage", 25);
        setup();
carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}
void init()
{ 
  tell_object(this_player(),"�����������૵�˵������Ϊ�������ˣ����ϲ���ʧ��������\n");
  tell_object(this_player(),"����һ����̾�������ǰ����ǵĻ���\n");
  tell_object(this_player(),"������е������ʵ������常�����˼Һ�ô��\n");
}

void attempt_apprentice(object ob)
 {  if (ob->query_skill("yuxuan-guizhen",1)>50)   {
        command("nod");
        command("say " + RANK_D->query_respect(ob) + 
"�������ʪ���ܵģ�����Զ����Ҳ�����ף��Ҿ��������
����Ҫ��ס���׼�������ԶԶû�н�����Խ��Ư����Ů��Խ������
ʲô�������ﶼ��Ҫ������ȥ���㻹���ᣬһ��
Ҫ����Ҫ�����ŵ�ѧϰ�ϣ�ѧ���������߱����¶�����
................����������ȥû��ѽ\n");
        command("recruit " + ob->query("id") );
        return;
   }
 else command("say ��������������û�������ѽ,��Ŭ����.\n");
 return;
 }
 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("class", "xiake");
                message("channel:rumor", 
YEL"��ҥ�ԡ�"+ "ĳ�ˣ�"+ob->query("name")+"���ռ����㵴һ�ɡ�\n"NOR,users());
return;
 }

