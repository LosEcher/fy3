// Room: /u/uuui/xuedao/xuedao81.c

inherit ROOM;

void create()
{
	set("short", "�Ӳݵ�");
	set("long", @LONG
������һƬ�ݵأ��β����Ӳ�����Ľ��±�����
�������ϱ���һ��СϪ����������ˮ����ͣ������Ķ�
�߻��졣����������һƬ��ľ�ӡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"xuedao114",
  "northeast" : __DIR__"xuedao82",
  "northwest" : __DIR__"xuedao80",
]));

	setup();
	replace_program(ROOM);
}
