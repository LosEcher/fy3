#include <ansi.h>
inherit NPC;
void create()
{
	set_name(YEL"˾���"NOR,({"zhifu","daren","yudeshui"}));
        set("title",YEL+"Ȫ��֪��"+NOR);
	set("gender", "����" );
	set("age",40);
        set("shen_type",-1);
        set("combat_exp",50000);
	set("long",
	"��λ���˱�ı��첻��,�ѹ�Ǯ�Ƶ������С�\n"
	);
        
        set_skill("unarmed",60);
        set_skill("parry",60);
        set_skill("dodge",60);
	set("attitude","friendly");

        set("inquiry",([
         "luyin":"Ҫ������̨��,����,��������һ��.\n",
         "·��":"Ҫ������̨��,����,��������һ��.\n",
       ]));
	setup();
	carry_object("/d/quanzhou/obj/guanfu")->wear();
}
void init()
{
 add_action("do_say","say");
}
int accept_object(object who,object item)
{	
	if(item->query("money_id") &&
	item->value()>=500)
	{
       who->set_temp("money_gived",1);
	 command("hehe");
       command("say ����?(say hainan),̨��?(say taiwan)\n");
		return 1;
	}
    else
	command("say �󵨵���,����ϷŪ���١�\n");
	return 0;
}
int do_say(string str)
{
  object obj;
if (!living(this_player())||environment(this_player())!=environment())
     return 0;
if (!this_player()->query_temp("money_gived")) return 0;
obj=present("luyin",this_object());
if (!obj) 
   obj=new("/d/quanzhou/obj/luyin.c");
   obj->move(this_object());
switch(str)   {
   case "hainan":
        {
         obj->set("long","һ�ŵ���ɫ��ֽ��,��������ɰ
д��"+HIR+"����"+NOR+"����,�½ǻ�����Ȫ��֪���Ĵ�ӡ.\n");
         obj->set("where","hainan");
         command("give luyin to "+this_player()->query("id"));
         this_player()->delete_temp("money_gived");
         return 1;
        }
   case "taiwan":
       {  
       obj->set("long","һ�ŵ���ɫ��ֽ��,��������ɰ
д��"+HIR+"̨��"+NOR+"����,�½ǻ�����Ȫ��֪���Ĵ�ӡ.\n");
         obj->set("where","taiwan");
         command("give luyin to "+this_player()->query("id"));
        this_player()->delete_temp("money_gived");
         return 1;
       }
    }
return 0;
}