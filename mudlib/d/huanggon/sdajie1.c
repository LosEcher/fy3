// Room: /d/huanggon/sdajie1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ǿ��������ֵĵط�,������ķ�����,Ҳ�Ǹ���С�����ĵ�
��,�˵������ϴ��,�ϱ߾���������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jialaoliu.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"sdajie",
  "south" : __DIR__"yongdingmen",
]));

	setup();
	replace_program(ROOM);
}
