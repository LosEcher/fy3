// music yangzhou's ����ר��
#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("ר������ҷ���(fuyong)��ʮȫ����", ({ "dabuwan","wan"}) );
        set("long", "һ������ҩ��������Ǯ������.���Թ������ٳԡ�\n");
        set("unit", "��");
        set("weight", 100);
        set("value", 1000);
}

void init()
{
        add_action("do_eat", "fuyong");
}

int do_eat(string arg)
{

        int i; int j=0; 
        object *inv;
        object ob;
        if( !id(arg) ) return notify_fail("��Ҫ����ʲ�᣿\n");

        ob=this_player();

         inv=all_inventory(ob);
             for(i=0;i<sizeof(inv);i++)
            {
             if(inv[i]->query("id")== "dabuwan")
              {
                 j=j+1;
              }
            }

 if( ob->query("buchang") )
    {
     write("��ҩ�Թ��ٳԾ�û���ˡ�\n");

// Ҫ���Լ����£�Ҫ�������û������   musix
//   ����      for(i=0;i<sizeof(inv);i++)

         for(i=(sizeof(inv)-1);i>=0;i--)
            {
             if(inv[i]->query("id")== "dabuwan")
              {
                destruct(inv[i]);
              }
            }

     return 1;
    } 
  else
    {
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("gin",(int)ob->query("max_gin"));
        ob->add("max_sen",10*j);
        ob->set("sen",(int)ob->query("max_sen"));
        ob->add("max_kee",10*j);
        ob->set("eff_kee",(int)ob->query("max_kee"));
        ob->add("max_gin",10*j);
        ob->set("eff_gin",(int)ob->query("max_gin"));
        ob->set("eff_sen",(int)ob->query("max_sen"));

        ob->set("atman", (int)ob->query("max_atman"));
        ob->add("max_force",10*j);
        ob->set("force", (int)ob->query("max_force"));
        ob->set("mana", (int)ob->query("max_mana"));

        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);
     
        ob->add("int",2);

        write("[1;33m�����һ�����裬״̬��ʱ�ö��ˣ�\n[0;37m");

        message("vision", HIY + ob->name() + 
"������Щɶ���о��ü��ˣ�\n"+NOR,
                environment(ob), ob);
        ob->set("buchang",1);
 // ����        for(i=0;i<sizeof(inv);i++)
         for(i=(sizeof(inv)-1);i>=0;i--)
            {
             if(inv[i]->query("id")== "dabuwan")
              {
                destruct(inv[i]);
              }
            }

        return 1;
      }

}
