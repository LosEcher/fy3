// music  wiz's  �����й�

inherit NPC;

void create()
{
        set_name("�����й�", ({ "tiemianpanguan", "tiemian", "panguan","guan" }));
        set("long", "�㿴��������һ�������˸�����\n");
        set("title", "��������");
        set("gender", "����");
        set("age", 59);
        set("per",90);
        
        set("combat_exp",1000000);

        set_skill("unarmed", 120);
        set_skill("dodge", 190);
        set_skill("parry", 140);
        set_temp("apply/attack", 30);
        set_temp("apply/defense", 30);
        set_temp("apply/damage", 5);

        set("inquiry", ([
              "rules":   "�úö���   help rules .",
        ]) );


        set("combat_exp", 20000);
        set("shen_type", 1);
        setup();
}


void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() )
                {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
                }
add_action("do_gui","gui");
add_action("do_gui","kneel");
return;
}


void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
                        say( "�йٺȵ���" + 
                            ob->query("name")
                                + "�������¹� \n");
}


int do_gui(string arg)
{
// this line only want to remove normal discard process 
// but i do not know how to do it normally .  -- music

object ob;
ob=this_player(1);

 if( arg != ob->query("name"));
 /* ����ȥ�Ƿϻ���������ɾ */

// if ( ob->query("badplayer") < 1) ob->set("badplayer",1); 
// else ob->add("badplayer",1);

ob->add("badplayer",1);

ob->save();

if( (ob->query("badplayer")) > (ob->query("age")-10) )
  {
   say ("��������ûָ�����ų�ȥ�ˣ������Ž̲���!!\n");
   ob->move("/d/wiz/laofang");
   return 1;
  }
else {
      if ( ob->query("badplayer") >1 ) 
          {
           say (ob->query("name")+",������ǰ�ƣ������ٷ�����������!!!\n");
           ob->die();
           return 1;
          }
      else{
           say (ob->query("name")+",������ȼ��£������ٷ�����������!!!\n");
           ob->move("/d/yangzhou/startroom");
          return 1;
          }

     }
return 1;
}

