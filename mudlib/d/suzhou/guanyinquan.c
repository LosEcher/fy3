// Room: /d/suzhou/guanyinquan.c

inherit ROOM;

void create()
{
	set("short", "����Ȫ");
	set("long", @LONG
���Ų��߽��������Ժ��ֻ��Ժ����������Щ������ð����ѿ��Ժ��һ��
ʯ���ϰ��Ÿ��о֣����ǵ��ں�������ʱ���µġ�Ժ��һ��Ȫ����Ȫˮ��䣽�Ө��
��������µ���Ȫ�ˡ�Ժ���徲���ţ�������ס�²����ˡ�
LONG
	);
	set("objects",([
	__DIR__"npc/xinnan":1,
	__DIR__"npc/xinnu"	:1,
]));
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"guanyindian",
		"westup" :__DIR__"huqiuta",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
