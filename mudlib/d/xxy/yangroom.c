// Room: /d/xxy/yangroom 
inherit ROOM; 
 
void create ()
{
  set ("short", "�Ｖ����");
  set ("long", @LONG
�����Ｖ��ʿ��ס�ķ���,�����������ľ�崲,���ϴ��ޱ�,��Ҳ�ɾ�. 
������һ�Ű�ľ����,�����и��ִŴ���,�Ա��ڿ�ʱ����. 
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"zoulang1",
]));
  set("sleep_room", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/d/obj/clone/food/jiudai.c" : 1,
  "/d/obj/clone/food/baozi.c" : 5,
]));

  setup();
}
