#include <ansi.h>
inherit NPC;

void create()
{
        set_name("�徻����", ({ "shanren"}));
        set("nickname",HIC"���岻��"NOR);
        set("gender", "����");
        set("age", 70);
        set("long", "һ������������ϵ�ʿ������������ﲻ֪���Щ
ʲô\n");
     
        set("inquiry", ([
            
            "����" : "�����Ŀ���ȫ���ڻ�Ե������....\n",
      ]));

     set("chat_msg", ({
            "�ϵ�ʿ˵�����ĳ����飬�����飬������....\n",
         }) );

 
       set("combat_exp", 500000);
        set("shen_type", 5);
        set_skill("unarmed", 80);
        set_skill("sword", 80);
        set_skill("parry", 80);
        set_skill("dodge", 80);
       set_skill("force", 80);


        setup();
        carry_object("obj/weapon/sword")->wield();
        carry_object("/obj/cloth")->wear();
}

