// Room: /d/yangzhou/to_zhongzhou2
inherit ROOM;

void create()
{
  set ("short", "���ݵ�");
  set ("long", @LONG
�����������ϱ��Ľ�ͨҪ�����������˲��ϡ����Ե���ľ�¶���
��С��������ˣ���ˮ̯�����������ݳǣ�����ͨ�����ݡ�
LONG);

  set("outdoors","zhongzhou");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"to_zhongzhou3",
  "north" : __DIR__"to_zhongzhou",
]));
  setup();
}
