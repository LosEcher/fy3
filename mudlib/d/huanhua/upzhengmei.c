// Room: /d/new/huanhua/upzhengmei.c

inherit ROOM;

void create()
{
	set("short", "��ü�����");
	set("long", @LONG
����������ı����ֻ����������飬�豸��򣬵���һ�ɴ����ǣ�
�������룬�м��Ų�ľ����.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/oldwoman.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"zhengmei",
]));

	setup();
	replace_program(ROOM);
}
