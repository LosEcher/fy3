// Room: /u/viviran/xiaowu.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�������������������ҡ�����ȥ�������������书��
���Զ���һ�档����ʱ���������ӣ������Ͼ�Ȼ��һ���
��ĳ���������û�а����ӡ������������η��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"yingbi",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
