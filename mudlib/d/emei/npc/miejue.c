// miejue.c ���ʦ̫
// Modified by That Oct.1997

inherit NPC;
inherit F_MASTER;
string ask_for_quit();
mixed out_master(mixed arg);

void create()
{
        set_name("���ʦ̫", ({ "miejue shitai","miejue","shitai"}));
        set("long",
                "���Ƕ����ɵĵ��������ӣ����ζ����������ˡ�\n");
        set("gender", "Ů��");
        set("age", 62);
        set("attitude", "peaceful");

        set("mingwang", 100000);
        set("class", "bonze");
        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
                (: perform_action, "sword.mie" :),
        }) );
        set("inquiry",([
                "���"  : "ƶ��ֻ֪����ɱħ������ȵ��ӡ�",
                "����"  : "ƶ��ֻ֪����ɱħ������ȵ��ӡ�",
                "����"  :  (: ask_for_quit :),
        ]));

        set("str", 35);
        set("int", 35);
        set("con", 35);
        set("per", 20);

        set("max_kee", 4000);
        set("max_gin", 2000);
        set("force", 4000);
        set("max_force", 4000);
        set("force_factor", 25);
        set("max_sen", 1500);

        set("combat_exp", 2000000);
        set("score", 1000);
        set_skill("foxuexinde", 150);
        set_skill("force", 200);
        set_skill("dodge", 200);
        set_skill("parry", 200);
        set_skill("unarmed", 200);
        set_skill("sword", 200);

        set_skill("literate", 100);
     
        set_skill("emei-xinfa", 200);
        set_skill("huifeng-jian", 200);
        set_skill("sixiang-zhang", 200);
        set_skill("anying-fuxiang", 200);

        map_skill("force","emei-xinfa");
        map_skill("dodge","anying-fuxiang");
        map_skill("unarmed","sixiang-zhang");
        map_skill("sword","huifeng-jian");
        map_skill("parry","huifeng-jian");
        create_family("������", 3, "����");

        setup();
        carry_object("/obj/weapon/sword")->wield();
        carry_object("/obj/armor/ni-cloth")->wear();
        carry_object("/obj/armor/ni-xie")->wear();
}
void init()
{
  add_action("do_kneel","kneel");
}
void attempt_apprentice(object ob)
{
   mapping ob_fam;
   mapping my_fam  = ob->query("family");

   string name, new_name;
   name = ob->query("name");

   if (!(ob_fam = ob->query("family")) || ob_fam["family_name"] != "������")
   {
      command("say " + RANK_D->query_respect(ob) + "�뱾��������������֪�˻��Ӻ�̸��");
      return;
   }
   switch (random(2))
   {
        case 1: break;
        default:
           if ((string)ob->query("class")!="bonze" )
           {
               command ("say �����ӷ�ƶ�᲻���׼ҵ��ӡ�");
               return;
           }
           else
           {
               command ("say �����ӷ�ƶ�᲻�յ��ӡ�");
               return;
           }
   }
   if ((int)ob->query_skill("foxuexinde",1)<90||(int)ob->query_skill("sixiang-zhuang",1)<90)
   {
      command("say �㱾�ŵĹ�����Ϊ��̫�͡�");
      return;
   }
   if ((int)ob->query("mingwang") < 50000)
   {
      command("say " + RANK_D->query_respect(ob) + "����������֮�»����Ĳ�����");
      return;
   }
   if ((string)ob->query("class")=="bonze" )
   {
        name = ob->query("name");
        new_name = "��" + name[2..3];
        ob->set("name", new_name);
        command("say �ӽ��Ժ���ķ�������" + new_name + "����ϲ���Ϊ���ҵ��Ĵ�����!");
   }

   command("say �����ӷ����գ����գ��ðɣ��Ҿ��������ˡ�");
   command("say ϣ�������Դȱ�֮�ģ����ǻ�֮����Ŭ�����ƣ��ö�������");
   command("recruit " + ob->query("id"));
}

string ask_for_quit()
{
    object me;
    mapping myfam;
    me = this_player();

    myfam = (mapping)me->query("family");
    if (!myfam || (myfam["family_name"] != "������")) 
        return ("��Ͷ���û��ԨԴ��ƶ�᲻�Ҹ��㻹�ס�\n");
    if( (string)me->query("class")!="bonze" )
        return "�����ӷ𣡳����˲���ڿ����Ѿ����׼����ˡ�\n";
    me->set_temp("pending/quit_bonze", 1);
        command ("say �����ӷ����գ����գ���һ��Ҫ���ף���Ҳ��������\n");
        command ("say �ҽ���ȥ�㲿���书�������(kneel)������\n");
        return "�����Ը���׵ģ��Ͱ����ڴ������ɡ�\n";
}

int do_kneel()
{
  object ob;
  int level;
  ob=this_player();
  if (ob->query("family/family_name")!="��ü��")  {
  message_vision("$NͻȻ������$n���˸�ͷ.\n",ob,this_object());
  return 1;
}
if (!ob->query_temp("pending/quit_bonze"))   {
	command("say ���Ҹ���,���񾭰���,����ȥ�������.\n");
	return 1;}
message_vision("$N��$nͷ���������µ�:�������,��������.\n",this_object(),ob);
ob->set("name",ob->query("marks/old_name"));
(int)level=ob->query_skill("foxuexinde",1);
ob->set_skill("foxuexinde",level/2);
tell_object(ob,"�������,��ѧ�ĵý�����.\n");
ob->set("class","xiake");
ob->delete("marks/old_name");
return 1;
}

