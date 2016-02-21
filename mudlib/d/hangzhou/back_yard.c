// Room: /d/hangzhou/back_yard.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG
������䳡�������õĺ���,���������ֲ����,���ϰ��ż���ʯ��. 
���������������ű���������ʽ.����Ŀյ������ż���ľ׮(logs)���� 
�������ɸ���ɳ��(pits)��������һ���᷿,��������Ϣ. 
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dizi.c" : 2,
]));
	set("item_desc", ([ /* sizeof() == 2 */
  "pits" : "ɳ������Щ����������ϰ�Ṧ����Ҳ������(tiao)��ȥ���ԡ� 
",
  "logs" : "����ľ׮���в��ٱ�������ĺۼ�(da)�� 
",
]));
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"dating.c",
  "east" : __DIR__"sleep_room.c",
]));

	setup();
	replace_program(ROOM);
}
