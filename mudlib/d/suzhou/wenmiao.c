// Room: /d/suzhou/wenmiao.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������ǿ��ƺ������������������ƺ���е�̳��һ������ֱ��������������
�����ڲݵ���Χ�����ȱ������в�������ѧ�ߴ�����ʯ�����ڶ�����ѧ�Ӿ��ڴ˴���
���̸���ۡ���۱ڿ�˼��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"chengnanjie4",
]));
	set("objects",([
	__DIR__"npc/shusheng" :2,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
