// seng.c
inherit NPC;

void create()
{
set_name("֪��ɮ",({"zhike","seng"}));
	set("long", "һ����׳ɮ�ˡ�\n" );
	set("gender", "����");
	set("attitude", "peace");

	set("age", 37);
	set("mingwang", 100);
	set("str", 25);
	set("int", 20);
	set("con", 20);
	set("max_kee", 500);
set("max_gin",100);
set("force",500);
set("max_force",500);
set("force_factor",20);
	set("combat_exp", 20000);
	set("score", 100);
	set("apply/attack",  30);
	set("apply/defense", 30);

	set_skill("force", 50);
	set_skill("unarmed", 50);
	set_skill("blade", 50);
	set_skill("dodge", 50);
	set_skill("parry", 50);

	setup();
carry_object("/d/dali/npc/obj/dao-cloth")->wear();
	add_money("silver", 50);
}
void init()
{
        object ob;
 if(interactive(ob=this_player())&&!is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }    
}
void greeting(object ob)
{ 
  if (!ob||environment(ob)!=environment()) return;
  if (ob->query("id")=="qi gai")   {
       message_vision("$N����$n��������:ȥ,ȥȥ,һ��ȥ!\n",this_object(),ob);
    return;
  }
   command("say ʩ���뵽�������!\n");
   return;
}