inherit NPC;
void create()
{
    set_name("����",({"zuo changsheng","shenmo","zuo"}));
        set("shen_type",-1);
    set("gender","����");
    set("age",57);
    set("str",23);
    set("title","һ����ħ");
    set("per",21);
    set("combat_exp",120000);
    set("long","����ʮ��,ʮ����ħ֮һ.û��֪��Ϊ�γ���Ϊһ��
��ħ,֪�����˶�����,������������.\n");
    set_skill("parry",60);
    set_skill("dodge",50);
    set_skill("unarmed",100);
    set_skill("force",60);
    setup();
add_money("silver",15);
}
