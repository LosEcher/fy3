// Room: /d/kaifeng/paifang.c

inherit ROOM;

void create()
{
	set("short", "�Ʒ�");
	set("long", @LONG
����һ���ձڣ�����һ����ʯС������ǰ��Զ����һ���Ʒ���ͨ��
�������һ�ߣ�������ԭ���ĵ�ɫ�����Ǹ��ص�ү����ɫ���񣬱�����
��������Ϸ¥��������ǹص���
LONG
	);
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"xilou",
  "east" : __DIR__"guandi",
  "west" : __DIR__"huiguan",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/huizhang.c" : 1,
  __DIR__"npc/pihuoshang.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
