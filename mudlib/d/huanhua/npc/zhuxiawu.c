inherit NPC;
void create()
{
    set_name("������",({"zhu xiawu","zhu"}));
        set("shen_type",1);
    set("gender","����");
    set("age",43);
    set("str",30);
    set("title","��������������");
    set("per",26);
    set("combat_exp",120000);
    set("long","һ������,�ǳ�ͥ���Ź��ϵĵ�һ����������.\n");
    set_skill("parry",100);
    set_skill("dodge",100);
    set_skill("unarmed",100);
    set_skill("force",60);
    setup();
add_money("silver",15);
}
