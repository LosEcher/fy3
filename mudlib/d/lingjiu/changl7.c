// Room: /d/lingjiu/changl7.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����һ���ǳ������ĳ��ȣ����Ӻ��������û������̴ľ�Ƴɣ�����
������������ͼ�����������ɣ�����ʤ�ա��ذ岻֪����ʲô�������ģ�
�������������Ϣ����ֻ�е���������ģ��ǳ����������ͨ�������
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"changl6",
  "east" : __DIR__"changl15",
]));

	setup();
	replace_program(ROOM);
}
