
// By Mr.music  zhenjiang's ����·

inherit ROOM;

void create()
{
	set("short", "����·");
	set("long", @LONG
	������ͨ�����ݵ�����·��һ����������������������ˮ�˵ķ��
���･�������ˣ����Ͻ�����˵��̫��ȫ����Ǯ�˶��Ĵ�������ˮ·�ˡ�
LONG
	);

	set("valid_startroom", 1);
        set("no_sleep_room",1);

//	set("item_desc", ([
//		"paizi" : "¥��������ÿҹ��ʮ��������\n",
//	]));

	set("objects", ([
		__DIR__"npc/xiaofan" : 1,
	]));

	set("exits", ([
		"east" : "/d/suzhou/guandao4",
		"west" : __DIR__"chaguan",
	]));

	setup();
//	"/obj/board/mainboard"->foo();
}

