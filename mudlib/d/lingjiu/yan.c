// Room: /d/lingjiu/yan.c

inherit ROOM;

void create()
{
	set("short", "ʧ����");
	set("long", @LONG
����ͨ�����չ����ıؾ�֮·��ɽ����һ����ӥ�ͻ���ľ��ҽض�
�����ҹ�ɼ��ˣ�ֻ���м������һ��խխ��ʯ��ͨ��ɽ������һͷ����
С�����������̤����ȥ�����룺���ܹ�ȥ�ɡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/lingjiu/tbyou.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"ya",
  "northup" : __DIR__"jian",
]));
	set("outdoors", "lingjiu");

	setup();
	replace_program(ROOM);
}
