// Room: /u/swordman/yangzhou/beijie.c

inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
�����·�൱�Ŀ����ݺü�ƥ�����У������ĵ�·ͨ�򱱷���Զ
Զ���ܿ�������ı����š��ϱ��ǳ����ģ������൱�Ķࡣ�����ǳ�
���������Ǽ�ľ���̡�
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaofan" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"muqipu",
  "north" : __DIR__"beijie1",
  "south" : __DIR__"guangchang",
]));
  set("outdoors", "/u/swordman");

  setup();
}
