// ��ͯ: /u/caac/npc/shutong.c  Writen by caac.98.6
#include <ansi.h>

inherit NPC;
inherit F_VENDOR; 

int ask_me(object me);

void create()
{
        set_name("��ͯ",({ "shu tong","boy" }) );
        set("nickname","�������");
         set("title","���ǵ�С��ͯ");
         set("gender", "����" );
        set("age", 14);
        set("long",

"���ǽ��ǵ�С��ͯ���Ǹ�ϲ������ĺ��ӣ����������鱾�ﲻ������\n");
        set("combat_exp", 500);
        set("attitude", "friendly");
        set("vendor_goods", ([
                "�β�": "/u/caac/obj/tea",
                "����": "/obj/example/dumpling",
                "����": "/obj/example/chicken_leg",
                
        ]) );  
        set("inquiry", ([
            "����"     : (: ask_me :)
                        ]));
        setup();
}

int ask_me(object me)
{
 object form;
 
 form = new("/d/school/obj/wizbook2");
 me = this_player();
 
 message_vision("�Ȿ��Ҳ���$N���ã���ȥ�����ɣ�\n",me);
 form->move(me);
 return 1;
}

