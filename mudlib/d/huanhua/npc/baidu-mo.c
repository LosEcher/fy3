inherit NPC;
void create()
{
    set_name("���·�",({"hua guwen","hua"}));
        set("shen_type",-1);
    set("gender","����");
    set("age",19);
    set("str",27);
    set("title","�ٶ���ħ");
    set("per",23);
    set("combat_exp",60000);
    set("long","ȫ��Ұ�,��·����̬��ͦ����Ӳ���䶾�罩ʬ����.\n");
    set_skill("parry",60);
    set_skill("dodge",50);
    set_skill("unarmed",100);
    set_skill("force",60);
    set_skill("sword",60);
    setup();
add_money("silver",15);
}
