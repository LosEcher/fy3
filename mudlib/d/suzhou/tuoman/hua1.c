// Room: /d/suzhou/tuoman/hualin.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���Ų����ͣ�ֻ�������г�ɽ������ޱ������ܣ��������ǣţ������
�º졢Ǿޱ֮��Ҳ��һ�䶼�ޡ�����ֲɽ��ȴƽƽ���棬Ψһ�ô�ֻ�ǵ��˸�
���ࡱ�֡�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south":__DIR__"tuoman",
		"north":__DIR__"hua2",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
