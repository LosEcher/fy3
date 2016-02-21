// xu.c ����ʦ̫
// Modified by That Oct.1997
#include <command.h>
#include <ansi.h>

inherit NPC;
inherit F_MASTER;
string ask_for_join();
void create()
{

        set_name("����ʦ̫", ({ "jingxu shitai","jingxu","shitai"}));
        set("long",
          "���Ƕ����ɶ�ʦ�㣬�������¶��꣬һ�׶����Ʒ�������������\n");
        set("gender", "Ů��");
        set("age", 43);
        set("attitude", "peaceful");
        set("mingwang", 10000);
        set("class", "bonze");
        set("inquiry",([
                "���"  : (: ask_for_join :),
                "����"  : (: ask_for_join :),
                "����"  : "���ҵ��ӣ����ܻ��ס���������ʦ̫�ɡ�",
        ]));

        set("str", 30);
        set("int", 30);
        set("con", 30);
        set("per", 20);

        set("max_kee", 1000);
        set("max_gin", 500);
        set("force", 1500);
        set("max_force", 1500);
        set("force_factor", 15);
        set("max_sen", 1500);

        set("combat_exp", 250000);
        set("score", 1000);
        set_skill("foxuexinde", 80);
        set_skill("force", 100);
        set_skill("dodge", 90);
        set_skill("parry", 90);
        set_skill("unarmed", 80);
        set_skill("sword", 100);
        set_skill("literate", 90);

        set_skill("sixiang-zhang", 100);
        set_skill("anying-fuxiang", 90);
        set_skill("huifeng-jian", 100);
        set_skill("emei-xinfa", 100);
        set_skill("literate", 100);
        map_skill("force","emei-xinfa");
        map_skill("dodge","anying-fuxiang");
        map_skill("unarmed","sixiang-zhang");
        map_skill("sword","huifeng-jian");
        map_skill("parry","huifeng-jian");

        create_family("������", 4, "����");

        setup();
        carry_object("/obj/weapon/sword")->wield();
        carry_object("/obj/armor/ni-cloth.c")->wear();
        carry_object("/obj/armor/ni-xie")->wear();
}
void init()
{
        add_action("do_kneel", "kneel");
}
void attempt_apprentice(object ob)
{
   if( (string)ob->query("class")!="bonze" )
   {
      command ("say �����ӷ�ƶ�᲻�յ��ӡ�\n");
      command ("say ���������ѧ�����ɵĹ��򣬻���ȥ�����׼�ʦ�ðɡ�\n");
      return;
   }

   if( (string)ob->query("gender") != "Ů��" )
   {
      command ("say �����ӷ�ƶ�᲻���е��ӡ�ʩ������ѧ�տ�ȥ�����׼�ʦ�á�");
      return;
   }
   if ((int)ob->query("mingwang") < 100)
   {
      command("say " + RANK_D->query_respect(ob) + "����������֮�»����Ĳ�����");
      return;
   }
   if ((int)ob->query_skill("foxuexinde",1) <50)
   {
      command("say ���˷𷨵���Ϊ��Ҫ���Щ��");
      return;
   }
   command("say �����ӷ����գ����գ��ðɣ��Ҿ��������ˡ�");
   command("say ϣ�������Դȱ�֮�ģ����ǻ�֮����Ŭ�����ƣ��ö�������");
   command("recruit " + ob->query("id"));
}

#include "tobebonze.h"
