// Room: /u/swordman/yangzhou/money
inherit ROOM;

void create ()
{
  set ("short", "����Ǯׯ");
  set ("long", @LONG
�����ǳ�����������Ǯׯ--����Ǯׯ����Ϣ��͵�������Ƿ��
��˵Ǯׯ�ϰ�͸����к����ԨԴ����å����һ�㶼���������鷳��
��������һ��������ܺá�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yaolaoban.c" : 1,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xijie1",
]));

  setup();
}
