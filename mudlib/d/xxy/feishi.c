// Room: /d/xxy/feishi 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "�Ͼ�����");
  set ("long", @LONG
�߹��ݵ�,���ź�ǽ��ת,��ǰ��һ���ǷϵĹ���.ɽ������,һ�ﳤ
���ݵ�ʯ������ɽ��.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"dadian",
  "west" : __DIR__"caodi2",
]));
  set("outdoors", "/d/xxy");
  setup();
}
