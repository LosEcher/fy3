#include <ansi.h>
inherit NPC;
void create()
{
    set_name("��̽��",({"leng tanyue"}));
    set("gender","����");
    set("age",54);
    set("long","��ʮ��ǰ��[��ɷ˫��]�Ǻ������ֵĴ����
    �Դ�Ͷ����ڤһ�����������ٳ��ֽ��ӡ�\n");
    set("title",YEL"��ɷ"NOR);
    set("combat_exp",500000);
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
    CYN"��̽��ȡ���Ѵ󿳵����������.\n"NOR,
    CYN"��˵�����л���λ����,����˭��û����.\n"NOR,
    CYN"��̽�������촽��:�����̵�,Ҳ�������˸�������\n"NOR,
    }));
    
    set_skill("dodge",50);
    set_skill("parry",50);
    set_skill("unarmed",50);
    set_skill("force",50);
    set_skill("literate",10);
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
   	kill_ob(ob);
   	return;
     }
   if (ob->query("combat_exp")>500000)
 command("say ��������,��������þ���!\n");
   else   {
 if (ob->query("gender")=="Ů��")
 command("say СѾͷ����ô���ڲ���,�ٲ��������ɷ�����.\n");
 else
 command("say ��С�����ڲŵ�,������������������Ƥ.\n");
}
  return;
}
