// Room: /d/kaifeng/shanlu2
inherit ROOM;

void create ()
{
  set ("short", "ɽ·");
  set ("long", @LONG
����ɽ·ֱͨ��ɽ���ɴ�ǰס��ɽ���㡢����Ŀ������ﲻ������
�߲�Զ������ɽ��ڡ�
LONG);

  set("outdoors", "/d/kaifeng");
  set("exits", ([ /* sizeof() == 2 */
  "north":"/d/songshan/taishique",
  "eastup" : __DIR__"shanlu1",
]));

  setup();
}
