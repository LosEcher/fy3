// Room: /d/lingjiu/men2.c

inherit ROOM;

void create()
{
	set("short", "�鷿����");
	set("long", @LONG
�����鷿�ſڣ�ֻ����������������һ������(duilian)��̧ͷ������
�����һ�����(bian)��д�ż������֡�
LONG
	);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 2 */
  "bian" : "[1;36m������ң
[2;37;0m",
  "duilian" : "�е�ˮ�����������ʱ.
",
]));
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/lingjiu/zhujian.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"changl12",
  "east" : __DIR__"shufang",
]));
	set("outdoors", "lingjiu");

	setup();
	replace_program(ROOM);
}
