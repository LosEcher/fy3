// Room: /d/sandboy/zhulin 
inherit ROOM; 
 
void create ()
{
  set ("short", "����");
  set ("long", @LONG
һƬ��������֣�������Ҷ��϶���µ���ɫ���⡣�Ų�̤����Ҷ��
����ϤϤ������������
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhangsan.c" : 1,
]));
  set("outdoors", "/d/sandboy");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"shandao2",
]));

  setup();
}
