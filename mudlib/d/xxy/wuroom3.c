// Room: /d/xxy/wuroom3 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "����");
  set ("long", @LONG
���������Ӻ�ĵ�̺,�����ϵ�������ı���,��ǰ����̨�ϰ���Щ��ʳ.
һֻ����ɫ��ƿ�в���һ��÷��.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"wuroom2",
]));
   set("sleep_room",1);
  setup();
}
