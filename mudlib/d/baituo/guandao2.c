// Room: /d/baituo/guandao1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
������·�ϼ���������ʲô���ˣ��㲻�ɼӿ��˲�����
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "southeast" :"/d/dali/todali",
  "northwest": __DIR__"guandao1",
]));
	set("outdoors", "baituo");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
