// Room: /d/kaifeng/road5.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ǻ�Ὺ���ϱ�����Ҫ�ֵ���Ҳ�ǻ��ϳ�Ѳ��Ҫ�����ֵ�����
����̨ͤ���ϣ�С����������������������������һ�ɷ������ϱߵĸ�
�ž������ţ���������ͤ�¡�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "southup" : __DIR__"road4",
  "north" : __DIR__"road6",
  "west" : __DIR__"longting",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
