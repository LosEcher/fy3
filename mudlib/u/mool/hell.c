#include <login.h>
inherit ROOM;

void create ()
{
  set ("short", "ʮ�˲����");
  set ("long", @LONG
������Ǵ�˵�е�ʮ�˲������������͸�ŵ���ɫ��ɭɭ�Ĺ⣬��
Զ���к��ǳɶѣ�������Ѫˮ������һ�ɸ�������ζ������Ϣ����̧ͷ
���죬û��һ˿��ɫ�����ͷ���أ�ֻ��Ѫˮ�೾��ֻ�����޳���֮��
�������������������ˡ�
LONG);

  set("compare",1);
  set("light_up", 1);
  set("no_kill",  1);
  set("no_fight", 1);
  set("no_steal", 1);
  set("no_magic", 1);
  setup();
}

void init()
{
  object me=this_player();

  me->set("startroom", "/u/mool/hell.c");

  add_action("do_null", "chat");
  add_action("do_null", "flyto");
  add_action("do_null", "chat*");
  add_action("do_null", "sys");
  add_action("do_null", "tell");
  add_action("do_null", "quit");
  add_action("do_null", "shout");
  add_action("do_null", "rumor");
  add_action("do_null", "suicide");
  add_action("do_null", "quitbk");
  add_action("do_null", "eat");
  add_action("do_null", "drink");
  add_action("do_null", "perform");
  add_action("do_null", "exert");
  add_action("do_null", "whisper");
  add_action("do_null", "exercise");
  add_action("do_null", "study");
  add_action("do_null", "reply");
  add_action("do_null", "home");
  add_action("do_null", "chat#");
  add_action("do_null", "sleep");
  add_action("do_null", "hit");
}
int do_null(string arg)
{
  tell_object(this_player(), "�㱻������ʮ�˲���������޷���֮�ա�\n");
  return 1;
}


