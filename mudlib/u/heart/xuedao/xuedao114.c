// Room: /u/uuui/xuedao/xuedao114.c

inherit ROOM;

void create()
{
	set("short", "СϪ��");
	set("long", @LONG
�峺��СϪˮ���������ྻ��Ϫˮ��ż������һ����
СС������������Ρ�Ϫ�ߵ�С����ͣ�ŵ�С��Ҳ�ڡ�
������ĳ��Ÿ裬ʮ�����е����ӡ�������Ƭ�ݵء�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"xuedao81",
]));

	setup();
	replace_program(ROOM);
}
