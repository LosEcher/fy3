inherit NPC;
void create()
{
    set_name("�Ҷ�",({"jia ding"}));
    set("gender","����");
    set("combat_exp",1000);
    set("attitude","friendly");
    set("age",37);
    set("long","һ����ñֱ��ļ���.\n");
    set_skill("unarmed",10);
    setup();
add_money("coin",30);
carry_object("/obj/cloth")->wear();
}
