// Room: /d/xxy/zoudao 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "�ߵ�");
  set ("long", @LONG
һ���������ߵ�,�����ǻ���,��������ٺ�,�Ǹ�����ֵĻ�ľ,����
���˵�����,�������ϸ�۲�,���ܿ�����඾���ڻ�ľ����Ϣ.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"zoudao1",
  "south" : __DIR__"zoulang6",
]));
  set("outdoors", "/d/xxy");
  setup();
}
