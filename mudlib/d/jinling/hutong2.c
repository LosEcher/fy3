// Room: /d/jinling/hutong2.c

inherit ROOM;

void create()
{
	set("short", "С��ͬ");
	set("long", @LONG
���߽���һ��������С��ͬ,��ǰ��ʱ�ι�һȺȺ��Ů�������е����Σ�
����ǰ����һ��С�ţ���ʱ�߳�һ�����޾���ɵĺ��ӡ�����ȴ�ǵƺ����
����������Ц�������ڶ���
LONG
	);
	set("no_clean_up", 0);
        set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/gongzi.c" : 1,
]));
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"hutong1.c",
  "north" : __DIR__"mingwotang.c",
  "south" : __DIR__"fengyage.c",
]));

	setup();
	replace_program(ROOM);
}
