// Room: /d/new/tianxia/river2
inherit ROOM;

void create()
{
  set ("short", "���º�");
  set ("long", @LONG
�����ˮ�����޾��ĺڰ�!
LONG);

  setup();
}
void init()
{
  object ob;
  ob=this_player();
  remove_call_out("greeting");
  call_out("greeting",10+random(30),ob);
}
void greeting(object ob)
{
  if (!ob||environment(ob)!=this_object()) return;
  tell_object(ob,"һ��ˮ������,����˼�����ˮ,��ͷ����.\n");
  ob->move(__DIR__"river3");
  return;
}
  