// music   yangzhou's ����

#include <ansi.h>

inherit NPC;

void create()
{
        set_name(HIW"������ʿ"NOR, ({ "yinjia weishi", "bing", "wei" }) );
        set("gender", "����" );
        set("age", 30);
        set("long",
                HIW"�����������ӣ��ǳ��صĽ�������������صİ�ȫ�Ͷ���ȫ�ǡ�\n"NOR);
        set("mingwang", 1);
        set("combat_exp", 180000);
        set_skill("blade",120);
        set_skill("parry",120);
        set_skill("unarmed",120);
        set_skill("dodge",120);
        set("max_kee",1000);
        set("kee",1000);
        set("str", 30);
        set("cor", 25);
        set("con", 20);
        set("int", 20);
        set("attitude", "peaceful");
        setup();
        carry_object("/obj/armor/yinjia")->wear();
        carry_object("obj/weapon/changdao")->wield();
        add_money("silver",50);
}
