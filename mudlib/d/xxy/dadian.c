// Room: /d/xxy/dadian 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "���");
  set ("long", @LONG
���ǹ��µĴ��,����ķ������Ѹ����µ��˰���,��ס�����ĸ���
���Ѿ�����һ��,��������Ҳ��ҡҡ��׹.���õ�һ�ǵ�������,¶������
�����,�и��Ż�ͨ����.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"fdian",
  "southdown" : __DIR__"feishi",
]));
  setup();
}
