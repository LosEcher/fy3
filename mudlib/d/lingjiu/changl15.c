// Room: /d/lingjiu/changl15.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����һ���ǳ������ĳ��ȣ����Ӻ��������û������̴ľ�Ƴɣ�����
������������ͼ�����������ɣ�����ʤ�ա��ذ岻֪����ʲô�������ģ�
�������������Ϣ����ֻ�е���������ģ��ǳ������һ������ӱ���
������
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/lingjiu/tbxuan.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"huayuan",
  "south" : __DIR__"dating",
  "east" : __DIR__"changl8",
  "west" : __DIR__"changl7",
]));

	setup();
	replace_program(ROOM);
}
