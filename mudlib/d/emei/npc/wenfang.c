// wenfang.c �ķ�Сʦ̫

inherit NPC;
inherit F_MASTER;
inherit F_VENDOR;
void create()
{
        set_name("�ķ�Сʦ̫", ({ "wenfang","wenfang xiaoshitai","xiaoshitai"}));
        set("long",
                "���Ƕ����ɵĵ�������ӡ�\n");
        set("gender", "Ů��");
        set("age", 15);
        set("attitude", "peaceful");
        set("class", "bonze");
        set("mingwang", 100);

        set("str", 20);
        set("int", 20);
        set("con", 22);
        set("per", 30);

        set("max_kee", 150);
        set("max_gin", 100);
        set("force", 150);
        set("max_force", 150);

        set("combat_exp", 2000);
        set("score", 1000);

        set_skill("force", 30);
        set_skill("dodge", 20);
        set_skill("unarmed", 20);
        set_skill("parry", 20);
        set_temp("apply/attack", 15);
        set_temp("apply/defense", 15);
        set_temp("apply/damage", 5);
         
        set("chat_chance",5);
        set("chat_msg",({
        "�ķ�������ü,�Ӳ�����ȡ��һ�̲�������,���ͷ.\n",
        "�ķ������:�г��к�,�������.\n",
        "���ŵ�һ�ɲ�����ķ����ϴ���.\n",
        }));
        set("vendor_goods",([
        "���˷���":"/d/emei/obj/bocai-fentiao.c",
        "��������":"/d/emei/obj/liuli-qiezi.c",
        "��������":"/d/emei/obj/mala-doufu.c",
        "ɺ���ײ�":"/d/emei/obj/shanhu-baicai.c",
        "��ˮ��«":"/d/emei/obj/qingshui-hulu.c",
        ]));
        create_family("������", 5, "����");

        setup();
        carry_object("/obj/weapon/sword")->wield();
        carry_object("/obj/armor/ni-cloth.c")->wear();
        carry_object("/obj/armor/ni-xie")->wear();
}
void init()
{
  object ob;
  ::init();
  if (interactive(ob=this_player())&&!is_fighting()) {
  	remove_call_out("greeting");
  	call_out("greeting",1,ob);
    }
    add_action("do_vendor_list","list");
}
void greeting(object ob)
{
   command("say �ǲ������������Ĳ�ѽ,��Ǯ��������.\n");
   return;
}