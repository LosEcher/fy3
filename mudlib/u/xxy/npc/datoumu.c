#include <ansi.h>
inherit NPC;
inherit F_BH;
int do_ask();
void create()
{
	set_name("��ͷĿ",({"da toumu","da","toumu"}));
	set("nickname","�����Ѫ");
	set("age",35);
	set_skill("dodge",100);
	set_skill("unarmed",100);
	set_skill("parry",100);
       set("inquiry",([
            "renwu":(:do_ask:),
           ]));
	set_skill("blade",100);
	set("max_force",900);set("force",900);
	set("combat_exp",300000);
        setup();
}
int do_ask()
{
    string str,str1,name1,name2;
    int i,j;
    mapping data=([]);
    i=1;
    while (str=read_file("/data/other/dipan",i,1))
        {
            if (sscanf(str,"%s string %s\n",name1,name2)==2)
              data[i]=name1;
            i++;
        }
      j=random(i-1);
      if (j<=0) j=1;
      str1=data[j];
     command("say ��"+str1+"��������!\n");
     return 1;
}