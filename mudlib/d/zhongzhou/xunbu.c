// Room: /d/zhongzhou/xunbu.c

inherit ROOM;

void create()
{
	set("short", "Ѳ����");
	set("long", @LONG
һ�߽��谵��Ѳ������һʱ��ɶ�����������;����е���ɭ���¡�
��ɿ�������Լ���û����ʲô���캦����¡�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhangxunbu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"bangban",
  "west" : __DIR__"wendingbei3",
]));

	setup();
	replace_program(ROOM);
}
