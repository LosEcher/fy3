// By Mr.music  zhenjiang's �������

inherit ROOM;

void create()
{
	set("short", "�������");
	set("long", @LONG
	�������򽭳����Ĳ�ݣ����������Ŀ��˴��ڴ�Ъ�š���ҪЩ
���ĺͲ�ˮ�����ڴ�С������Ҫ��ϢҲ���Ե�¥���õ�С�������򱱾���
�����ݳǵĶɿڣ���ͨ�����ݳǡ�

LONG
	);

//	set("no_fight", 1);
	set("valid_startroom", 1);
        set("no_sleep_room",1);

//	set("item_desc", ([
//		"paizi" : "¥��������ÿҹ��ʮ��������\n",
//	]));

	set("objects", ([
		__DIR__"npc/xiaoer" : 1,
//                __DIR__"npc/weixiaobao"  : 1,
	]));

	set("exits", ([
		"north" : __DIR__"dukoulu",
		"east" : __DIR__"tosz",
                "up" : __DIR__"chaguan2",
                "south" : __DIR__"nanjie",
	]));

	setup();
//	"/obj/board/mainboard"->foo();
}

int valid_leave(object me, string dir)
{

	if ( !me->query_temp("rent_paid") && dir == "up" && !wizardp(me))
	return 
notify_fail("��С������¥��ǰ����Ц����¥���ǿͷ������ϻ��Ǵ�������!\n");

// if who upstair for post in wizroom , back money to it.

	return ::valid_leave(me, dir);
}
