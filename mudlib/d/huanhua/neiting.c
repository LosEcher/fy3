// Room: /d/new/huanhua/neiting.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����������ƽʱ�ۻ�֮��,���������ӵ��Լ����׺���֮��,��ʹ
��佻����ɵ��ӷ���Ҳ��������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaofuren.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"houyuan",
  "south" : __DIR__"tianjin",
  "west" : __DIR__"7qulang4",
]));

	setup();
	replace_program(ROOM);
}
