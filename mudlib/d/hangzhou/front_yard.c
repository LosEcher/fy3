// Room: /d/hangzhou/front_yard.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG
������ʵ�����䳡�����м����������໥����,�Ա�Χ��һȦ�����ֵ�,  
��ʱָָ���,�������ܹ���Щɳ��(sandbags),��֪�Ǹ�ʲô�õ�,���ص�  
������һ������������.�����С�����ﴫ�����˵���ζ!  
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dizi.c" : 2,
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "sandbags" : "�������ص�ɳ�����������Ŵ��(da)����  
",
]));
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"dating.c",
  "south" : __DIR__"wuchang.c",
  "west" : __DIR__"cooking_room.c",
]));

	setup();
	replace_program(ROOM);
}
