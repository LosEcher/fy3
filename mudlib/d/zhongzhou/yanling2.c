// Room: /d/zhongzhou/yanling2.c

inherit ROOM;

void create()
{
	set("short", "������·");
	set("long", @LONG
����������궫·�������ݵ�һ���Ͻ֡����ߵķ��ݿ���ȥ�Ѿ��ܳ�
���ˡ�·����������ģ�ż����һ������·��������ǰ�ߣ����������Ŀ�
������¥�ˡ�Ҫ������ǵĻ�����Ҫ�Ͻ����ˡ�Ҫ��Ȼ�ȳ��Ź��ˣ����
�Ƕ������ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/zhongzhou");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"gongyuan4",
  "west" : __DIR__"chenglou",
  "east" : __DIR__"yanling1",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaofan" : 1,
]));

	setup();
	replace_program(ROOM);
}
