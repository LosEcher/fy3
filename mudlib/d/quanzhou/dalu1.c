// Room: /d/quanzhou/dalu1.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ����ֱ�����Ĵ�·,·�������������ũ��,ż���ܿ�����ͯǣ��
��ţ��Զ���ι�.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"dongmen",
  "east" : __DIR__"dalu2",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
