// Room: /d/zhongzhou/yizhan.c

inherit ROOM;

void create()
{
	set("short", "��վ");
	set("long", @LONG
���������ݳǵ���վ�������վ���󣬼����ʲ���æ�������ż�����
������Ż�����Ÿ�˭�Ļ����������￴����
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/yangzhou/npc/youchai.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wendingnan4",
]));

	setup();
	replace_program(ROOM);
}
