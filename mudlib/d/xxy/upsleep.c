// Room: /d/xxy/upsleep 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "����");
  set ("long", @LONG
���������Ĳ�˹��̺,�ݽǵ�һֻ����¯��,��������������,һ�ű����
�����˴����ƵĻ�Ƥ.������˯��һ��.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"up1",
]));
  set("sleep_room",1);
  setup();
}
