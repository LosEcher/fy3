// Room: /d/xxy/yangwu 
inherit ROOM; 
 
void create ()
{
  set ("short", "�伶����");
  set ("long", @LONG
�����伶����,������ʤ��������,�ɵ�����һ��,ƾ�˿ɽ��伶�޴�.
�����пտյ���,����ʩչ�ֽ�.����֮��,��������,��������.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/train3.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yongdao1",
]));

  setup();
}
