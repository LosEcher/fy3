// Room: /u/swordman/yangzhou/bingying
inherit ROOM;

void create ()
{
  set ("short", "��Ӫ����");
  set ("long", @LONG
����վ�ڱ�Ӫ���ſڣ������һ�ż�ª��Ӫ�������Կ��������Ʒ��Ĺٱ� 
���ڲ�������ʱ�ش����ź������ϰ����ǲ������ڴ˹ۿ��ģ�����øϿ��߿��� 
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bingyong" : 2,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"nandaj3",
  "north" : __DIR__"bingying2",
]));
  set("outdoors", "/u/swordman");

  setup();
}
