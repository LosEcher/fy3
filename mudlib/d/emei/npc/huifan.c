inherit NPC;
inherit F_MASTER;

void create()
{
    set_name("�۷�",({"hui fan","heshang"}));
    set("gender","����");
    set("shen_type",1);
    set("age",76);
    set("combat_exp",500000);
    set("long","�����ɵ�������!\n");
    
set_skill("dodge",150);
set_skill("unarmed",150);
set_skill("parry",150);
set_skill("force",150);
set_skill("literate",150);
set_skill("sixiang-zhang",150);
set_skill("emei-xinfa",150);
 set_skill("anying-fuxiang",150);
 set_skill("huifeng-jian",150);

    map_skill("dodge","anying-fuxiang");
    map_skill("unarmed","sixiang-zhang");
    map_skill("parry","sixiang-zhang");
    map_skill("sword","huifeng-jian");

    create_family("������",5,"����");
    set("inquiry",([
       "name":"�Ϻ��л۷�.\n",
       "here":"�˴��˶��ҽ�\n",
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
if (me->query_skill("emei-xinfa",1)<100)  {
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
