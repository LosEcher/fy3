//bye enter

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������һ�������������ϣ������������������������������
�䣬�����泩���������и������������Ǻ�Ժ��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"zoulang2",
  "northeast" : __DIR__"zoulang4",
  "east" : __DIR__"houyuan",
]));

  setup();
}
