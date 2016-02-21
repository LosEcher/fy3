inherit NPC;
void reset();
void create()
{
        set_name("����", ({ "chuan fu","chuanfu"}) );
        set("gender", "����" );
        set("age",40);
        set("str",30);
        set("int",25);

        set("max_kee",900);
        set("kee",900);
        set("max_sen",900);
        set("sen",900);
        set("combat_exp",3000);
        set_skill("unarmed",100);
        set_skill("parry",120);
        setup();
        carry_object("/obj/armor/cloth")->wear();
        add_money("silver",5);
}

void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
	                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
	object me,room;
	me=this_object();

        if( !ob || environment(ob) != environment() ) 
		return;
              room=load_object("/d/quanzhou/haigang");
              room->delete("exits/enter");
       message_vision("$N�ߺ�һ��,¥�����������˰�����.\n",me);
              load_object("/d/quanzhou/duchuan")->delete("exits/out");
              message("vision","һƬ��������,¥�������뿪����!\n",room);
		call_out("arrive",20+random(20),ob);
	return;
}
void arrive(object ob)
{ object room;
  int i;
  
    if (!living(ob)||environment(ob)!=environment()) 
           { reset();
             return;
            }
    i=ob->query_temp("luyin/target");
    switch(i)
   {   
               case 1:
                   room=load_object("/d/hainan/haibian");
                  break;
               case 2:
                   room=load_object("/d/taiwan/matou");
                  break;
     }
    message_vision("����ָ��Խ��Խ������ͷ��$N��:������,�����´���!\n",ob);
    message_vision("$N˳�ų����ļװ����´�ȥ.\n",ob);
   
    ob->delete_temp("luyin");
    tell_room(room,ob->query("name")+"��һ�Ҹտ�����¥������������!\n");
            ob->move(room);
    reset();
return;
}
void reset()
{   
    load_object("/d/quanzhou/haigang")->set("exits/enter","/d/quanzhou/duchuan");
    load_object("/d/quanzhou/duchuan")->set("exits/out","/d/quanzhou/haigang");

       return;
}