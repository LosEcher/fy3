// Room: /d/xxy/changfang 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "�󳨷�");
  set ("long", @LONG
һ��ܴ�ķ���,���������ﳤͨ��,���ϻ�������ൾ��,������Ϊ��
��,�����ֻ���ڵ��ϴպ�.�����з���һ�ɺ���ζ.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yongdao2",
]));
  set("sleep_room",1);
  setup();
}
