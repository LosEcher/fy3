// Room: /d/zhongzhou/nameroom.c

inherit ROOM;

void create()
{
        set("short", "������");
	set("long", @LONG
��������տյ�����ֻ��һ����ͷ�ڻ����˯.
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wendingnan3",
]));
	set("no_clean_up", 0);
        set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/name" : 1,
]));

	setup();
	replace_program(ROOM);
}
