// Room: /d/kaifeng/road3.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������������ϱ��Ĵ�ֵ���Ҳ�ǻʵ۳�Ѳʱ��Ҫ�������ߵĵ���
¥�󲻶ϣ�ʵ���˼�һ����̧����ȥ��������۵ķ�����������ͷ����
��������ĸ��ڡ��첨�︮��.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/fujiazi.c" : 1,
]));
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"ciqi",
  "west" : __DIR__"yangfu",
  "south" : __DIR__"road2",
  "northup" : __DIR__"road4",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
