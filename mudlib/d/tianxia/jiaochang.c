// Room: /d/tianxia/jiaochang
inherit ROOM;

void create()
{
  set ("short", "���ֽ̳�");
  set ("long", @LONG
����Ƭ�����Ĺ㳡�����е����ʯ�Ǵ�����ɽ�����İ���ʯ�Ƴɵġ�
����Ĳ�ľ����һ��С·���������һ����ʯ������¶��һ��ɱ������
���ʯ��ֱͨɽ����
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"shijie1",
  "northeast" : __DIR__"1path",
  "west" : __DIR__"1road",
  "south" : __DIR__"1guan3",
]));
  setup();
}
