// Room: /d/chengdu/beijie1.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����һ����������ʯ�ֵ������ϱ���ͷ���졣�����Ǳ�
����ͨ����⡣�ϱ��Եúܷ������֡�������һ�������¥
�󣬹��š������Ŷ��������������Ŷ�������һ�����ҡ���
��Ϊֹ�����ֲ����������������ǳ������Ϲ�--�������ֱʡ�
����������ζ�˱Ƕ���,���㴹�����Ρ�������һ�����ӵ���
�ã�������ƣ��������ﲻ��,�Ǿ��Ǵ�������ͬ���������
�������Ϸ��и��续��С̶��
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "chengdu");
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"chenmapo",
  "west" : __DIR__"wuhou",
  "south" : __DIR__"beijie2",
  "north" : __DIR__"northchengmen",
]));

	setup();
	replace_program(ROOM);
}
