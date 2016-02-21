// zhou.c ������

#include <command.h>
#include <ansi.h>

inherit NPC;
inherit F_MASTER;
string do_jian();
int have_jian=1;
void create()
{
        set_name("������", ({ "zhou zhiruo","zhiruo","zhou"}));
        set("long",
                "���Ƕ����ɵĵ��Ĵ����ŵ��ӡ�\n"
                "һ�����������ס�����һ�������ѡ�\n"
                "�����������Ц�д���Щ�����Ρ�\n"
                "���ܼ�į��\n");
        set("gender", "Ů��");
        set("age", 20);
        set("attitude", "peaceful");
        set("shen_type", -2000);
        set("class", "fighter");
        set("str", 30);
        set("int", 30);
        set("con", 30);
        set("per", 30);

        set("max_kee", 3500);
        set("max_gin", 1000);
        set("force", 3500);
        set("max_force", 3500);
        set("force_factor", 20);
        set("max_sen", 1000);

        set("inquiry",([
"���콣":(:do_jian:),
  ]));
        set("combat_exp", 1500000);
        set("score", 1000);
        set_skill("foxuexinde", 80);
        set_skill("force", 100);
        set_skill("throwing", 100);
        set_skill("parry", 100);
        set_skill("unarmed", 100);
        set_skill("sword", 100);
        set_skill("literate", 100);
        set_skill("dodge", 100);
        set_skill("sixiang-zhang", 100);
        set_skill("anying-fuxiang", 100);
        set_skill("huifeng-jian", 100);
        set_skill("emei-xinfa", 100);
        map_skill("force","emei-xinfa");
        map_skill("dodge","anying-fuxiang");
        map_skill("unarmed","sixiang-zhang");
        map_skill("sword","huifeng-jian");
        map_skill("parry","huifeng-jian");
        create_family("������", 4, "���ŵ���");

        setup();
        carry_object("/obj/weapon/sword")->wield();
        carry_object("/d/emei/obj/ycloth.c")->wear();
}

void init()
{
  add_action("do_agree","agree");
}
void attempt_apprentice(object ob)
{
    if (ob->query("gender")=="����"&&ob->query("per")<25)  {
 command("say ��ȥ���վ���,��ô��ª������ñ���Ҽ���.\n");
    return;
    }
  if (ob->query("age")>35)   {
  command("say ����ôһ�����,�ҿ��žͲ����,��������.\n");
  return;
   }
  if (ob->query("gender")=="Ů��"&&ob->query("per")>20)  {
  command("say ����ô��������,Ϊʲô��ȥ�������Ǹ�С����.\n");
  return;
    }
 command("recruit "+ob->query("id"));
 return;
}
string do_jian()
{
 object ob;
 ob=this_player();
if (have_jian==0) return "��ϧ��������,���Ѿ�����������.\n";
if (find_object("/obj/weapon/yitianjian")) return "�˽��Ѿ����佭��,��֪ȥ����.\n";
if (ob->query("max_force")>500)   {
ob->set_temp("wait_ytj",1);   
return "�ҿ��԰����콣����,����Ҫ���һЩ��������������ɷ��,���Ը��(agree)?\n";
   }
if (ob->query("max_kee")>300)   {
ob->set_temp("wait_ytj",2);
return "�ҿ��԰����콣����,����Ҫ���һЩ������������ɷ��,���Ը��(agree)?\n";
  }
return "������������,���ֲ�����,һ���Ǵ�,�Ҳ��ܰѽ�����.\n";
}
int do_agree()
{
 object ob;
 int i;
 ob=this_player();
 if (!ob->query_temp("wait_ytj"))  {
 command("say ��ͬ��,ͬ��ʲô?�Ҳ��������˼!\n");
 return 1;
  }
 i=1+random(6);
 if (ob->query_temp("wait_ytj")==1)  {
 ob->set("max_force",ob->query("max_force")-i);
 new("/obj/weapon/yitianjian")->move(ob);
 message_vision("$N���������ȡ�����콣��$n.\n",this_object(),ob);
 tell_object(ob,"�����������½���"+i+"��.\n");
 ob->delete_temp("wait_ytj");
 have_jian=0;
 return 1;
 }
 i=1+random(3);
 if (ob->query_temp("wait_ytj")==2)  {
  ob->set("max_kee",ob->query("max_kee")-i);
  new("/obj/weapon/yitianjian")->move(ob);
 message_vision("$N���������ȡ�����콣��$n.\n",this_object(),ob);
 tell_object(ob,"����������ֵ�½���"+i+"��.\n");
 ob->delete_temp("wait_ytj");
 have_jian=0;
 return 1;
 }
 return 0;
}
