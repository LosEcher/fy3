inherit NPC;
inherit F_VENDOR;
void create()
{
        set_name("������",({"chen laoqu","chen","laoqu"}));
        set("nickname","�Ⱦ�����");
        set("gender","����");
        set("long","���ϰ������ھ�,�����ⷴ������ô����.����
���ڳ��˵ľ���Ǻ�һ�����������ӵľ���,
���ѿ�����ƽ��Ϊ��!\n");
        set("age",56);
        set("str",20);
        set("combat_exp",200000);
        set_skill("unarmed",40);
        set_skill("parry",40);
        set_skill("literate",40);
        set_skill("force",40);
        set("vendor_goods",([
                  "jiutan":__DIR__"obj/jiutan",
       ]));
     setup();
     carry_object("/obj/cloth")->wear();
     add_money("silver",30);
}
void init()
{   ::init();
       add_action("do_vendor_list","list");
}
 