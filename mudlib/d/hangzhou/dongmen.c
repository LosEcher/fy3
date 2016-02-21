// Room: /d/hangzhou/dongmen.c

inherit ROOM;

void create()
{
	set("short", "���ݶ���");
	set("long", @LONG
�ߴ�����ɫ��ǽ,����Ĳر���.�޲��Գ������ǳص�ս�Ե�λ.
�ſ�ɭ�ϵ��̲�,��������,�ÿ�,�̷�,ʿ��������ų��˳���.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bing.c" : 2,
]));
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"duanqiao",
  "east" : __DIR__"dalu.c",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
