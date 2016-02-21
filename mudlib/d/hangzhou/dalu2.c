// Room: /d/hangzhou/dalu2.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ�������Ĵ��,�����������ﲻ��,�ɴ��򱱿��Ե����㶫��ɽ��
�㵴���ϱߵ�һ��С·����������÷������ͷ���Ǻ���÷ׯ��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"dalu3",
  "northeast" : "/d/yandang/jiedao1",
  "west" : __DIR__"dalu.c",
]));
	set("outdoors", "/d/hangzhou");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chungu.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
