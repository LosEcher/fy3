// Room: /d/suzhou/ruiguangta.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
���������ݳ�������ϵ�����������������ʱ�����ഫһλ��ɮ���˴���ʱ��
��ǰͻȻ����һֻ�׹���������ͥԺ�е���ҩ�����ϻ���˫��Ҳ����������������
Ϊ��������顱����������֮��������������ż��������׳�Ϊ��������������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"panmen",
]));
	set("objects",([
	__DIR__"npc/eba":1,
	__DIR__"npc/enu":2,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
