// Room: /d/xxy/caodi 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "�ݵ�");
  set ("long", @LONG
һƬԼ�����ĻĲݵ�,����ʱ���������������,��С��̣��ȥ,��
���ѳ���,�Ĳݻ�ˮ,������Ţ,ÿһ̤��,��������,�������,��ˮ����
�ɽ�,ɷ������.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"caodi1",
  "south" : __DIR__"feixu",
]));
  set("outdoors", "/d/xxy");
  setup();
}
