// Room: /d/suzhou/tuoman/hua2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�߳���ʮ�ɺ�ֻ��ɽ�軨Ʒ�ֽ�������������ż��Ҳ��һ�������㲻��
ȴҲ�����ֲ����䷨����ׯ�������ԡ����ӡ�Ϊ����ȴ�Ѽ���ɽ�������̣��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south":__DIR__"hua1",
		"west" :__DIR__"hualin1",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
