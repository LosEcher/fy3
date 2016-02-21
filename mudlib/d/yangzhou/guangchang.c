// Room: /u/swordman/yangzhou/guangchang.c

inherit ROOM;

void create ()
{
  set ("short", "����㳡");
  set ("long", @LONG
�����ǳ��е������ģ�һ���ܿ����Ĺ㳡��������ʯ���档һЩ���ֺ���
���������������������������������ݡ�������һ�ô��������̸���ڣ�
�ݴ�����ǧ������䣬���������е���ʷ��֤������Կ������������Ը��ص�
������������ʱ�ش������ʵĶ�������������������������ˣ�һƬ�ྲ�� 
LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/shusheng.c" : 1,
  __DIR__"npc/liumang" : 2,
]));
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"ddajie",
  "west" : __DIR__"xijie",
  "north" : __DIR__"beijie",
  "south" : __DIR__"nandaj1",
]));
  set("outdoors", "/u/swordman");
  set("light_up", 1);

  setup();
}
