// Room: /d/new/huanhua/dating.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
��®����,ƽʱ����¥�Ӽ����˵�����.����һ�涼�����˲����ĳ���.
������ǽ�����������ľ����,������ʯ���̵�,ʹ�ô˴�������ƽ��
���˽�����.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/tangrou.c" : 1,
  __DIR__"npc/zuoqiu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"tianjin",
  "south" : __DIR__"huapath2",
  "east" : __DIR__"xiaolu",
]));
set("valid_startroom",1);

	setup();
	replace_program(ROOM);
}
