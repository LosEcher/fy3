// Room: /d/suzhou/meizhuang/huajing.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����һ�����ĵ�С��������������ͨ������ʯ��֮ǰ����ǰ�ݺ��߰�
�����ز�ø�ͦ���ڵ��������������ء����������¶��š�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north":__DIR__"chuangongfang4",
  "south" : __DIR__"yuedongmen",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
