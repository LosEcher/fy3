// Room: /u/swordman/yangzhou/beijie2
inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
�����·�൱�Ŀ����ݺü�ƥ�����У������ĵ�·ͨ�򱱷���Զ
Զ���ܿ�������ı����š������ǳ����ġ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"beimen",
  "south" : __DIR__"beijie1",
  "west" : __DIR__"liangdian",
]));
  set("outdoors", "/u/swordman");
  set("light_up", 1);

  setup();
}
