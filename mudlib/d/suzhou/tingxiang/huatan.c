// Room: /u/oldsix/room1/huatan.c

inherit ROOM;

void create()
{
	set("short", "��̳");
	set("long", @LONG
δ����̳�����ŵ�����Ļ��㡣���������˸�����������򻨣����ǡ�����
ˮ鿡������˰���Ӹ��زɹ������ģ������ר���л�����ֲ���ϡ�
    �����ǳ���������ͨ��������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"yuemen",
		"east":__DIR__"chufang",
]));
	set("objects",([
		__DIR__"npc/huajiang":1,
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
