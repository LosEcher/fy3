#include <ansi.h>
#define QUEST_SHA "/u/ljty/quest/questsong"
inherit NPC;
inherit F_MASTER;

int time_period(int timep, object me);

void create()
{
        set_name("��վ��Ա",({"guanyuan"}));
        set("long",
                "����һ��æµ����վ��Ա��\n"
        );

        set("gender", "����");
        set("attitude", "friendly");
        set("class", "bonze");
        set("age", 30);
        set("shen_type", 0);
        set("str", 20);
        set("int", 20);
        set("con", 20);
        set("dex", 20);
        set("max_qi", 450);
        set("max_jing", 300);
        set("neili", 500);
        set("max_neili", 500);
        set("jiali", 50);
        set("combat_exp", 10000);
        set("score", 100);
        set("env/wimpy", 100);
        set("inquiry", ([
                "����": "��������°�, �һ����ô���! \n",
        ]) );

        set_skill("force", 70);
        set_skill("dodge", 70);
        set_skill("parry", 70);
        setup();
        carry_object("/d/shaolin/obj/hui-cloth")->wear();
}

void init()
{
        add_action("give_quest", "quest");
}


int give_quest()
{
        mapping quest ;
        object me,letter;
        int j, combatexp, timep, factor, num;

        me = this_player();
        combatexp = (int)(me->query("combat_exp"));

if(combatexp > 200000)
        {
                message_vision("��Ա��$N˵�����������ָ����ˣ�����С�����Ͳ������ˡ�\n",me);
                return 0;
        }
 
// Let's see if this player still carries an un-expired task
        if(quest == me->query("quest"))
        {
                if( ((int)me->query("task_time")) >  time() )
                        return 0;
        }
                if (((int)time() - (int)me->query("last_task_time")) < 480)
                 {
                   message_vision("��վ��Ա��$N˵������û��ʲô��Ҫ��ɣ��Ȼ������ɡ�\n",me);

                   return 0;
                 }
                else
                {
                   message_vision("��վ��Ա��$N˵�������������л�����ɡ�\n",me);
                }

        quest = QUEST_SHA->query_quest();
        timep = random(100) + 300;
        time_period(timep, me);

        tell_object(me, "���Ÿ���" + quest["quest"] + "���Ҿ͸���һЩ�ô���\n" NOR);
        message_vision("$N����$nһ���š�\n",this_object(),me);
        letter = new("/u/ljty/obj/letter");
        letter->move(me);
        quest["quest_type"] = "���Ÿ�";
        quest["exp_bonus"] = random(50) + 100;
        quest["pot_bonus"] = random(20) + 30;
        quest["score"] = 0;

        me->set("quest", quest);
        me->set("task_time", (int)time() + timep);
        me->set("quest_factor", factor);
        me->set("last_task_time", time());
        return 1;
}

int time_period(int timep, object me)
{
        int t, d, h, m, s;
        string time;
        t = timep;
        s = t % 60;             t /= 60;
        m = t % 60;             t /= 60;
        h = t % 24;             t /= 24;
        d = t;

        if(d)
                time = chinese_number(d) + "��";
        else
                time = "";

        if(h)
                time += chinese_number(h) + "Сʱ";
        if(m)
                time += chinese_number(m) + "��";
        time += chinese_number(s) + "��";

        tell_object(me, HIW "��վ��Ա˵����\n��" + time + "��");

                return 1;
}
