// Room: /d/quanzhou/yamen.c

inherit ROOM;

void create()
{
	set("short", "Ȫ�ݸ�");
	set("long", @LONG
Ȫ�ݸ��Ĵ��ſ�վ�ż������ŵ�����,�����������ߺ�ľ��,�߸ߵ� 
�ſ�������������,�ſ���߰���һ����. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"datang",
  "south" : __DIR__"estreet1",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yayi.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
