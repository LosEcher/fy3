// music   yangzhou's ��С��

inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/��������"; }

void create()
{
#include <kzznpc.h>
        set("long",
        "��ص����κ��У�������ᵫ�ѱ����糾��\n");
        set("attitude","hero");
        set_temp("apply/defense",30);
        set_temp("apply/attack",40);
	setup();
	carry_object(__DIR__"obj/qingbusengyi")->wear();
	carry_object(__DIR__"obj/jiedao")->wield();
	add_money("silver",10);
}
int accept_fight(object me)
{
	command("haha");
	command("say �˷�����ԭ����Ҫ����ԭ����һ�ϸ��¡�\n");
return 1;
}
