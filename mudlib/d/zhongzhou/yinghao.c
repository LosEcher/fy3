//yinghao


inherit ROOM;

void create()
{
	set("short", "Ӣ����¥");
	set("long", @LONG
�������ݳ����ľ�¥�����������Ĺ��Ͷ�Ҫ�ڴ�ЪЪ�ţ��Ⱥ��þ�
��˵��׼���ύ��һ�������ѡ�����ͦ�����������������м��������
��(zi)����Ҫ��Ҫ������С�ۣ�¥�ϻ�����������˵¥�ϻ�����Ϣ�ң�ר
��Ϊ����Щ�е�̰������׼���ġ�
LONG
	);

	
 set("valid_startroom", 1);
 	set("exits", ([
		"west" : __DIR__"wendingbei1",
                "south" : "/u/lxh/dufang",
	        "up"   : __DIR__"yinghaoup",
]));

	set("no_fight",1);
	set("no_sleep_room",1);
set("objects", ([
__DIR__"npc/wudalang":1,
]));

 set("item_desc", ([
                "zi" :
"
        ********                        ********
        *      *                        *      *
	*  ��  *			*  ��  *
        *      *                        *      *
        *      *                        *      *
	*  ��  *			*  ��  *
        *      *                        *      *
        *      *                        *      *
	*  ��  *			*  ��  *
        *      *                        *      *
        *      *                        *      *
	*  ��  *			*  ��  *
        *      *                        *      *
        ********                        ********

 \n"]));

	setup();
        "/obj/board/board"->foo();
}
