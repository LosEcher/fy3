// Room: /d/xxy/weiroom 
inherit ROOM; 
 
void create ()
{
  set ("short", "��������");
  set ("long", @LONG
����������ʿ��ס�ĵط�,������ǽ��һ��ľ�崲����ѩ�׵�����.����� 
�������������ķ���ľ��,�Ա߻�������̫ʦ����.�������չ�Ӵ������ս���, 
ӳ�������������õ�. 
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/d/obj/food/hulu.c" : 1,
  "/d/obj/food/kaoji.c" : 2,
]));
  set("sleep_room", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"zoulang3",
]));

  setup();
}
