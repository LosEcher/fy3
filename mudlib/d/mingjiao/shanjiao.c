// Room: /d/mingjiao/shanjiao.c
// Date: XXL 97/05/11

#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����ɽ��");
  set ("long", @LONG
������ǧ�����صĶ�´��Զ������ƺƣ��������ơ�������
Ұǧ����������������ɽΡΡ���������߳�����ְ˰���
�����̾���������Ⱥɽ֮�С�����----�Ƕ������ֺ�����������
�ط����������������������ĺ��ֵܣ�����������а������
��������Ⱥɽ֮�󣬵ȴ�����ȥ��д��һ�����ִ��档
LONG);

  set("outdoors", "mingjiao");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"road1",
  "east" : __DIR__"gebitan5",
  "west" : __DIR__"tomen2",
]));

  setup();
}
