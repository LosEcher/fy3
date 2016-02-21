// Room: /d/quanzhou/gulou.c

inherit ROOM;

void create()
{
	set("short", "��¥");
	set("long", @LONG
��¥��һ�����������ҵ�ͤ��,�������һ�ڴ���,�������������� 
�����µ��Զ���,�Ѿ���Щ��ͷ��. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"zhendian",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"obj/literatebook.c" : 1,
  __DIR__"npc/qiaozhong.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
