// Room: /u/cyj/room/jiulou2
inherit ROOM;

void create ()
{
  set ("short", "����¥");
  set ("long", @LONG
����¥�Ǿ������Ψһ��һ�Ҿ�¥������һ���ļ����ܺã�������
������ĺ��Ľ������ѡ���Ȼ�۸�Ҳ�ܹ���ͨ�������Ѳ���ġ�¥����
���ã�¥�����ǰ����������
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaoer.c" : 1,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"changjie4.c",
  "up" : __DIR__"jiulou2.c",
]));

  setup();
}
