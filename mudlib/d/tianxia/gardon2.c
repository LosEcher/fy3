// Room: /d/tianxia/gardon2
inherit ROOM;

void create()
{
  set ("short", "С��԰");
  set ("long", @LONG
����̫��ʯ���߰���Ķѵ��ţ�һ�ߵ�һ��С�������ǲ�������
�������������еļ��ð���Ҳ�������Դ�������������ˡ�������
�����ӣ�����������
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"house",
  "southwest" : __DIR__"gardon",
]));
  setup();
}
