// Room: /d/suzhou/songhelou.c

inherit ROOM;

void create()
{
	set("short", "�ɺ�¥");
	set("long", @LONG
�ɺ�¥Ϊ�����հ�˹ݣ�ʼ����Ǭ¡��䡣��˵Ǭ¡�ʵ��½���ʱ��������
��¥���ɺ�¥Ҳ��Ǭ¡ʼ����������Ӷ������ųǡ�¥�������������������
�����������ߺ�������һƬ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"chengbeijie1",
		"up" :__DIR__"songhelou2",
]));
	set("objects",([
		__DIR__"npc/xiaohuoji":1,
		]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
