// Room: /u/swordman/yangzhou/ycsz3
inherit ROOM;

void create ()
{
  set ("short", "�ɻ���");
  set ("long", @LONG
��������վ�ڷ羰�������̲������ĺɻ��رߣ�ÿ���ļ�������
�ɻ�ʢ�������޶��ˣ�����������פ�㣬��ʹ����ī���������������
���������淺��һ��������ʹ����һ��������ȥ�ĳ嶯���ر���һ��Ƭ
�̲�ƺ������ͽ����Ϣ��ѧϰ�ĵط���
LONG);

  set("light_up", 1);
set("sleep_room",1);
set("no_fight",0+random(1));
set("resource/water",1);
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"ycsz2",
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
if ((sss!="chi")&&(sss!="shui")&&(sss!="water"))
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
 say(ob->query("name")+"ſ��ˮ�رߣ�һ�������˹���. \n");
 tell_object(ob,"��ſ��ˮ�رߣ�һ�������˹���. \n");
 ob->set("water",((int)ob->query("str")-10)*10+200);

  return 1;
 }

}
