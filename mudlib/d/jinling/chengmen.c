// Room: /d/jinling/chengmen.c

inherit ROOM;

void create()
{
	set("short", "�ϳ���");
	set("long", @LONG
������Ǿ������ţ��������Ʋ�̫�ȶ��������ⳣ����ɼ������̶���
����Ѫ�¼������Գ��ſڱ����ܶ࣬�Թ���֮���̲���ϡ�
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/yinjiaweishi.c" : 1,
  __DIR__"npc/weibing.c" : 4,
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"changjie.c",
  "south" : __DIR__"guandao",
]));
	set("outdoors", "/d/jingling");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
