inherit NPC;
void create()
{
    set_name("ɳǧ��",({"sha qiandeng","sha"}));
        set("shen_type",-1);
    set("gender","����");
    set("age",56);
    set("str",26);
    set("title","�ɵ���ħ");
    set("per",34);
    set("combat_exp",50000);
    set("long","�������£��뵶��������ƹ�Ӱ��һ���ϻ꣡.\n");
    set_skill("parry",60);
    set_skill("dodge",50);
    set_skill("unarmed",60);
    set_skill("force",60);
    set_skill("throwing",100);
    setup();
add_money("silver",15);
carry_object(__DIR__"obj/feidao")->wield();
}
