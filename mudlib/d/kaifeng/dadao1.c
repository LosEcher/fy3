// Room: /d/kaifeng/dadao1
inherit ROOM;

void create()
{
  set ("short", "����·��");
  set ("long", @LONG
��·���˷�Ϊ��·��һ·�򱱾��ǿ���ǣ���������һ�����֡���
��������С���������������·ͨ��Ұ���֡�
LONG);

  set("outdoors", "/d/kaifeng");
  set("exits", ([ /* sizeof() == 3 */
  "southwest" : __DIR__"dadao2",
  "southeast" : __DIR__"shulin",
  "north" : __DIR__"dadao",
]));
  setup();
  replace_program(ROOM);
}
