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
  "northwest":"/d/heimuya/to_cd",
  "southeast":__DIR__"sl1",
]));
  set("outdoors", "/d/heimuya");
  setup();
  replace_program(ROOM);
}
