// Room: /u/cyj/room/changjie.c
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
�����Ǿ���ǵ���Ҫ�ֵ������ھ�����ϱ����������̣����Ծ��г�
��������������Ľֵ�����Ҳ�Ǿ����������ҵ�֡�������ĳ�ǽ��
����һ��С��,ľ�ŹصĽ����ġ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"changjie1.c",
  "south" : __DIR__"chengmen.c",
  "southeast" : __DIR__"gengwu.c",
]));
set("outdoors","/d/jingling");
  setup();
}
