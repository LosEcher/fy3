// Room: /u/cyj/room/ziyunlou.c
inherit ROOM;

void create()
{
  set ("short", "����¥");
  set ("long", @LONG
��ǰ��������¥�ˡ��������㷼���Ŷ��գ��ٷ����ĵ���ʫ�ʸ踳
������ͨ��������ʲô���ʿ���������̣�����������������
LONG);

set("outdoors","/d/jingling");
  set("light_up", 1);
  set("no_magic", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"huayuan.c",
]));
  set("no_fight", 1);
  setup();
}
