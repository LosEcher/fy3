// music �����ݵ�·

inherit ROOM;

void create()
{
  set ("short", "�ٵ�");
  set ("long", @LONG
      �����ڳ�������Ĺٵ��ϡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
    //       __DIR__"npc/xiaofan" : 1,
                 ]));
  set("outdoors", "/d/taishan");

  set("exits", ([ /* sizeof() == 3 */
                  "north" : __DIR__"to_yz1",
                  "south" : __DIR__"to_yz3",

              ]));
  setup();
}
