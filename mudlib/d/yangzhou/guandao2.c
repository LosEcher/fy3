// Room: /u/swordman/yangzhou/guandao2
inherit ROOM;

void create ()
{
  set ("short", "�ٵ�");
  set ("long", @LONG
����һ���ɹٸ�����ĵ�·���ǳ����������ݰ�������
���ϱ���ͨҪ�����������Զ��ˣ���ʱ��������ĺ͸ϳ���
������
LONG);

  set("light_up", 1);
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"guandao1",
  "east" : "/d/jinling/yizhan",
]));

  setup();
}
