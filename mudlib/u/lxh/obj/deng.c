//sd-card.c ʥ���� by lxh 13:56 98-12-26

#include <ansi.h>

inherit ITEM;

string *names = ({
  "������",
  "Ԫ����",
  "�ۻ���",
  "������",
  "����",
  "�����",
  "����",
  "���õ�",
  "������",
  "������",
  "�����",
  "�λõ�",
  "�����",
});

void create()
{
  seteuid(getuid());
        set_name(names[random(sizeof(names))], ({ "deng long", "deng", "long"})); 
        set("long",HIR"����Ѫ������"NOR"�����͸����"+query("name")+"��\n
������ã�na�������Ĵ�����\n");
        set("unit", "��");
        set("value", 0);
        set("no_give",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_beg",1);
        set("no_get_from",1);
        set("weight", 50);
        set("no_sell",1);           
}


void init()
{
    add_action("do_na","na");
}

int do_na(string arg)
{
        object ob;
        mapping skl;
        string *sname,str;
        int i,add_exp,add_money;
        

        if( !id(arg) ) return notify_fail("��Ҫ����ʲ�᣿\n");

        seteuid(getuid());
        ob=this_player();
        add_money=ob->query("mud_age");
        add_exp=ob->query("mud_age")/100;
        if( !id(arg) ) return 0 ;
        if( living(this_player()) ==0 ) return 0;
        skl = ob->query_skills();
        
write("�����������С�ĵĵ�����\n\n
ף�����㡫���졫���֡���\n\n
��ϲ����"HIR"����Ѫ������"NOR"�ȹ�ǧ��Ԫ����\n\n
������������������������������\n\n
���Ȼ������һ�����ص�����ӿ���㡫������\n\n");
    if(!ob->query("lxh-15")) 
  	{
    
  
//��Ҫ���ǵ���Ϸ�ָ�����1.31�ı��ݣ����ԼӵıȽ϶� by lxh 0-2-19 13:23
        if(ob->query("age")>15) {
        	
            	ob->add("combat_exp",add_exp);
   	 	 write("���ʵս����������"HIR"+"+chinese_number(add_exp)+"+"NOR"�㣡��\n");
   	 	         ob->set("lxh-15",1);

        ob->set("kee",(int)ob->query("eff_kee"));
        ob->set("jin",(int)ob->query("eff_jin"));
        ob->set("sen",(int)ob->query("eff_sen"));

        ob->set("force", (int)ob->query("max_force")*2);
        ob->set("mana", (int)ob->query("max_mana")*2);
        ob->set("atman", (int)ob->query("max_atman")*2);  
      

        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);
        ob->add("con",1);
        ob->add("str",1);
        ob->add("int",1);
        write(HIC"�������ȫ��������!\n"NOR);
        
        
        if(!sizeof(skl)) return 1;

  	      sname = sort_array( keys(skl), (: strcmp :) );

        for(i=0; i<sizeof(skl); i++) 
        {
                ob->set_skill( sname[i] , skl[sname[i]]+2 );
                write(HIW"��ļ���ȫ�������ˡ�\n"NOR);
        }
        
        ob->add("balance",add_money);
           	write(HIY"������д�������ˣ���\n"NOR);
           	 destruct(this_object());
   	 	 return 1;
   	 	} else 
   	 	
   	 		ob->add("combat_exp",10000);
   	 		write("���ʵս����������"HIR"+"+chinese_number(10000)+"+"NOR"�㣡��\n");   	 	
                        
    
        ob->set("lxh-15",1);

        ob->set("kee",(int)ob->query("eff_kee"));
        ob->set("jin",(int)ob->query("eff_jin"));
        ob->set("sen",(int)ob->query("eff_sen"));

        ob->set("force", (int)ob->query("max_force")*2);
        ob->set("mana", (int)ob->query("max_mana")*2);
        ob->set("atman", (int)ob->query("max_atman")*2);  
      

        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);
        ob->add("con",1);
        ob->add("str",1);
        ob->add("int",1);
        write(HIW"�������ȫ��������!\n"NOR);
        
        
        if(!sizeof(skl)) return 1;

  	      sname = sort_array( keys(skl), (: strcmp :) );

        for(i=0; i<sizeof(skl); i++) 
        {
                ob->set_skill( sname[i] , skl[sname[i]]+5 );
                write(HIW"��ļ���ȫ�������ˡ�\n"NOR);
        }
        
        ob->add("balance",add_money*2);
           	write(HIY"������д�������ˣ���\n"NOR);
           	
       destruct(this_object());
       return 1;    
        
        }
       destruct(this_object());
       return 1;    
}
