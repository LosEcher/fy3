// Room: /d/quanzhou/nstreet1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
Ȫ�ݳǵı���ӵ���Ÿ�ɫ��������Ⱥ,���µ���ũ����ţ�����Ƶ� 
�߹�,����Ь�ĺ���������ߺ��.�����ֵ������ޱ�. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"citang",
  "south" : __DIR__"nstreet2",
  "north" : __DIR__"bei-door",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiangshi.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
