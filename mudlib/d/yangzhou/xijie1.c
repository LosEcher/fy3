// Room: /u/swordman/yangzhou/xijie1.c

inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
���������ݳ�����Ĵ���ϣ��ؽֵ����������ֳ̼�Ⱥ������
���ﳵ���������������У�ҹ�����ǹ���£��ƻ�ͨ���������ǳ���
����Ҫ����ҵ���Ļ����ֽ֣����С�����ʮ������·�������ơ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guanbing1" : 2,
]));
  set("light_up", 1);
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"xijie2",
  "north" : __DIR__"money",
  "south" : __DIR__"yamen",
  "east" : __DIR__"xijie",
]));

  setup();
}
