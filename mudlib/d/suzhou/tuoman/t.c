// Room: /d/suzhou/tuoman/tuoman.c

inherit ROOM;

void create()
{
	set("short", "����ɽׯ");
	set("long", @LONG
һ��������ȥ�����Ǻ���ͷ׵Ĳ軨���������ݡ�ɽ�軨��������������
Ϊ�����������֮Ϊ����衱��ɽ�軨�������������и����ֽ��������޻���
��ׯ������Ϊ��������в��پ�Ʒ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"down":__DIR__"huan",
		"north":__DIR__"hua1",
]));
	set("objects",([
		__DIR__"npc/yahuan":1,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
