// Room: /d/new/tianxia/1guan2.c

inherit ROOM;

void create ()
{
  set ("short", "ɽ��");
  set ("long", @LONG
��ǰ�Ǹ������ɽ�ȣ�������ɽ���Բ�çç.�ײ�ɢ���ż�������.
ϸ����,��������.������Ƭ�����Ŀճ�,����������·.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"stone1",
  "northwest" : __DIR__"1guan1",
  "east" : __DIR__"1guan3",
]));
  set("outdoors", "/d/new");

  setup();
}
void init()
{
  object ob;
  ob=this_player();
  remove_call_out("greeting");
  call_out("greeting",random(5)+1,ob);
  return;
}
void greeting(object ob)
{
 if (!ob||environment(ob)!=this_object())
      return;
 message("vision","һ�󺮷紵��,�����������Щ��!\n",this_object());
 return;
}