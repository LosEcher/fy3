// Room: /d/kaifeng/xuandemen.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�������ǿ���ı����ţ��������������ǻʳ����ڡ���ǽ�����ø�
���ι̡����ߵĲر���������ǧ�ˣ��������ǵ����˹��Ƴ���֮ʱ����
����ɱ������ɱ���ˡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guanbing.c" : 2,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road6",
  "north" : __DIR__"jiaowai",
]));

	setup();
	replace_program(ROOM);
}
