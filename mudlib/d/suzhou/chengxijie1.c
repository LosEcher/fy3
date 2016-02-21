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
		"west" :__DIR__"xichengmen",
		"east" :__DIR__"chengxijie2",
]));
	set("objects",([
		__DIR__"npc/dipi":1,
		__DIR__"npc/xiaofan" :1,
]));
	set("outdoors","suzhou");

	setup();
	replace_program(ROOM);
}
