// Room: /d/kaifeng/kongdi.c

inherit ROOM;

void create()
{
	set("short", "�յ�");
	set("long", @LONG
����԰�Ĳ˵��м��һƬ�յأ���������Ϊԭ���Ĳ˵ر���ƽ��ɮ
�˲��ͷ����ֶ��������ġ����ص��м�һס�ϻ���֦Ҷ�����ģ������
��ѻ��ʱ���С��ϱ��Ǹ�С��ѣ������м�С�ü䡣
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/luzhisheng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"caidi5",
  "south" : __DIR__"fenjiao",
  "east" : __DIR__"tangjian",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
