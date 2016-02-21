// Room: /d/yanjing/gate.c

inherit ROOM;

void create()
{
	set("short", "�ྩ����");
	set("long", @LONG
�ྩ�ĳ�ǽ�ߴ��ʵ,�����ѹ�,�㿴�������������ﲻ���þ�������,
���������Ŀ���,��������Ǹ�����ũ��,���ų�,װ���߲˽�������.���
���̲鿴������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/yanjing");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"to_yj3",
  "north" : __DIR__"street3",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
