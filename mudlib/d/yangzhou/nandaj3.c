// Room: /u/swordman/yangzhou/nandaj3.c

inherit ROOM;

void create ()
{
  set ("short", "�ϴ��");
  set ("long", @LONG
����һ����������ʯ��ֵ������ϱ���ͷ���졣�����Ǳ�Ӫ���ڣ����� 
ϡ�٣������ĵغ������塣������һ���ӻ��̣������������������š�
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chefu" : 2,
]));
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"zahuopu",
  "west" : __DIR__"bingying",
  "north" : __DIR__"nandaj2",
  "south" : __DIR__"nanmen",
]));
  set("outdoors", "/u/swordman");

  setup();
}
