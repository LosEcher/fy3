// Room: /d/xxy/wuroom4.c

inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
ֻ�дﵽ�伶�ĸ��ֲ��ܽ��ⶰ¥,���濿���ĵط����Ű���,�������һ
��Χ��,ǽ�Ϲ��ŵ������ҵ��ֱ�,һ��̴ľ����,����ռ��С�������.������
����.
LONG);

  set("objects", ([ /* sizeof() == 4 */
  "/d/obj/food/egg.c" : 1,
  "/d/obj/food/zongzi.c" : 1,
  "/d/obj/food/jitui.c" : 1,
  "/d/obj/food/mijiu.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"wuroom1.c",
  "east" : __DIR__"wuroom5",
]));

  setup();
}
