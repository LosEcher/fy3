// Room: /d/yanjing/to_yj1
inherit ROOM;

void create()
{
  set ("short", "�ྩ���");
  set ("long", @LONG
�����ֱ��,ͨ��[�ྩ],�����ѩ���׷׶���,�������˳���ɡ,��
�˳�,�ϳ���������ձ��,һ�������������.ǰ������ߺܿ�ͱ�ѩ����
ס,������ϡ�Ǹ�С����,�������и�����·��.
LONG);

  set("outdoors", "/d/yanjing");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"hubian",
  "northeast" : __DIR__"to_yj2",
  "southwest" : __DIR__"to_yj",
]));
  setup();
  replace_program(ROOM);
}
