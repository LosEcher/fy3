// Room: /d/suzhou/chengbeijie3.c

inherit ROOM;

void create()
{
	set("short", "�Ǳ���");
	set("long", @LONG
�ֶ����������˽���������æ�ú�ˮ��ʪ͸���������������԰���һЩ��
���ų��������Ҹ���һ��ʯʨ�������Ϻô�һ�����䡱�֣����ڻ���ʱ��������
ײ��֮�����ֵ��ϱ����죬�������˲��ϡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"chengbeijie2",
		"east" :__DIR__"daoxiangcun",
		"west" :__DIR__"bingqipu",
		"north" :__DIR__"chengbeijie4",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
