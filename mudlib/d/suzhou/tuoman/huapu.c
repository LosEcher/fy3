// Room: /d/suzhou/tuoman/huapu.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������ֲ�Ÿ���ɽ�裬���ǡ����ӡ�ɽׯ�����˷Ѿ���˼�Ӹ������޶����ģ�
���в�����Ʒ��ֻ��ϧ�ַ�����������ʧȥ���ұ�ɫ���㿴��ֻ�а���̾Ϣ���ѡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"lukou",
		"east":__DIR__"shenchu",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
