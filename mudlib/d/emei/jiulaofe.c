// Room: /d/emei/jiulaofe.c

inherit ROOM;

void create()
{
	set("short", "���Ϸ�");
	set("long", @LONG
�������˻�Ȼ����,������ͷ�����˰���Ĺ���,���������Ӧ,��
����������,���µ���������,�������ݵ�����,�±ߵ�һ������֦Ҷ
����,���µ�һ���ʯ��������λ������������̸.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/kong.c" : 1,
]));
	set("outdoors", "/d/emei");
	set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"dongwai",
  "east" : __DIR__"yixiant.c",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
