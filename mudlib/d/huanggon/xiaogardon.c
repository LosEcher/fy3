// Room: /d/huanggon/xiaogardon
inherit ROOM;

void create()
{
  set ("short", "С��԰");
  set ("long", @LONG
�����е�С��԰,Ժ���Ǹ�ɫ��ĵ��,��˵����Ϊĵ������,���Կ���
���ر�ϲ��,��ľ������С�ɵ�����,ͤ��,��ɽ.����ʤ��,�Ӵ�����,��
�������쾮.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"xiaogardon1",
  "west" : __DIR__"tianjin",
]));
  set("outdoors", "/d/huanggon");
  setup();
  replace_program(ROOM);
}
