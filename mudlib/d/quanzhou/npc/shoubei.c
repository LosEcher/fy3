// wujiang.c �佫

inherit NPC;
void create()
{
        set_name("�����ر�", ({ "shoubei", "bei", "jiang" }));
        set("gender", "����");
        set("age", random(10) + 30);
        set("str", 25);
        set("long", "���������ݣ�ɱ�����ڣ���Ȼֻ�Ǹ��س��ŵ�С�٣�����Ҳ�Ǵ�����̵ġ�\n");
        set("combat_exp", 80000);
        set("attitude", "peaceful");

        set_skill("unarmed", 70);
        set_skill("force", 70);
        set_skill("sword", 70);
        set_skill("dodge", 70);
        set_skill("parry", 70);
	set("max_kee", 700);
	set("max_sen", 600);
        set("force", 400); 
        set("max_force", 400);
        set("force_factor", 15);
        setup();
        carry_object("/d/quanzhou/obj/blade")->wield();
        carry_object("/d/quanzhou/obj/tiejia")->wear();
        add_money("gold",1);
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
int greeting(object ob)
{   object me,*inv;
    int count;
    ob=this_player();
   me=this_object();
 if (!living(ob)||environment(ob)!=environment()) return 0;
     if (random(5)==3)
  {
     message_vision("$Nָ��$n��:�����,��������,��ү��ô���Ų���!
˵�Ŷ�$nһ������!\n",me,ob);
       	inv=all_inventory(ob);
	for(count=0;count<sizeof(inv);count++)
	    if(inv[count]->query("id")=="silver")
     {   if (random(3)==1)
                   {    inv[count]->move(me);
                        message_vision("$N��$n�����ѳ�һЩ����,˳�ִ�������!
�漴����$nһ��:���������,������ү����ץ������ȥô?\n",me,ob);
                        command("say �ֵ���,��������е�����!\n");
                        return 1;
                    }
                 else 
                    message_vision("$N���˰���,ʲô��û�ҵ�,���ߵ�һ�Ű�$n�߿�!\n",me,ob);
                    if (random(2)==1)
                       {     tell_room("/d/quanzhou/estreet2",ob->query("name")+"����һ�����˹���,����ƨ����ֱ��!\n");
                             ob->move("/d/quanzhou/estreet2");
                              return 1;
                        }
                   else 
                           tell_room("/d/quanzhou/dalu1",ob->query("name")+"����һ�����˹���,����ƨ����ֱ��!\n");
                           ob->move("/d/quanzhou/dalu1");
                           return 1;
             }
    if (count==sizeof(inv))
         message_vision("$N���˰���,һ�����Ӷ�û�̵�,��$n�ƿڴ���:
�������⵰,����ү��Զһ��!\n",me,ob);
      return 1;
  }
 return 1;
}                   