#include <ansi.h>
inherit NPC;
inherit F_MASTER;
void create()
{
    set_name("����η",({"zong wuwei","zong"}));
    set("gender","����");
    set("age",68);
    set("long","���ź��ۣ����״�����Ŀ��������������Ȼ��
    һ���������ơ�\n");
    set("title",RED"��ڤɽׯ����"NOR);
    set("combat_exp",2000000);
    set("kee",2000);
    set("max_kee",2000);
    set("force",2000);
    set("max_force",2000);
    set("force_factor",50);
    set("food",200);
    set("water",200);
    
    set("inquiry",([
    "��ڤɽׯ":"�Ҿ�����ڤһ����������ʲô��?\n",
    "������ħ��":"�ҽ������ϴ󷨣���ϧ�缸����ʧ����.\n",
    ]));
        set("shen_type",-1);
    
    set("chat_chance",3);
    set("chat_msg",({
    CYN"ħ���е���ն�����ԣ��˼��е�����������.\n"NOR,
    CYN"����һ�ߣ�ħ��һ��!\n"NOR,
    CYN"��ħ�������ν֮������ħ�󷨡���ϧ����ʧ����\n"NOR,
    }));
    
    set_skill("dodge",200);
    set_skill("parry",200);
    set_skill("unarmed",200);
    set_skill("force",200);
    set_skill("literate",120);
    set_skill("guiyingmizong",200);
    set_skill("jiuyou-xinfa",200);
    set_skill("youming-zhang",200);
    
    map_skill("dodge","guiyingmizong");
    map_skill("unarmed","youming-zhang");
    map_skill("parry","youming-zhang");
    map_skill("force","jiuyou-xinfa");
    
create_family(RED"��ڤɽׯ"NOR,4,"����");    
    setup();
    add_money("gold",1);
 }
void attempt_apprentice(object ob)
{
  int i;
  i=ob->query("MKS")+ob->query("PKS");
  if (i<300)     {
  command("say ��ѧ����,��Ӧ������ɱ��,����ɱ��,��ɱ�˼�����?\n");
  return;
          }
  if (ob->query("bellicosity")>500)   {
  command("say ��ɱ��������,�����ִ���������,�Ҳ�����!\n");
  return;
    }
  if (ob->query("mingwang")<20000)   {
  command("say ��ɱ����ô����,���������,ֻ��ȥ��ɱ��,�Ҳ���.\n");
  return;
      }
  command("recruit "+ob->query("id"));
  return;
 }
  
