// Room: /d/new/huanhua/whitefeng.c

inherit ROOM;

void create()
{
	set("short", "���Ʒ�");
	set("long", @LONG
���Ʒ��Ǵ�¦ɽ��ߵ�ɽ��.��Ŀ��ȥ,һƬãã,���������ƺ�֮��.
�Ʋ�֮��,һ��Сɽ�����Ѵ��϶�����û���Ʋ���.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/tiewan-mo.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"road6",
  "northdown" : __DIR__"road5",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
