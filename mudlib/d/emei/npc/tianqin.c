inherit NPC;
inherit F_MASTER;

void create()
{
    set_name("����",({"tian qin","laoren"}));
    set("gender","����");
    set("shen_type",1);
    set("age",96);
    set("combat_exp",1500000);
    set("long","�����ɳ���,��������!\n");
    
set_skill("dodge",200);
set_skill("unarmed",200);
set_skill("parry",200);
set_skill("force",200);
set_skill("literate",200);
set_skill("sixiang-zhang",200);
set_skill("emei-xinfa",200);
set_skill("anying-fuxiang",200);
set_skill("huifeng-jian",200);

    map_skill("dodge","anying-fuxiang");
    map_skill("unarmed","sixiang-zhang");
    map_skill("parry","sixiang-zhang");
    map_skill("sword","huifeng-jian");

    create_family("������",4,"����");
    set("inquiry",([
       "name":"�Ϻ�������.\n",
       "here":"�˴��˶�������\n",
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
if (me->query_skill("emei-xinfa",1)<150) {
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
