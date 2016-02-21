// XieXun.c
// pal 1997.05.09

#include "ansi.h"

inherit NPC;
inherit F_MASTER;

void create()
{
    set_name("лѷ", ({"xie xun", "xie", "xun", }));
	set("long",
        "����һλ��Ŀ�ΰ�쳣�ĵ����ߣ���һ���ײ����ۡ�\n"
        "����ͷ�Ʒ����������ݣ���������һ�㣬ֻ����ֻ�۾�����������\n"
	);

	set("title",HIG "����" HIY "��ëʨ��" NOR);
	set("level",9);
	set("gender", "����");
	set("attitude", "peaceful");

	set("age", 63);
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 30);
	set("dex", 30);

	set("max_qi", 3500);
	set("max_jing", 1500);
	set("neili", 3000);
	set("max_neili", 3000);
        set("jiali",80);

        set("combat_exp",400000);
      set("score",15000);

       set_skill("force",150);
	set_skill("dodge", 140);
        set_skill("parry",150);
       set_skill("cuff",150);
      set_skill("jiuyang-shengong",150);
       set_skill("qishang-quan",150);
    	set_skill("literate", 100);

       map_skill("force","jiuyang-shengong");
	map_skill("cuff", "qishang-quan");
        map_skill("parry", "qishang-quan");


	set("chat_chance_combat", 200);
	set("chat_msg_combat", ({
		(: command("perform hunpofeiyang") :),
	}) );

create_family("����",2, "����");

	setup();

    	carry_object("/d/mingjiao/obj/baipao")->wear();
}

void init()
{
	object me,ob;
	me = this_object () ;
	ob = this_player () ;

	::init();

	if( interactive(ob) && !is_fighting() )
	{
		remove_call_out("greeting");
		call_out("greeting", 1, me, ob);
	}
}
void attempt_apprentice(object ob)
{
object me;
        mapping ob_fam, my_fam;
        string name, new_name;

        me = this_object();
        my_fam  = me->query("family");

        name = ob->query("name");

        if (!(ob_fam = ob->query("family")) || ob_fam["family_name"] != "����")

        {
                command("say " + RANK_D->query_respect(ob) + "�뱾��������������
֪�˻��Ӻ�̸��");
                return;
        }
    
if(ob->query("score")<300)
        {
                command("say �����ʶԱ��̾�������?");
                return 0;
        }
        command("say �ã��Ҿ�������.");
        command("recruit " + ob->query("id"));
}

