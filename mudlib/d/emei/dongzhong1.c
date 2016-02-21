// Room: /d/emei/dongzhong1.c

inherit ROOM;

void create()
{
	set("short", "�ж�");
	set("long", @LONG
����һ����Լ���ɵĶ���,�Ӷ����ϴ���ǧ����ʯ����,ɫ����
����״ǧ��ٹ�,���ǹ���,�����߾�����Ϣʯ��,�Ӻ󶴴�����
������,������¡¡������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xuan.c" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"dongzhong2",
  "west" : __DIR__"sleeproom",
  "south" : __DIR__"qiandong.c",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
