// Room: /d/suzhou/xiaolu1.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
������һ���Ӳݴ�����С·�ϣ�·���Ͻ�ӡ���ص����ɼ�����֮����ʵ���١�
̧ͷֻ���������ֳ�һ��Сɽ��ɽ��������׻�״����ؾ������������ġ�����
ɽ���ˡ�ɽ��һ������ֱ�����������ǡ����������ɡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
]));
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"qingshiru2",
		"northwest" :__DIR__"huqiushanxia",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
