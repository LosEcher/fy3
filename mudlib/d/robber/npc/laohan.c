inherit NPC;
void create()
{
    set_name("���Ϻ�",({"cha laohan"}));
    set("gender","����");
set("age",57);
    set("shen_type",1);
    set("combat_exp",20000);
    
    set_skill("unarmed",20);
    set_skill("parry",20);
    set_skill("dodge",20);
    set_skill("literate",20);
    set("inquiry",([
  "��":"�Ǳ߸��о��ǣ������Լ��룬���������Ÿ�!\n",
  "��ˮ":"�Ǳ߸��о��ǣ������Լ��룬����������.\n",
  ]));

    setup();
}
int accept_object(object who,object ob)
{
   command("say ��л���ϣ�лл��лл!\n");
   return 1;
}

  
