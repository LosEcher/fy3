// Room: /d/kaifeng/dadao
inherit ROOM;

void create()
{
  set ("short", "���");
  set ("long", @LONG
��ƽԭ֮�ϵ�һ����·�������˺ܶ࣬·�������Զ���и�Сͤ��
������Ъ�ţ���ȥ���ǿ���ǡ����治Զ�Ǹ�����·�ڡ�
LONG);

  set("outdoors", "/d/kaifeng");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"dadao1",
  "north" : __DIR__"nanying",
]));
  setup();
  replace_program(ROOM);
}
