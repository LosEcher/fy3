// Room: /d/suzhou/shuangta.c

inherit ROOM;

void create()
{
	set("short", "˫����");
	set("long", @LONG
����˫������ͦ�Σ�ǡ����֧���ŵıʣ���߷��ϣ���ǰ����ƽ����Ϧ����
�£���Ӱб�����棬����ʼܣ� ���Ķ������ķ��������¥������һ����ī����
��ν��˫��Ϊ�ʣ���¥Ϊī�������ش�˫�����ڱ�����䣬һΪ����һΪ���¡�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengnanjie3",
		"east" :__DIR__"gongdeta",
]));
	set("objects",([
		__DIR__"npc/baobiao":2,
		__DIR__"npc/makepilo":1,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
