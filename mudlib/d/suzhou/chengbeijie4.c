// Room: /d/suzhou/chengbeijie4.c

inherit ROOM;

void create()
{
	set("short", "�Ǳ���");
	set("long", @LONG
����ߵ��⣬�����������������������������ƺ��������š����ˡ���ľ��
֮������˳��������ȥ��������ǰһ���ϸߵ����ţ����������������֡�����
�¡����������߿�ȥ��ֻ������ǽ���ߡ�������ש��һ��ׯ԰���ֵ��ϱ����죬
���������Ǳ�ƽ���ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
		"south" :__DIR__"chengbeijie3",
		"north" :__DIR__"beipingmen",
		"west" :__DIR__"baoensi",
		"east" :__DIR__"zhuozhengmen",
]));
	set("objects",([
		"/npc/man3":2,
	]));
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
