inherit NPC;
void create()
{
    set_name("�㲮",({"guang bo"}));
    set("gender","����");
    set("combat_exp",8000);
    set("attitude","friendly");
    set("title","�ư�");
    set("age",65);
    set("long","ʮ�־н�������������������ʮ�ָߣ���Ȼ�������Ѻ�
���ִֽţ��������ƣ��������������ɣ���ޡ�.\n");
    set_skill("unarmed",30);
    set("inquiry",([
           "��������":"�����Ҷ�ʮ��ǰ������,����Ҷ�����!\n",
           "������":"����,�Ҿ���������,�����,��ҽ��ҹ㲮!\n",
        ]));
    setup();
add_money("silver",1);
carry_object("/obj/cloth")->wear();
carry_object(__DIR__"obj/saozhou")->wield();
}
int accept_fight(object me)
{
     object ob;
   command("say ��,�ܾ�ûɱ����,�������Ҳ��!\n");
   set("combat_exp",200000);
   set_skill("sword",120);
   set_skill("dodge",100);
   set_skill("parry",70);
   set_skill("force",70);
   set_skill("unarmed",70);
   ob=present("sword",this_object());
    if (!ob)
        ob=new(__DIR__"obj/gusong-jian")->move(this_object());
   command("unwield saozhou");
   command("wield sword");
   return 1;
}
     