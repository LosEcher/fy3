// Room: /d/xxy/feixu 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "����");
  set ("long", @LONG
����һƬ����,�������,���ܿ����Ƕ��Ѿ�����ɫ�ĺ�ǽ,��ǽ֮��,
ȴ���Ű���·��.�����·��,�ǳ��ɼ�ϥ�ĻĲݺ�����,��,��������,��Ы
��������,ҹ��Ҫ���ȥ,����Щ����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"caodi",
]));
  set("outdoors", "/d/xxy");
  setup();
}
