// Room: /d/new/tianxia/river1
inherit ROOM;

void create ()
{
  set ("short", "���º�");
  set ("long", @LONG
������ӿ��ˮ����ˢ����,�ޱߵĺڰ���������.˳��ˮ���ƺ�Ʈ��
��һЩ����,�㿴������Щʲô.�Աߵ�ʯ�ڿ���������ȥ.
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "ʯ��" : "��Ƭʯ��ͻ��ܶ�,����������ȥ.(climb ʯ��)
",
]));

  setup();
}
void init()
{
 object ob;
 ob=this_player();
 remove_call_out("greeting");
 call_out("greeting",30,ob);
 add_action("do_climb","climb");
}
void greeting(object ob)
{
 if (!ob||environment(ob)!=this_object()) return;
 message_vision("һ��������,��$Nһ���Ӿ���ˮ��.\n",ob);
 ob->move(__DIR__"river2");
 return;
}
int do_climb(string arg)
{
  object ob;
  ob=this_player();
  if (!ob||environment(ob)!=this_object()) 
      return notify_fail("");
  if (!arg||arg!="ʯ��") return notify_fail("��Ҫ��ʲô?\n");
  tell_room(__DIR__"incave2",ob->name()+"�ӵ��º����Ǳ�����������!\n");
  message_vision("$N����ʯ��������ȥ!\n",ob);
  ob->move(__DIR__"incave2");
  return 1;
 }
