// Room: /d/suzhou/npc/chengbeijie1.c

inherit ROOM;

void create()
{
	set("short", "�Ǳ���");
	set("long", @LONG
�����ǼҾ�¥������������Ҳ��ʵ���֣�һ��Ƶ׽�ߵĽ������Ʈ���
�������������֡��ɺ�¥����������Ʈ������Բ��ĸ������ڡ����˶��ˡ�����
�������¸����˻س��������ֵ������죬�����ǳ��й㳡��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east" :__DIR__"sizhuxuan",
		"south" :__DIR__"chengzhong",
		"north" :__DIR__"chengbeijie2",
		"west" :__DIR__"songhelou",
]));
	set("objects",([
		__DIR__"npc/feizei":1,
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
