// Room: /d/suzhou/huqiuta.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�����ഫ�������������������������̧ͷ�����������ƺ�����û���Ʋ�֮
�С�����������������ʤ�����ҽ�����Ϊ�����ݳǵ�����������ϸ�Ĺ۲���һ�£�
���ֻ��������Ǳ�ֱ��������΢����б�������������Ҳ�Ǵ���������ԭ��ɡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"eastdown" :__DIR__"guanyinquan",
]));
	set("objects",([
	__DIR__"npc/hutawuseng":2,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
