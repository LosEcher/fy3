// Room: /d/suzhou/panmen.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����ʼ������������Ԫ�꣬ˮ½���Ų���������ΰ��½�����ڷ��������أ���
�������ǻ����ɷ����ͳǡ���½����������ˮ�����ǳ������Ψһˮ½ͨ��������
����ˮ����ȫ�����ɻ����ҹ��ɣ��ߴ�ĳ��Ŷ��������Ҵ����ж��롣��·𿴵�
��������˫��ˮ½�������ٴ��˺ӣ��������ǹش�ֻ����ˮ�ŵ�ʢ������
LONG
	);
	set("objects",([
	__DIR__"npc/bingyong":2,
]));
	set("exits", ([ /* sizeof() == 1 */
		"north" :__DIR__"chengnanjie4",
		"southeast" :__DIR__"wumenqiao",
		"east" :__DIR__"ruiguangta",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
