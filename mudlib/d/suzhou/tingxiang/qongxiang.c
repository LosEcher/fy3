// Room: /d/suzhou/qongxiang.c

inherit ROOM;

void create()
{
	set("short", "����ͤ");
	set("long", @LONG
����һ����ɫ�����Сͤ��������̫��֮�ϡ������Ĵ���ããˮɫ��΢��ϰ
ϰ������ˮ�㡣���Ǹ�����̫�����������ĵĺõط����㲻����̾��ͬ��������
Ϊ�λ������֮���
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south":__DIR__"ru8",
		"east" :__DIR__"wuxue",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
