// Room: /d/quanzhou/chayuan.c

inherit ROOM;

void create()
{
	set("short", "��԰");
	set("long", @LONG
���������,����һ������,��̧��ϸ��,����һƬ��԰,����� 
ʶ���Ļ�,�ᷢ���������'��Ҷ�����,����������'֮�Ƶ���������. 
Զ������¶��һ�����ѵĳ�ǽ. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"bei-door",
  "northwest" : __DIR__"bixiao-stone",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chagirl.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
