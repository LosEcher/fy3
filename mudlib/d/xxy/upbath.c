// Room: /d/xxy/upbath 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "ԡ��");
  set ("long", @LONG
һ���������ӵ�ԡ��,�����ܲ�͸��,һֻ����˸ߵ�ԡͰ��������̿��.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"up1",
]));
  set("bath_room",1);
  setup();
}
