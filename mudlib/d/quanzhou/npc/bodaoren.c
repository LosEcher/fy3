#include <ansi.h>
inherit NPC;

void create()
{
	int skill;

	set_name("�������", ({ "daoren", "daoshi"}) );
	set("gender", "����" );
	set("age", 40+random(40));
	set("long", "������ͷ,������һ�����ˡ�\n");

	set("combat_exp",100000+random(200000));
       set_skill("parry",90);
       set_skill("literate",120);
	set_skill("dodge", 90);
	set_skill("unarmed", 90);
        set("chat_chance", 12);
        set("chat_msg", ({
                HIC+"���˶������ɺ�,Ω�й���������!
  �Ž����ںη�?��ڣһ�Ѳ�û��.\n"+NOR,
                HIC+"���˶������ɺ�,ֻ�н���������!
  �ճ�ֻ�޾��޶�,������ʱ�۱���.\n"+NOR,
                HIC+"���˶������ɺ�,ֻ�����������!
  ��������˵����,����������ȥ��.\n"+NOR,
                HIC+"���˶������ɺ�,ֻ�ж���������!
  ���ĸ�ĸ������,Т˳����˭����?\n"+NOR,
        }) );

	setup();
	carry_object("/d/quanzhou/obj/podaopao")->wear();
            add_money("gold",3);
}