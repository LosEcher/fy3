// Room: /d/suzhou/chengxijie.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
��һ�����ֵĽֵ������������������ˡ����ӻ���С�������ʽ���յ����ˡ�
ǰ�������·�ˡ�͵�������ĵ�Ʀ�����Ǽ����¸�ʽ�������������Ժ���
��ʱ�����ڡ��������ã������պ�����仰��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengxijie1",
		"east" :__DIR__"chengxijie3",
]));
	set("outdoors","suzhou");
	set("objects",([
		__DIR__"npc/nayouke" :1,
		__DIR__"npc/nuyouke" :1,
]));

	setup();
	replace_program(ROOM);
}
