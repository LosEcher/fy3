// Room: /d/kaifeng/gongmen.c

inherit ROOM;

void create()
{
	set("short", "ʯ����");
	set("long", @LONG
��ʯͷ��������һ�����ţ���Խ���ɣ������ο����ơ�������˩��
��ʯ������ǰ��һ��ĵط��������ʯ����������޴��ʯͷ��һ
���񵽵��£��ںͿڵĵط����и���ף����Բ���ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southup" : __DIR__"8bao",
  "northdown" : __DIR__"road",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
