#include <ansi.h>
inherit NPC;
inherit F_MASTER;
void create()
{
    set_name("����ʦ",({"zong wangshi","zong"}));
    set("gender","����");
    set("age",27);
    set("long","һ�����,Խ���Ե���������,��˵�书������һ
    ����,�ɳ��̳���\n");
    set("title",RED"��ڤɽׯ������"NOR);
    set("combat_exp",1000000);
    set("kee",1000);
    set("max_kee",1000);
    set("force",1000);
    set("max_force",1000);
    set("force_factor",25);
    set("food",200);
    set("water",200);
    
    set("inquiry",([
    "��ڤɽׯ":"�ԴӶ�ʮ��ǰ����������Χ��,�ҵ��Ͷ㵽�˴˴�?\n",
    "������ħ��":"���������ϴ󷨣���ϧ�缸����ʧ����.\n",
    ]));
        set("shen_type",-1);
    
    set("chat_chance",3);
    set("chat_msg",({
    CYN"�ҽ����˲ŵ���,����Ҫ�������ֲ���.\n"NOR,
    CYN"��˵�ҽ��л���λ����,������Ҳ��û����.\n"NOR,
    CYN"������޽��û��㲻��,��˭Ҳ�벻�������ڳ������¡�\n"NOR,
    }));
    
    set_skill("dodge",100);
    set_skill("parry",100);
    set_skill("unarmed",100);
    set_skill("force",100);
    set_skill("literate",60);
    set_skill("guiyingmizong",100);
    set_skill("jiuyou-xinfa",100);
    set_skill("youming-zhang",100);
    
    map_skill("dodge","guiyingmizong");
    map_skill("unarmed","youming-zhang");
    map_skill("parry","youming-zhang");
    map_skill("force","jiuyou-xinfa");
    
create_family(RED"��ڤɽׯ"NOR,5,"������");    
    setup();
    add_money("gold",1);
 }
void attempt_apprentice(object ob)
{
  if (ob->query("mingwang")>0)   {
  	command("say ����������������,���ܳ��ļ�������ڤɽׯ?\n");
  	return;
      }
command("recruit "+ob->query("id"));
  return;
 }
  
