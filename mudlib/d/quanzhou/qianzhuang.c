// Room: /d/quanzhou/qianzhuang.c

inherit ROOM;

void create()
{
	set("short", "Ҧ��Ǯׯ");
	set("long", @LONG
Ҧ��Ǯׯ��ȫ�����зֺ�,�˴���Ȫ�ݷֺ�,��������һ����̨.Ҧ
�ϰ���������̨,��Ȼ����Ǯ������������.
LONG
	);
	set("no_clean_up", 0);
set("no_fight",1);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"wstreet1",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yaolaoban.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
