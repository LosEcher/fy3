
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����һ����������ƽ���Ƶĵ��̣�һ����߸ߵĹ�̨�������
��ǰ����̨�ϰ���һ������(paizi)����̨�����ŵ����ϰ�������һ
˫�������۾��������´������㡣
LONG
	);
	set("no_beg",1);

	set("item_desc", ([
		"paizi" : "��ƽ����\n",
	]));
	set("exits", ([
                "north" : __DIR__"xijie",
	]));
        set("objects" , ([
            __DIR__"npc/yanliu" : 1,
        ]));

	setup();
	replace_program(ROOM);
}

