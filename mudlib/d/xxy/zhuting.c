// Room: /d/xxy/zhuting
#include <room.h> 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "ʯ��");
  set ("long", @LONG
�������������ʮ�ɵĸߴ�����ȫ���ô�ʯͷ����,�᲻����.����
��������ǽ����.һ���޴�ʯ���ӵ�������,�����ݶ�,����ǽ�ϵ�������
����,����,����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"zoudao3",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "ʯ��" : "���������ʮ���˲��ܱ���.����¶����������ɫ����.
",
]));
   create_door("south","��ľ��","north",DOOR_CLOSED);
  setup();
}
void init()
{
    add_action("do_tune","move");
}
int do_tune(string str)
{
     object ob;
          ob=this_player();
    if (!ob||environment(ob)!=this_object()) return notify_fail("");
  if (!str) return notify_fail("��Ҫ�ƶ�ʲô����?\n");
  if (str!="ʯ��") return 0;
  message_vision("$N˫�ֱ�ס�����е�ʯ��������ת��!\n",ob);
  message_vision("���������ǽ�滺����ȥ��$N���˽�ȥ.\n",ob);
  ob->move(__DIR__"mishi");
  return 1;
}