// animal: yetu.cҰ�� by ksusan 8/03/97 8:30

#include <ansi.h>
inherit NPC;

void create()
{
		set_name("Ұ��", ({ "yetu", "tu" }) );
        set("race", "Ұ��");
        set("age", 2);
        set("long", "һֻ�ʷʵĻ�ɫҰ�ã��㿪ʼ����ˮ�ˡ�����\n");
        set("attitude", "peaceful");

		set("no_corpse",1);
		set("mingwang",0);
        set("str", 26);
        set("cor", 30);

        set("limbs", ({ "ͷ��", "����", "ǰ��","����" "β��" }) );
        set("verbs", ({ "bite","claw" }) );

        set("combat_exp", 500);

        set_temp("apply/attack", 10);
        set_temp("apply/damage", 4);
        set_temp("apply/armor", 1);

        setup();

}
void init()
{
        object ob;
        ::init();
        if (interactive(ob = this_player()) &&
                random(ob->query_kar() + ob->query_per()) < 30) {
						write("Ұ�ÿ������˹�������������˶��䣡\n");
//                        remove_call_out("kill_ob");
//                        call_out("kill_ob", 1, ob); 
        }
}

void die()
{
        object ob;
        ob = new(__DIR__"obj/turou");
	message_vision("Ұ�õ��ڵ��ϣ���������˼������ˣ�\n",this_object());
        ob->move(environment(this_object()));
        destruct(this_object());
}

