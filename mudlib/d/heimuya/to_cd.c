// Room: /d/heimuya/xiaolu
inherit ROOM;

void create()
{
  set ("short", "��ɽС·");
  set ("long", @LONG
���������Ӻ�Ŀ��Ҳ�ɶ���С·����˵�������Ұ�޳�û�����ɾ�
����
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "southeast":"/d/chengdu/sl2",
  "northwest" : __DIR__"road1",
]));
  set("outdoors", "/d/heimuya");
  setup();
  replace_program(ROOM);
}
