// Room: /d/suzhou/npc/yaopu.c

inherit ROOM;

void create()
{
	set("short", "�ش���");
	set("long", @LONG
�ս����ţ�һ�ɴ̱ǵ�ҩζ���������������ʶ��������ü��ӭ���Ǹ�ҩ��
��С�������ºü��ţ�Ҳ��֪�ղ��˶���ҩ�ġ�������û���õ�Сֽ��ɢ������
�ϡ�һλ���ų��۵����ߺͰ��Ŀ����㡣
LONG
	);
	set("objects",([
		__DIR__"npc/xuemuhua" :1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"chengbeijie2",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
