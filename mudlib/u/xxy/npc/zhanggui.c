inherit NPC;
inherit F_VENDOR;
void create()
{
      set_name("�ƹ�",({"zhanggui","laoban"}));
      set("age",54);
      set("gender","����");
      set("attitude","friendly");
      set("combat_exp",50000);
      set("vendor_goods",([
                 "fish":__DIR__"obj/song_fish",
              ]));
      set("str",15);
      set_skill("unarmed",23);
      setup();
      carry_object("/obj/cloth")->wear();
      add_money("coin",120);
}
void init()
{ object ob;
   ::init();
   if (interactive(ob=this_player())&&(!is_fighting()))
         {
                 remove_call_out("greeting");
                 call_out("greeting",1,ob);
         }
add_action("do_vendor_list","list");
}
void greeting(object ob)
{  
      if(!ob||environment(ob)!=environment()) return;
    command("say ��λ����,������[��ɩ��]���Ǻ���һ��,�͹���һ������?\n");
       return;
}