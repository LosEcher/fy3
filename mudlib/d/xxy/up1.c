// Room: /d/xxy/up1 
inherit ROOM; 
 
void create ()
{
  set ("short", "���¥��¥");
  set ("long", @LONG
�����ǳ��ɫ������ס������ĺ���,�����������м���̴ľ����,����
��ˮ������ʢ������,�㽶��ˮ��.һ����ɫ¥��ͨ���²�.�м��ȷ���������.
LONG);

  set("objects", ([ /* sizeof() == 5 */
  "/d/obj/food/dishes/dish15.c" : 1,
  "/d/obj/food/dishes/dish11.c" : 1,
  "/d/obj/food/dishes/dish10.c" : 1,
  "/d/obj/food/dishes/dish03.c" : 1,
  "/d/obj/food/dishes/dish02.c" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "eastdown" : __DIR__"tianfeng",
  "north" : __DIR__"upsleep",
  "west" : __DIR__"upbath",
]));

  setup();
}
