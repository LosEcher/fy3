// Room: /d/new/tianxia/1guan1.c

inherit ROOM;

void create()
{
	set("short", "ʯ��·");
	set("long", @LONG
һ��ƽ���Ĵ��������ĥ��һ���С���ķ���ʯ�̾͡����ߵ�ɽ��
���ȣ��������ţ���·��������һ�ڣ��岽һ�ڣ�ʮ��ɭ�ϡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"1guan2",
  "west" : __DIR__"rollgate",
]));

	setup();
	replace_program(ROOM);
}
