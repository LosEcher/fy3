// Room: /u/swordman/yangzhou/jlroad
inherit ROOM;

void create ()
{
  set ("short", "����·");
  set ("long", @LONG
������һ����ʯ����ϣ�������Լ�ɼ������ݳǵĳ�ǽ�� 
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yzroad",
]));
  set("outdoors", "/u/swordman");

  setup();
}
