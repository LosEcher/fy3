inherit NPC;
void create()
{
    set_name("�Ʒ�",({"tang fang","girl"}));
        set("shen_type",-1);
    set("gender","Ů��");
    set("combat_exp",20000);
    set("attitude","friendly");
    set("age",16);
    set("long","�������������ܵĵ���,���ڰ׷�������,
���ٰ���й���µ��ᷢ,�٬����Ӱ,����������������һ��.\n");
    set_skill("unarmed",30);
    set_skill("parry",40);
       set_skill("dodge",100);
       set_skill("throwing",100);
       set_skill("force",50);
       set_skill("literate",100);
    setup();
add_money("silver",3);
carry_object(__DIR__"obj/feidao")->wear();
}
