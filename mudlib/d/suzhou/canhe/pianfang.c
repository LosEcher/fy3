// Room: /d/suzhou/canhe/pianfang.c

inherit ROOM;

void create()
{
	set("short", "ƫ��");
	set("long", @LONG
���������ǻҳ���������Լ�е���ӡ���ݵ�������������ܣ���������˸�
���鼮������һ������������������Ŵ���Ҳ��֪���û������˯���ˡ�������
��ǽ������ż������С�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"miru3",
]));
	set("objects",([
	__DIR__"npc/obj/book"+random(2):1,
	__DIR__"npc/obj/book"+random(2):1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
