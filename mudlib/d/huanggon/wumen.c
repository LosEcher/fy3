// Room: /d/huanggon/wumen
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
�������Ͻ��ǵ����,��37.95��,��¥����,��¥�����ӹ�.����ͻ
��,����ͱ߽���������ͤ����.��¥����������,ֻ�лʵ�,ÿ�Ƶ�״Ԫ
̽��,�����������ų���.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tiananmen",
  "north" : __DIR__"taihedian",
]));
  set("outdoors", "/d/huanggon");
  setup();
}
int valid_leave(object ob,string dir)
{
   if (!userp(ob)&&dir=="south"&&ob->query("home")==1) 
   return notify_fail("�����������:���Ǳ�������ȥ.\n");
   return ::valid_leave(ob,dir);
}