// Room: /d/suzhou/bingqipu.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
ӭ���ǽ���Ϲ���һ�ѳ�����������������Ĺ�â����˵�˽��ǵ�����´�
������ʱ�����С������������΢����ɫ����֪�������˶��ٺ��ܵ���Ѫ������
һλ�������ߣ����Ǳ��̵����ˡ�
LONG
	);
	set("objects",([
		__DIR__"npc/huang" :1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"east":__DIR__"chengbeijie3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
