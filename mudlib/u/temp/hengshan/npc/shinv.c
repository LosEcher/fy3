//make by temp

//shinv.c

inherit NPC;
string ask_me();
void create()
{
set_name("����",({"a lan","lan"}) );
set("title","��ɽ���׼ҵ���");
set("gender", "Ů��");
set("age", 15);
set("shen_type",1);
set("attitude", "peaceful");
set("str", 25);
set("int", 25);
set("con", 30);
set("dex", 30);
set("qi", 800);
set("max_qi", 800);
set("jing", 500);
set("max_jing", 500);
set("neili", 1000);
set("max_neili", 1000);
set("jiali", 20);
set("combat_exp", 100000);
set("score", 10000);
set_skill("force", 100);
set_skill("unarmed", 100);
set_skill("dodge", 100);
set_skill("parry", 100);
set_skill("hand",100);
set_skill("strike", 100);
create_family("��ɽ��", 15, "����");
set("inquiry",([
            "����" : (: ask_me :),
            "ʳ��" : (: ask_me :),
            "�Է�" : (: ask_me :),
]) );
setup();
}
string ask_me()
{
 say("����˵����ʳ���ڳ�������Լ��ðɡ�\n");
 message_vision("$N�ӳ������ó�һ��ѵ�ʳ������������̻��ʵĳ�������\n" , this_player());
 this_player()->set("food", this_player()->max_food_capacity());
 this_player()->set("water", this_player()->max_water_capacity());
 return "�����ѽ����Ҫ��ס��";

}