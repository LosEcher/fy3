// seng.c
inherit NPC;
inherit F_VENDOR;
void create()
{
set_name("���˺���",({"man"}));
set("long","��ɫ��ڵ����˺�,���Ų˿���.\n");
	set("gender", "����");

set("age",32);
set("shen_type",1);
set("str",19);
set("int", 20);
set("con", 20);
set("max_kee",350);
set("combat_exp",2000);

set_skill("unarmed",5);
set_skill("dodge",5);
set_skill("parry",5);
set_skill("literate",5);
set("vendor_goods", ([
                     "���":     __DIR__"obj/qingcai",
                     "�ײ�":     __DIR__"obj/baicai",
 
	]) );
set("chat_chance",8);
set("chat_msg",({
	"��ײ�,С���,������---\n",
	"��ײ�,С���,ֻ��һ���˰�,Ҫ��Ͽ�!\n",
   }));
setup();
carry_object("/obj/cloth")->wear();
add_money("coin",20);
carry_object(__DIR__"obj/caikuang")->wear();
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
 }
