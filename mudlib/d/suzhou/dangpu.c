// Room: /d/suzhou/npc/dangpu.c

inherit ROOM;

void create()
{
	set("short", "�ܺ͵���");
	set("long", @LONG
������ʮ�ְ�����һ�˶�ߵĹ�̨���ž���������ͭƤ���Եú������ɡ���
�����֮ǰ������������֮���ԩ��������ҵ֮�󣬱�Ѻ��������������У���
�Ը��������˸����ܺ͡������֡�����ǰЩʱ��Ϊ��Щ�������ⱻ�ݸ�����ˡ�
�������ٺ��ؿ��ˡ�

LONG
	);
        set("objects", ([
		__DIR__"npc/ye" :1,
        ]) );

set("no_steal",1);
//	set("objects",([
//		__DIR__"npc/ye.c" :1,
//	]));
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengbeijie2",
]));
	set("no_clean_up", 0);

	setup();
	 replace_program(ROOM);
}
