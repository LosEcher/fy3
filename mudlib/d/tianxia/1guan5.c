// Room: /d/new/tianxia/1guan5
inherit ROOM;

void create()
{
  set ("short", "ʯ��·");
  set ("long", @LONG
�����Ǹ߸ߵĶ�����,��ʹ�ڴ�ѩƮ�ɵĺ���,��Ȼ�������.ƽ����ʯ��
·��ɨ�øɸɾ���,������Ƭ����Ĺ㳡.����������ӳ��,һƬ¥����Ȼ����.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"binguan",
  "north" : __DIR__"1guan3",
]));
  set("outdoors", "/d/new");
  setup();
}
