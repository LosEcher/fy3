// Room: /d/quanzhou/dalu3.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ��������ֱ�Ĵ�·,·����һƬƬ���,��·���˿�ʼ�ֲ�,��·
��ʼ���Ϲչ�,����һ��С·�򶫱���ȥ.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"wuliqiao",
  "northeast" : __DIR__"xiaolu",
  "west" : __DIR__"dalu2",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
