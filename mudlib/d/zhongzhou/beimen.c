// Room: /d/zhongzhou/beimen.c

inherit ROOM;

void create()
{
	set("short", "���ݱ���");
	set("long", @LONG
�����Ѿ��������ݵı����ˣ��߸ߵĳ�ǽ��ש���ﳤ���˲ݡ���
�����ţ��ٹ��˻��Ǻӣ����ǳ����ˡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing.c" : 2,
]));
	set("outdoors", "/d/zhongzhou");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"to_zhongzhou3",
  "south" : __DIR__"wendingbei4",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
