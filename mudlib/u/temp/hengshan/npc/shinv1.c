//make by temp

//shinv.c

inherit NPC;
string ask_me();
void create()
{
set_name("����",({"a jie","jie"}) );
set("title","��ɽ���׼ҵ���");
set("gender", "Ů��");
set("age", 15);
set("shen_type",1);
set("attitude", "peaceful");
set("str", 25);
set("int", 25);
set("con", 30);
set("dex", 30);
set("qi", 800);
set("max_qi", 800);
set("jing", 500);
set("max_jing", 500);
set("neili", 1000);
set("max_neili", 1000);
set("jiali", 20);
set("combat_exp", 100000);
set("score", 10000);
set_skill("force", 100);
set_skill("unarmed", 100);
set_skill("dodge", 100);
set_skill("parry", 100);
set_skill("hand",100);
set_skill("strike", 100);
create_family("��ɽ��", 15, "����");
set("chat_chance", 10);
set("chat_msg", ({
"����̾�˿���˵������ �Һ���ȥ�����ҵĸ���ѽ��\n",
"����˵������ɽ�����ѽ���Һ�ϲ����ѽ��\n",
        }));
set("inquiry",([
            "����" : (: ask_me :),
            "����" : (: ask_me :),
]));
setup();
}
string ask_me()
{
   object ob;
    ob = this_player();
   tell_object(ob,"tempp is "+(query("find_count"))+"\n");
   if (query("find_count")<1) set("find_count",1);
   if (query("find_count") >  1)
                return "���Ѿ����ѱ���ȥ���ˣ�лл��ĺ���ѽ��";
   tell_object(ob,"tempp is "+(query("find_count"))+"\n");

    if (ob->query_int()>=30)
    {
        ob->set_temp("find/����",1);
        set("find_count", 2);
        return "���лл���ˣ�����һ��Ҫ�����ҵ��ҵĸ���ѽ��\n" ;

    }
    else
    
        return "������ҵĵ���\n";
    
    
}
