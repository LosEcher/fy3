inherit NPC;
inherit F_MASTER;

void create()
{
    set_name("����",({"ming jin","heshang"}));
    set("gender","����");
    set("shen_type",1);
    set("age",56);
    set("combat_exp",150000);
    set("long","����һ�ɵ���!\n");
    
    set_skill("dodge",120);
    set_skill("unarmed",120);
    set_skill("parry",120);
    set_skill("force",120);
    set_skill("literate",120);
    set_skill("sixiang-zhang",120);
    set_skill("emei-xinfa",120);
    set_skill("anying-fuxiang",120);
    set_skill("huifeng-jian",120);

    map_skill("dodge","anying-fuxiang");
    map_skill("unarmed","sixiang-zhang");
    map_skill("parry","sixiang-zhang");
    map_skill("sword","huifeng-jian");

    create_family("������",6,"����");
    set("inquiry",([
       "name":"ƶɮ����,���׳��Ҷ���.\n",
       "here":"�˴��˶�����Ժ,������.\n",
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
if (me->query_skill("emei-xinfa",1)<50) {
command("say ��Ķ����ķ���������ѽ,��������!\n");
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
