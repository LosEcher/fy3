#include <ansi.h>
inherit NPC;
void create()
{
    set_name("�䴫��",({"leng chuanyun"}));
    set("gender","����");
    set("age",54);
    set("long","��ʮ��ǰ��[��ɷ˫��]�Ǻ������ֵĴ����
    �Դ�Ͷ����ڤһ�����������ٳ��ֽ��ӡ�\n");
    set("title",YEL"��ɷ"NOR);
    set("combat_exp",800000);
    set("kee",800);
    set("max_kee",800);
    set("force",800);
    set("max_force",800);
    set("force_factor",25);
    set("food",200);
    set("water",200);
    
    set("inquiry",([
    "��ڤɽׯ":"�����ڴ��ĵط������ˡ�\n",
    "������ħ��":"���������ϴ󷨣���ϧ�缸����ʧ����.\n",
    ]));
    
        set("shen_type",-1);
    set("chat_chance",3);
    set("chat_msg",({
    CYN"�䴫��С�ĵ��ó�һ����ָ,ϸϸ��Ʒζ��.\n"NOR,
    CYN"�䴫������Ŀ�����,�������ϰ��춼��ת��.\n"NOR,
    CYN"�䴫������΢΢һת,����ǰ�ֳ�������Ӱ�ӡ�\n"NOR,
    }));
    
    set_skill("dodge",80);
    set_skill("parry",80);
    set_skill("unarmed",80);
    set_skill("force",80);
    set_skill("literate",20);
    set_skill("guiyingmizong",50);
    set_skill("jiuyou-xinfa",50);
    set_skill("youming-zhang",50);
    
    map_skill("dodge","guiyingmizong");
    map_skill("unarmed","youming-zhang");
    map_skill("parry","youming-zhang");
    map_skill("force","jiuyou-xinfa");
  
    setup();
    add_money("silver",5);
 }
void init()
{
  object ob;
  ::init();
  if (interactive(ob=this_player())&&!is_fighting())  {
  	remove_call_out("greeting");
  	call_out("greeting",1,ob);
     }
  }
void greeting(object ob)
{
   if (!ob||environment(ob)!=environment())  return;
   if (ob->query("family/family_name")!=RED"��ڤɽׯ"NOR) {
   command("guard out");
   	return;
     }
command("guard cancel");
return;
}
