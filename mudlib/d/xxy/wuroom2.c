// Room: /d/xxy/wuroom2 
inherit ROOM; 
 
void create ()
{
  set ("short", "�����");
  set ("long", @LONG
ֻ�дﵽ�伶�ĸ��ֲ��ܽ��ⶰ¥,���濿���ĵط����Ű���,�������һ
��Χ��,ǽ�Ϲ��ŵ������ҵ��ֱ�,һ��̴ľ����,����ռ��С�������.������
����.
LONG);

  set("objects", ([ /* sizeof() == 5 */
  "/d/obj/food/mifan.c" : 1,
  "/d/obj/food/shuijiao.c" : 1,
  "/d/obj/food/guazi.c" : 1,
  "/d/obj/food/grape.c" : 1,
  "/d/obj/food/apple.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"wuroom",
  "west" : __DIR__"wuroom3",
]));

  setup();
}
