//zhongzhou fuwu.c

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short","�������Ĵ���");
        set("long", @LONG
������һ������С���ᣬ�����������λС����Խ����ǽ���Ϊ���ر����
��Ȼ��Ҫ�����൱�Ĵ���.
LONG
        );

        set("exits", ([
                 "east" : __DIR__"xiuxian",
                
]));

        setup();
}




void init()
{
        object ob;

        if( interactive(ob = this_player()))
        {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
	if( !ob || environment(ob) !=this_object()) return;
	if(ob->query("gender")=="Ů��")
	{
	tell_object(ob,"�����Ļ�û�д˷�����Ŀ��\n");
	return;
	}
	if(ob->query_temp("to_girls")==1)
	{
                        write(HIY
"����һλС�����˵��" + RANK_D->query_respect(ob)+ "��������������\n"NOR);
		ob->set_temp("to_girls",0);
        ob->set("kee",(int)ob->query("max_kee")*3/2);
        ob->set("gin",(int)ob->query("max_gin")/2);
        ob->set("sen",(int)ob->query("max_sen")/2);
 
		return;
       
	}
                else
	 {
	write(HIM
"ֻ�������������δ󺺶����µ���"+ob->query("name")+"��ûǮҲ���������ӣ�˵�ռ����˶���һ��ȭ����ߡ�����Լ���������µ����´��ٸ����ͽ����Ⱳ��������·���ͻ��ȥ��ʲô����֪���ˣ���\n"NOR);
		ob->move(__DIR__"hutong");
        ob->set("kee",(int)ob->query("max_kee")/5);
        ob->set("gin",(int)ob->query("max_gin")/5);
        ob->set("sen",(int)ob->query("max_sen")/5);
	}
}
