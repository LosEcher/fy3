// Room: /d/sandboy/duanhun 
inherit ROOM; 

int i=0; 
void create() 
{ 
  set ("short", "�ϻ��");
  set ("long", @LONG
��Ŀ��ȥ��ֻ��ǰ�棬�ط���䣬�ͱ����С���˵�������ˣ�������
ɽԳԽ�ɣ�Ҳ�����¡�������ï�ݴӵ��ϴܳ�������ס�˵��ϵ�ɰ����
LONG);

  set("outdoors", "/d/sandboy");
  setup();
}
void init()
{
     add_action("do_search","search");
     add_action("do_search","xun");
     add_action("do_la","la");
}
int do_search()
{
   object ob=this_player();
   if (!ob||environment(ob)!=this_object())
               return 0;
    i++;
  message_vision("$N���Ϸ�����ϵ�ɳʯ��Ұ�ݣ��ƺ���Ѱ��Щʲô!\n",ob);
      if (random(i)>4)
           {
             tell_object(ob,"��ͻȻ����һö��(gold_circle).\n");
             ob->set_temp("sandboy/found_huan",1);
             set("item_desc",([
               "gold_circle":"һöСָ�ֵĽ�.\n",
               "��":"һöСָ�ֵĽ�.\n",
              ]));
            i=0;
                      return 1;
           }
 else 
 tell_object(ob,"��ʲô��û�ҵ�!\n");
 return notify_fail("");         
}
int do_la(string str)
{
    object ob;
        ob=this_player();
     if (!ob||environment(ob)!=this_object()) return 0;
    if (!ob->query_temp("sandboy/found_huan")) return 0;
    if (!str) return notify_fail("��Ҫ��ʲô?\n");
if ((str!="��")&&(str!="gold_circle")) return notify_fail("��Ҫ��ʲô?\n");
    message_vision("$N����ָ��ס��������!\n",ob);
       if (ob->query("str")+ob->query_skill("unarmed",1)/10<30)       
           {
        message_vision("$N�������ͨ�죬�ɽ���˿����!\n");
        return 0;
              }
   write("ֻ���ص��º��¡��һ���죬��ǰ¶��һ�����߼����ĵض�.\n
       һ�����ƣ������ɶ�������\n");
   set("item_desc",([
      "����":"���ɫ�Ĵ��֣�һĿ��Ȼ��
      ����д���ǣ����¹ű���ɱ��������������ţ�����ĪԹ.\n",
]));
   this_object()->set("exits",(["down":__DIR__"dibao"]));
   ob->delete_temp("sandboy/found_huan");
     return 1;
} 

   