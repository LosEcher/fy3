#include <ansi.h>
inherit F_VENDOR;
inherit NPC;
void create()
{
  set_name("ɽ��Ӣ��",({"shantian yingshu","shantian","yingshu"}));
   set("gender","����");
   set("age",47);
   set("title","�񻧳�Ұ����");
   set("combat_exp",20000);
   set_skill("unarmed",10);
   set_skill("dodge",10);
   set_skill("force",10);
   set_skill("parry",10);
   set_skill("literate",10);
   
   
  set("vendor_goods",([
    "force_book":__DIR__"obj/force_book.c",
    "blade_book":__DIR__"obj/blade_book.c",
    "sword_book":__DIR__"obj/sword_book.c",
    "dodge_book":__DIR__"obj/dodge_book.c",
    "unarmed_book":__DIR__"obj/unarmed_book.c",
]));
   
   
   setup();
   add_money("silver",30);
       carry_object("/obj/cloth")->wear();
}
void init()
{
  ::init();
  add_action("do_vendor_list","list");
}
