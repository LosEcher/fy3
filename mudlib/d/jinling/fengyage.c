// Room: /d/jinling/fengyage.c

inherit ROOM;

void create()
{
	set("short", "���Ÿ�");
	set("long", @LONG
���ߣ�����Լ�˵������ǰ��������������ֻ������������������̣�
��ɴ�Ϻ�ǽ�ϻ����š�������ܡ�ͼ�����ã��ٶ����ˣ����ޣ�
��
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/dashou.c" : 2,
  __DIR__"npc/laobao.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"hutong2.c",
]));

	setup();
	replace_program(ROOM);
}
