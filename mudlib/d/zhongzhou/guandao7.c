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
  "south" : "/d/zhongzhou/beimen.c",
  "north" : __DIR__"guandao6.c",
]));
  setup();
}
