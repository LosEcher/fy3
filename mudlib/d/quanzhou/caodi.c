// Room: /d/quanzhou/caodi.c

inherit ROOM;

void create()
{
	set("short", "�ݵ�");
	set("long", @LONG
����һƬ������Ĳݵ�,���ڲݵصı�Ե,�������ʯ�������һ��
΢�紵��,ʯͷ�ͻζ�����,ϸ����,ʯ�ϻ�����һЩ��'����̺','��Ȼ
���'��.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xiaolu",
  "north" : __DIR__"shengmu",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
