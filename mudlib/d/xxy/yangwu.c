// Room: /d/xxy/yangwu 
inherit ROOM; 
 
void create ()
{
  set ("short", "�Ｖ����");
  set ("long", @LONG
�����Ｖ����,������ʤ��������,�ɵ�����һ��,ƾ�˿ɽ��Ｖ�޴�.
�����пտյ���,����ʩչ�ֽ�.����֮��,��������,��������.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/train1.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yongdao",
]));

  setup();
}
