// Room: /d/xxy/yangwu 
inherit ROOM; 
 
void create ()
{
  set ("short", "��������");
  set ("long", @LONG
������������,������ʤ��������,�ɵ�ͭ��һ��,ƾ�˿ɽ������޴�. 
�����пտյ���,����ʩչ�ֽ�.����֮��,��������,��������. 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/train2.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yongdao",
]));

  setup();
}
