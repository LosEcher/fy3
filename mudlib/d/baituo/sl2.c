// Room: /d/baituo/sl1.c

inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
�������ϡ�٣�����ͨ����Į��������ɽ��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "southeast" :__DIR__"guandao1",
  "northwest":__DIR__"sl1",
]));
	set("outdoors", "baituo");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
