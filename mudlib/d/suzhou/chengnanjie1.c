// Room: /d/suzhou/chengnanjie1.c

inherit ROOM;

void create()
{
	set("short", "���Ͻ�");
	set("long", @LONG
����Ҳ���൱���ֵĵط�������һ��С�������������Щ�¹ڳ�������Ǯ
���Ӹ磬���ڱȽϻ谵����������Щʲô�����������ݳ��ڵ�������ջ��������
ջ�����ֵ��������죬����������㳡��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"taijiannong1",
		"north" :__DIR__"chengzhong",
		"south" :__DIR__"chengnanjie2",
		"west" :__DIR__"kezhan",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
