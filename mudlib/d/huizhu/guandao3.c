// Room: /d/huizhu/guandao3.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
���������Ӿ���������صĹٵ��������Ǿ��Ƿ�������ͨ������
�ء�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huizhu");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"guandao2",
  "northeast" : __DIR__"guandao4",
]));

	setup();
	replace_program(ROOM);
}
