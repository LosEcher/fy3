#include <ansi.h>
inherit NPC;
void create()
{
    set_name("����",({"dizi"}));
    set("gender","����");
    set("age",18+random(20));
    set("title",RED"��ڤɽׯ"NOR);
    set("combat_exp",10000+random(50000));
    set("kee",300);
    set("max_kee",300);
    set("force",300);
    set("max_force",300);
    set("force_factor",5);
    set("food",200);
    set("water",200);
    
    set("inquiry",([
    "��ڤɽׯ":"�����ڴ��ĵط������ˡ�\n",
    "������ħ��":"���������ϴ󷨣���ϧ�缸����ʧ����.\n",
    ]));
    
        set("shen_type",-1);
    set("chat_chance",3);
    set("chat_msg",({
    (:random_move:),
    }));
    
    set_skill("dodge",10+random(30));
    set_skill("parry",10+random(30));
    set_skill("unarmed",10+random(30));
    set_skill("force",10+random(30));
    set_skill("literate",20);
    set_skill("guiyingmizong",10+random(30));
    set_skill("jiuyou-xinfa",10+random(30));
    set_skill("youming-zhang",10+random(30));
    
    map_skill("dodge","guiyingmizong");
    map_skill("unarmed","youming-zhang");
    map_skill("parry","youming-zhang");
    map_skill("force","jiuyou-xinfa");
  
    setup();
    add_money("silver",1+random(5));
 }
