// Room: /d/suzhou/chengnanjie3.c

inherit ROOM;

void create()
{
	set("short", "���Ͻ�");
	set("long", @LONG
������Լ�����߸ߵĳ�ǽ������������ˡ����������ߴ��լԺ������·��
������һ�£�ԭ���½������ķ��ߵꡣ���Ĵ�������һ�£�������ϡ�ɼ�������
Ӱ��Ϧ����ҫ֮�¸��Ե�һ�ɲ�ɣ֮����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"north" :__DIR__"chengnanjie2",
		"south" :__DIR__"chengnanjie4",
		"east" :__DIR__"shuangta",
		"west" :__DIR__"liangongtang",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
