// Room: /u/swordman/yangzhou/beimen.c

inherit ROOM;

void create ()
{
  set ("short", "���ݱ���");
  set ("long", @LONG
���������ݳǵı����š�������͵��˳��У�Զ����ɽ�˺����������˳�
������������һ����·ͨ��Զ������������һЩִ�ڵı�ʿ��ʱ����
������̫ƽ����һ�ɱ�������Ӣ�˲���������Ķ���������ʿ��
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing" : 3,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : "/d/taishan/yidao",
  "south" : __DIR__"beijie2",
]));
  set("outdoors", "/u/swordman");

  setup();
}
