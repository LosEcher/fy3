// Room: /d/kaifeng/houyuan.c

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG
��Ժ֮���������ơ������ľ������ʯ�ʣ�������Ϣ�����е�һ����
����¯��������������Ը�����Ƕ����ڴ˿�ͷ�ġ������ǲؾ�¥��������
ǧ��ǧ�۷������ǰ˱������
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"qianshou",
  "east" : __DIR__"cangjing",
  "north" : __DIR__"8bao",
  "south" : __DIR__"daxiong",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
