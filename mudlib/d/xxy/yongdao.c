// Room: /d/xxy/yongdao 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "��");
  set ("long", @LONG
һ����������,�������ϱ�����������С����,���ߵķ������϶�
��������,������[�Ｖ����],��������[��������].
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"weiwu",
  "south" : __DIR__"yangwu",
  "west" : __DIR__"yongdao1",
  "east" : __DIR__"datang",
]));
  setup();
}
