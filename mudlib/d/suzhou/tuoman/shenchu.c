// Room: /d/suzhou/tuoman/shenchu.c

inherit ROOM;

void create()
{
	set("short", "ɽׯ�");
	set("long", @LONG
��ܿ����⣬ֻ���������ȥ��ת��һ��Сɽ��ֻ����Ϫˮ���ȣ�����
һ���̵ƣ������������ľ����õ���ɽ��֮�����չ����䲻���������ֲ軨��
�õط���
LONG
	);
	set("objects",([
		__DIR__"npc/wangyuyan":1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"huapu",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
