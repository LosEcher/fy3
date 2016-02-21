#include <ansi.h>

inherit NPC;

string *first_name = ({ "��","Ǯ","��","��","��","��","֣","��","��","��",
        "��","��" });
string *name_words = ({ "˳","��","��","��","��","��","��","��","־","��",

"Т","��","��","��","��","��","��","ʢ","ʤ","��","��","��","ͬ","��",
        "��","��","��","¡","��","��","��","��","��" });

varargs void drool(string msg, string who);

void create()
{
        string name, id;

        name = first_name[random(sizeof(first_name))];
        name += name_words[random(sizeof(name_words))];
        name += name_words[random(sizeof(name_words))];

        set_name(name, ({"yayi"}));
	set("title", "����");
        set("gender", "����");
	set("str", 25);
        set("age", 20+random(10));
        set("attitude", "peaceful");
        set("combat_exp", 40000);
        set_skill("unarmed", 40);
        set_skill("dodge", 50);
        set_skill("parry", 40);
	set("max_kee", 500);
	set("max_sen", 400);
	set("max_force", 200);
	set("force", 200);
	set("force_factor", 10);
	set("mana_facotr", 5);
	set("max_mana", 30);
	set("mana", 30);
        setup();
        carry_object("/d/quanzhou/obj/yayifu")->wear();
        carry_object("/d/quanzhou/obj/blade")->wield();
}
void init()
{
	object ob;
        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("meeting");
                call_out("meeting", 1, ob);
        }
}

void meeting(object ob)
{
   message_vision("$N�ְ��ֵ�,��������:-----��-----��----  -----!\n",this_object());
}


