// Room: /d/suzhou/qianzhuang.c

inherit ROOM;

void create()
{
	set("short","Ҧ��Ǯׯ");
	set("long", @LONG
Ǯׯ�ھ����ĵģ����˶���С�ľ����ĸ����Լ����¡���Ȼ���ݵ��ΰ����ã�
���㻹�ǽ�����קס�Լ���Ǯ����������������Ƶġ�Ǯׯ�ϰ����۾�����Ĵ�
�����̣���û��ע�⵽���߽�����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"chengnanjie2",
]));
set("no_fight",1);
	set("objects",([
		__DIR__"npc/yaolaoban":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
