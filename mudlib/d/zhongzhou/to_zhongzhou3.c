// Room: /d/yangzhou/to_zhongzhou3.c

inherit ROOM;

void create()
{
	set("short", "���ݵ�");
	set("long", @LONG
�����������ݺ����ݵ�Ҫ�����������ϡ����������ݳǵı��ţ���
��ͨ�򳤽��ߵĶɿڡ���·������һ���ޱߵ���ɫ��Ұ����һƬ����
��⡣
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"to_zhongzhou2",
  "south":__DIR__"beimen",
]));
	set("outdoors","zhongzhou");

	setup();
	replace_program(ROOM);
}
