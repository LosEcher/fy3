//make by temp
//qiaofu.c

inherit NPC;
string ask_me();
void create()
{
set_name("�Է�",({"qiao fu","fu"}) );
set("gender", "����");
set("long",
    "����Է���������Ϥ����ѽ��\n");
set("age", 35);
set("shen_type",1);
set("attitude", "friendly");
set("str", 25);
set("int", 25);
set("con", 30);
set("dex", 30);
set("chat_chance", 20);
set("chat_msg", ({
    "�Ҵ�С������ɽ���񣬶�������û�в���ġ�\n",
    "��,��ʵ��Ҳ�и�Ů���Ĳ���,��֪��ʲôʱ��ʧɢ�ˣ��Һ�����ѽ��\n",
                (: random_move :)
        }) );
set("inquiry",([
            "��ɽ" : "�� �� ��",
            "��·" : "�� �� ��",
            "��ȥ" : "�� �� ��",
            "Ů��" : (: ask_me :),
]) );
setup();
}
string ask_me()
{
    object ob;
    ob=this_player();
    if ((int)ob->query_temp("find/����")==1)
   {
      say( "�Է�лл��ѽ�� �������ҵ��ҵ�Ů���ˣ���������ѽ��\n");
      say( "�Է���Ϊ�������������ҵ�����ɣ��Ա��ҵ����⡣\n");
      new(__DIR__"obj/book-stone")->move(ob);
      tell_object(ob,"�Է�ӲĶ��г��һ��ʯ���͸����㡣\n");
      ob->set_temp("find/����",0);
  
      return "лл����";
   }
   else
    return "��ѽ���ұ���Ҳ�и�Ů���ģ�������ȥ����ѽ?" ;
}