// zombie.c

#include <ansi.h>

inherit NPC;

void do_bite();

void create()
{
        set_name("��ʬ", ({ "jiang shi","zombie" }) );
        set("long",
                
"����һ�߱����÷�����ƵĽ�ʬ�������԰׵����Ͽ������κ�ϲŭ���֡�\n");
        set("max_gin", 400);
        set("max_kee", 400);
        set("max_sen", 60);
        set("max_atman", 100);
        set("atman", 100);
        set("max_mana", 100);
        set("mana", 100);
        set("str", 60);
        set("cor", 40);
        set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
                "��ʬ���з����ɺɵĽ�����\n",
                "��ʬ�����Ͽ�ʼ���Σ�һ��鴤�������Ƶش�С�\n",
                "��ʬ��ָ���ţ�ҧ���гݣ�¶��������Ц�ݡ�\n",
                (: do_bite :),
        }) );

        set_temp("apply/damage", 15);

        setup();
}

int is_zombie() { return 1; }

void animate(object me,object who, int lv)
{
        set("master", me);
	set("target",who);
        set_leader(who);
	set("combat_exp",(int)me->query("combat_exp")*2);
	set_skill("unarmed",lv);
	set_skill("parry",lv);
	set_skill("dodge",lv);
}

void die()
{
        object master;

	master=query("master");

        if( environment() ) {
                say( name() + "�����ص�����������Ϊһ̲Ѫˮ��\n");
        }
	if(objectp(master))
		tell_object(master,HIR"����Ƶ�"+name()+"��ʧ�ˣ�\n"NOR);
        destruct(this_object());
}

int heal_up()
{
	object master;
	object target;

	master=query("master");
	target=query("target");

        if( objectp(master) && master->query("gin")>30 && objectp(target)
	&& master->query("eff_gin")>10
	&& living(target) && target->query("kee")>60)
	{
		message_vision(HIR"$N˻������"+target->query("name")+"��������������"+
		target->query("name")+"������������������\n"NOR,this_object());
		tell_object(target,HIR"��ֻ�����ؿ�һ���ʹ���ò����ܣ�\n"NOR);
                target->receive_damage("kee", 50);
		   target->receive_wound("kee",10);
		add("max_kee",10);add("eff_kee",10);add("kee",10);
		tell_object(master,HIR"���ڿ��ƽ�ʬ������þ�������ʧ��\n"NOR);
		master->receive_damage("gin",20);
		master->receive_wound("gin",5);
                ::heal_up();
                return 1;               // Always acquire power from master.
        } else {
                call_out("die", 1);
                return ::heal_up();
        } 
}

void do_bite()
{
        object *enemy;

        say( name() + "�������һ��������Ż�ĳ�����ʹ�����ͷ�����͡�\n" );
        enemy = query_enemy();
        for(int i=0; i<sizeof(enemy); i++) {
                if( !enemy[i] ) continue;
                enemy[i]->receive_damage("gin", 20);
                COMBAT_D->report_status(enemy[i], "gin");
        }
}
 
