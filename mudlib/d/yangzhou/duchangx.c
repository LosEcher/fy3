// Room: /d/yangzhou/duchangx
inherit ROOM;

void create ()
{
  set ("short", "�ĳ�����");
  set ("long", @LONG
������Ƕĳ��������ˣ����������ͨ���������䡣�����Ƕġ����ӡ�
�ķ��䣬�����Ƕġ�ѹǩ���ķ��䣬¥��������ĵط������ϱߵĴ�Ժ��
�Ƕ����ĵط������õ�ǽ�Ϲ���һ������(paizi)��
LONG);
  set("item_desc", ([ /* sizeof() == 1 */
  "paizi" : "ǧ��ɢ����������",
]));
  set("exits", ([ /* sizeof() == 5 */
  "up" : __DIR__"duchang4",
  "west" : __DIR__"duchang2",
  "north" : __DIR__"duchang1",
  "south" : __DIR__"duchang",
  "east":__DIR__"duchang3",
]));
  set("light_up", 1);

  setup();
}
