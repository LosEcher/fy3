// Room: /d/new/tianxia/bridge1
inherit ROOM;

void create()
{
  set ("short", "Сʯ��");
  set ("long", @LONG
һ��������ʯ�����붴���,ʯ������ˮ����ӿ�ĵ��°���.ʯ��
�ϻ������,������̦޺.��ҪС��һ��.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"incave1",
  "south" : __DIR__"incave4",
]));
  setup();
}
int valid_leave(object ob,string dir)
{
   if (random(10)>6)    {
   	message_vision("$N����һ��,����һ��,����ˮȥ.\n",ob);
   	ob->move(__DIR__"river1");
   	return notify_fail("");
   }
 return ::valid_leave(ob,dir);
 }
   	