// Room: /u/uuui/xuedao/xuedao89.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�ߵ���������г���һƬ��������ˮ����������ˮ
����Ʈ�������ǵ���С��Ƽ���ڳ�����һ�ǣ�������
����������һ˿˿�����ķ�ӳ����ϴ��������������
������Ҳ��ô��ݶ������ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xuedao90",
  "west" : __DIR__"xuedao88",
]));

	setup();
	replace_program(ROOM);
}
