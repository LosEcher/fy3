// Room: /d/xxy/yangwu 
inherit ROOM; 
 
void create ()
{
  set ("short", "�Ҽ�����");
  set ("long", @LONG
�����Ҽ�����,������ʤ��������,�ɵý���һ��,ƾ�˿ɽ��Ҽ��޴�.
�����пտյ���,����ʩչ�ֽ�.����֮��,��������,��������.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/train4.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yongdao1",
]));

  setup();
}
