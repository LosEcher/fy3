// Room: /u/xxy/room/xiaojing3
inherit ROOM;

void create()
{
  set ("short", "���ֹ�");
  set ("long", @LONG
����Ⱥɽ�����е�һ��ɽ��,������ɽ�Ȳ�ͬ����,��ط������
����,�Բ�С�ĵ�����ȥ,������ٲ���֮��.��������,������������
����ƬƬ,�����վ�֮��.��һ��С·�������Ѷ�ȥ.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"yixiant",
  "east" : __DIR__"shuitan",
]));
set("outdoors","/d/emei");
  setup();
}
