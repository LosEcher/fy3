// Room: /d/suzhou/chengnanjie2.c

inherit ROOM;

void create()
{
	set("short", "���Ͻ�");
	set("long", @LONG
����ߵ�������̱����ߴ��������������������ˡ�̧ͷ��ȥ��ֻ��һ��
��ɫ�������Ժ�����ڶ��ף��������������ڳ����������Ź⡣������Ե���
�����׸�����Ǯׯ���ֵ��ϱ����죬·�����˲��ϡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"north" :__DIR__"chengnanjie1",
		"south" :__DIR__"chengnanjie3",
		"west" :__DIR__"qianzhuang",
		"east" :__DIR__"tianlongge",
]));
	set("objects",([
		"/npc/man4":1,
	]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
