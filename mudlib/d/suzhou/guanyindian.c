// Room: /d/suzhou/guanyindian.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������������̨���Ǹ����ܽ���Ĺ�����һ�����ȱ����ƺ�Ϊ��������
�������ķ���̾ϧ������Ľ���������������Ů���٣�����˵�����Ҳ��ʢ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"huqiushanding",
		"north" :__DIR__"guanyinquan",
]));
	set("objects",([
	__DIR__"npc/xiaoshami":1,
	__DIR__"npc/xiaoheshang" :1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
