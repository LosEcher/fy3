// Room: /d/suzhou/tuoman/hongxia.c

inherit ROOM;

void create()
{
	set("short","��ϼ¥");
	set("long", @LONG
ԶԶ�Ϳ�������¥���ϵġ���ϼ¥������ī��׭�֡�¥��ǰ������Ҳ���ֵ�
�軨��ֻ������Ļ����÷ʷʴ������ʧȥ���յ���ò��Ҳ���Ƿ���̫Ũ��Ե
�ʡ�����֮�а߰ߺ켣�����л�������˿˿Ѫ��֮����
LONG
	);
	set("objects",([
		__DIR__"npc/tang":1,
]));
	set("exits", ([ /* sizeof() == 1 */
		"south":__DIR__"ru3",
]));
	set("outdoors","suzhou");
	set("no_steal",1);
	setup();
	replace_program(ROOM);
}
