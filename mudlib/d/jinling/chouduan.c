// Room: /u/cyj/room/chouduan
inherit ROOM;

void create()
{
  set ("short", "�򸣳�ׯ");
  set ("long", @LONG
�߽��򸣳�ׯ�پ���ǰһ����ֻ������ǽ�ϣ������ϡ�������������
������ͷ׵ĳ�С����⣬���ſڴ�������һЩ�����õĳ��£�������������ѡ��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"changjie4.c",
]));
  setup();
}
