inherit NPC;
inherit F_MASTER;

void create()
{
    set_name("����",({"qin xin","heshang"}));
    set("gender","����");
    set("shen_type",1);
    set("age",36);
    set("combat_exp",50000);
    set("long","����һ�ɵ���!\n");
    
    set_skill("dodge",60);
    set_skill("unarmed",60);
    set_skill("parry",60);
    set_skill("force",60);
    set_skill("literate",60);
    set_skill("sixiang-zhang",60);
    set_skill("emei-xinfa",60);
    set_skill("anying-fuxiang",60);
    set_skill("huifeng-jian",60);

    map_skill("dodge","anying-fuxiang");
    map_skill("unarmed","sixiang-zhang");
    map_skill("parry","sixiang-zhang");
    map_skill("sword","huifeng-jian");

    create_family("������",7,"����");
    set("inquiry",([
       "name":"ƶɮ����,���׳��Ҷ���.\n",
       "here":"�˴��˶�����Ժ,������\n",
     ]));
   setup();
   }
void attempt_apprentice(object me)
{
    if (me->query("family/family_name")=="������")
 {
     command("say ����,����,��������ͬ��,������ʦ֮˵!\n");
      return;
 }
  if (me->query("gender")=="Ů��")
{
    command("say ����٢��,���,���,Ůʩ����Ҫ˵Ц!\n");
    return;
}
  command("say ��������,�Ĵ�Կ�,�������.\n");
  command("recruit "+me->query("id"));
return;
}
void recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
			ob->set("class","xiake");
}