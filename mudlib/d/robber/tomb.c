// Room: /d/new/robber/tomb.c

inherit ROOM;

void create()
{
	set("short", "�س�");
	set("long", @LONG
����������߰˸��ض�,ȴʹ�˵�ƽ�������,΢�紵��,��ɭɭ��,
�߸ߵ�é��΢΢�ڶ�,������Ƶ�ʯ�������������ŲҰ׵���ɫ,�����
ȥ��Ƭ�ɰ�����.
LONG
	);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "ʯ��" : "   �ȴ����Ź�����֮Ĺ
     ��Т����ɽ��ϱ���Ͻ���.
",
]));
set("outdoors","/d/jiangnan");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"tomb1",
  "south" : __DIR__"hill",
  "west" : __DIR__"trees",
]));

	setup();
	replace_program(ROOM);
}
