// Room: /u/swordman/yangzhou/nanmen.c

inherit ROOM;

void create ()
{
  set ("short", "�ϳ���");
  set ("long", @LONG
�����ϳ��ţ���ǽ�������˹���ƣ������˻������̸��и�ҵ�Ĺ�棬 
�ٱ��Ǳ������Ļ���Ц�����������ƺ����Ǻ�������ִ�ڡ�һ����ֱ����
ʯ�������ϱ��������졣
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing" : 3,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"nandaj3",
  "south" : __DIR__"yzroad",
]));
  set("outdoors", "/u/swordman");

  setup();
}
