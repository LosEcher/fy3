// Room: /d/quanzhou/wstreet1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������Ȫ�ݳǵ�����,��ʱ�йٻ��˼ҵ�Ů�����˽����������ȥ. 
������������,Ҳ������д�������. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"qianzhuang",
  "east" : __DIR__"nstreet3",
  "west" : __DIR__"wstreet2",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/daoren.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
