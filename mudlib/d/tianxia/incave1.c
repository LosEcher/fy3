// Room: /d/new/tianxia/incave1
inherit ROOM;

void create ()
{
  set ("short", "���붴��");
  set ("long", @LONG
���бȽ��������������δ�ĵ�ˮ�����붴�ڲ�Զ����ʯ����������
��������ʲô��������ƺ�����ʯ�ţ��������Ķ��з���өө�Ĺ⡣����
�ں����ģ���֪�ж��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/qiling.c" : 1,
]));
  set("exits", ([ /* sizeof() == 4 */
  "out" : __DIR__"outcave",
  "southwest" : __DIR__"incave2",
  "southeast" : __DIR__"incave3",
  "south" : __DIR__"bridge1",
]));

  setup();
}
