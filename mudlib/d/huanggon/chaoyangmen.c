// Room: /d/huanggon/chaoyangmen.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������ǳ����ţ���ǽ�Ͽ��š������š��������֡����ž��ڶ�
�ϱߣ����������������ǽ������ǵ�Ҫ�����̲�ʮ�����ܡ�һ������
�Ĵ���������죬ͨ����������������֡�������ɵ��ྩ����.
LONG
	);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 2 */
  "east" : "/d/yanjing/to_yj",
  "west" : __DIR__"echangan1",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chengweibin.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
