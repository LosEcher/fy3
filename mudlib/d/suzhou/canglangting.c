// Room: /d/suzhou/canglangting.c

inherit ROOM;

void create()
{
	set("short", "����ͤ");
	set("long", @LONG
���Ų�����ͤ�У��������ܻ������ͤ�����ɽ����ĳ��ȡ�԰��ɽ��ʯ��
�������������ף����񱻸����������ң�Ұ�ܴ�������ɫ��������ɽҰ�֡���ͤ��
�߾����������ա������������ɾ�һ�㡣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengnanjie4",
]));
	set("objects",([
	__DIR__"npc/liumang":2,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
