// Room: /d/yangzhou/to_zhongzhou
inherit ROOM;

void create()
{
  set ("short", "���ݵ�");
  set ("long", @LONG
������ֱ�Ĵ�·�������ϱ��Ľ�ͨҪ��������ͨ�������ص����ݳǡ�
�������ɿ�·��ͨ�򳤽������˽����������ˡ�
LONG);

  set("outdoors","zhongzhou");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"to_zhongzhou2",
  "north":__DIR__"dukoulu",
]));
  setup();
}
