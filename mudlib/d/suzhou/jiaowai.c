// Room: /u/oldsix/room1/jiaowai.c

inherit ROOM;

void create()
{
	set("short", "���ݽ���");
	set("long", @LONG
�����������ӻ��о�������������ů����Ĵ��紵�����ϣ���������������
�㲻���ѿ�������[1;32m�����죬���������´巼��Զ��б���ӻ��ɡ�[2;37;0m����ˮ��һɫ��
�������󡣶�����ϡ�������ݳ��š�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"baigongti",
		"east" :__DIR__"xichengmen",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
