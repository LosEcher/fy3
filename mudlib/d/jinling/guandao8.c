// Room: /u/cyj/room/guandao.c
inherit ROOM;

void create()
{
  set ("short", "�ٵ�");
  set ("long", @LONG
����һ���ɹٸ�����ĵ�·���ǳ����������ݰ�������
���ϱ���ͨҪ�����������Զ��ˣ���ʱ��������ĺ͸ϳ���
������

LONG);

  set("outdoors", "/u/cyj/room");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"yizhan.c",
  "north" : __DIR__"guandao9.c",
]));
  setup();
}
