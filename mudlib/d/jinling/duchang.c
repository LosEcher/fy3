// Room: /d/jinling/duchang.c

inherit ROOM;

void create ()
{
  set ("short", "������-�ػ���");
  set ("long", @LONG
ԭ��������һ����ĳ�������Ц��������������������ζ��ζ֬��ζ
���ҵ��˼��㡣���߶���������ѹǩ���������ӣ�¥�����ꡣ
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dashou1.c" : 2,
]));
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"duchang2.c",
  "east" : __DIR__"duchang1.c",
  "up" : __DIR__"duchang4.c",
  "south" : __DIR__"mingwotang.c",
]));

  setup();
}
