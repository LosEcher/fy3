//bye enter 

inherit ROOM;
inherit F_DEALER;

void create()
{
        set("name", "���Ӿ�¥");
        set("short", "���Ӿ�¥��¥");
	set("long", @LONG
�����ڳɶ�������ľ�¥�ϣ�����¥�µķ���ææµµ��
���������죬��ν���ԾƵ��裬�������Ρ�������ԥʲô��
�������ϺõĻ���ưɣ�ǽ�Ϲ��ż۸�����(paizi)��
LONG
	);

	set("item_desc", ([
		"paizi" : "������ۿ�Ѽ���ϵȻ���ơ�\n",
	]));

	set("exits", ([
                "down" : __DIR__"jiulou1",
	]));
        set("objects", ([
                  __DIR__"obj/chair" : 4,
                   ]));

	setup();
	replace_program(ROOM);
}
