// By Mr.music  zhenjiang's �ɿ�·

inherit ROOM;

void create()
{
	set("short", "�ɿ�·");
	set("long", @LONG
	��������ͨ��ȥ���ݳǵĶɿڣ������Ǳ����������Ĵ�����ݡ�
LONG
	);

	set("valid_startroom", 1);
        set("no_sleep_room",1);

//	set("item_desc", ([
//		"paizi" : "¥��������ÿҹ��ʮ��������\n",
//	]));

	set("objects", ([
		__DIR__"npc/nanhai" : 1,
                __DIR__"npc/nuhai"  : 1,
	]));

	set("exits", ([
		"north" : __DIR__"dukou",
		"south" : __DIR__"chaguan",
	]));

	setup();
//	"/obj/board/mainboard"->foo();
}

