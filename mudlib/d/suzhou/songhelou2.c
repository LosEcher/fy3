// Room: /d/suzhou/songhelou2.c

inherit ROOM;

void create()
{
	set("short", "��¥");
	set("long", @LONG
��վ��¥���Ĵ��������ų����������۵ס�����������ɽ�Ϲ�����Լ�ɼ���
΢������ƺ�����̫��������ˮ�㡣¥�ϰ��ż�����������������ī����������
Ҳ�����˴������õļ����ϵ�¥�������������ѻ���ӭ�˹�����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"down" :__DIR__"songhelou",
]));
	set("objects",([
		__DIR__"npc/paotang" :1,
	]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
