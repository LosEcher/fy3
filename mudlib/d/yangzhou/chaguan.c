// Room: /u/swordman/yangzhou/chaguan
inherit ROOM;

void create ()
{
  set ("short", "���ݲ��");
  set ("long", @LONG
��һ�߽��������ŵ�һ�ɲ���������Ƣ������Ϊ֮һˬ�����Ű�����һ�� 
�ſ��������˿��ˣ������̸Ц����ͷ�Ӷ������������������һ�����
�ˣ����������Ľ��������඼Ҫ����������һ������Ҫ����������ƹʺ�
ҥ�������Ǹ������ڡ� ��ǽ�ǻ�����һ����ˮ��(pot)��
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/aqingsao" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"nandaj2",
]));
  set("resource", ([ /* sizeof() == 1 */
  "water" : 1,
]));

  setup();
}
void init()
{
    add_action("do_drink", "drink");
    add_action("do_drink", "he");
}

int do_drink(string sss)
{

object ob;
ob=this_player();
if ((sss!="pot")&&(sss!="shui")&&(sss!="water"))
  {
   return 0;
  }
if(ob->query("water")> ((int)ob->query("str")-10)*10+150 )
 {
  tell_object(ob,"������˻�Ҫ�Ȱ���\n");
  return 1;
 } 
else
 {  
 say(ob->query("name")+"ſ��ˮ�ױߣ�һ�������˹���. \n");
 tell_object(ob,"��ſ��ˮ�ױߣ�һ�������˹���. \n");
 ob->set("water",((int)ob->query("str")-10)*10+200);

  return 1;
 }

}
