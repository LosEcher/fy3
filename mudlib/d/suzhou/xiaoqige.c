// Room: /d/suzhou/woshi.c

inherit ROOM;

void create()
{
	set("short","С�ܸ�");
	set("long", @LONG
��¥�ڰ����ĺܡ����״������������Ŵ������������¯���������ơ�����
���������Ѭ��������˯����Զ��վ����һ����Сͯ���ƺ�׼����������Ϣ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"down" :__DIR__"jinfengzhuang",
]));
	set("objects",([
		__DIR__"npc/xiaotong":1,
]));
	set("no_fight",1);
	set("sleep_room",1);
	setup();
	replace_program(ROOM);
}
