// music �����ݵ�·

inherit ROOM;

void create()
{
  set ("short", "�����ݵ�·");
  set ("long", @LONG
      �����ڳ�������Ĺٵ��ϡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
    //       __DIR__"npc/xiaofan" : 1,
                 ]));
  set("outdoors", "/d/taishan");

  set("exits", ([ /* sizeof() == 3 */
                  "north" : __DIR__"taishanjiaoxia",
                  "south" : __DIR__"to_yz2",

              ]));
  setup();
}
