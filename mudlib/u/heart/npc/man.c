#include <ansi.h>
inherit NPC;
void create()
{
        set_name("��ʿ", ({ "man","man"}));
        set("gender", "����");
        set("age", 40);
        set("long", "һ������������������ʿ������ȥ���Ǳ�����˪���Ͻ�����\n");

        set("str" ,40);
        set("combat_exp", 3000);
        set("mingwang",1);
        set("attitude", "peaceful");
        

        set("chat_chance", 10);
        set("chat_msg", ({
        HIR"��ʿ��üһ�˵�����������еľ���һ�����֡�\n"NOR,
        HIY"��ʿ������̾������ν���ڽ��������ɼ�����\n"NOR,
        HIG"��ʿ������������ն�һ�ж�Ҫ�Լ�����С�� \n"NOR,
        }));
        set_skill("literate" ,30);
        set_skill("parry" ,20);
        set_skill("unarmed", 20);
        set_skill("dodge", 30);
        set_temp("apply/attack", 15);
        set_temp("apply/defense",30);
        setup();
        carry_object("/obj/cloth")->wear();
        carry_object(__DIR__"obj/zi")->wield();
        add_money("silver",20); 
}

