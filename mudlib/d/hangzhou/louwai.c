// Room: /d/hangzhou/louwai.c

inherit ROOM;

void create()
{
	set("short", "¥��¥");
	set("long", @LONG
¥��¥�Ǻ�������һָ�Ĵ��¥.����Ĵ�ʦ��������[��ɩ��]Զ��
����.������Ǯ����,����Ǯ�˲������ĵط�.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"erlou",
  "northwest" : __DIR__"liulang",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/huoxiaoyu.c" : 1,
]));
	set("valid_startroom", 1);

	setup();
	replace_program(ROOM);
}
