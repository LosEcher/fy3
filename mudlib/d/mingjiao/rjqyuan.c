//RJQYUAN.C

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG
���߽��������Ĵ�Ժ��ȴ����������Ӱϡ�裬��������
�����˵Ĵ�������ȴ�����������̣��������ƺ��Ǵ���Զ�ĵ�
�´����ġ������ߣ���Ҫ������¥�ˡ�Ժ�����׿��������䳡��
��Լ����������������һ��������������������᳡����
LONG
	);

	set("exits", ([
//              "west" : __DIR__"rjqmenlou1",
		"north" : __DIR__"rjqdating",
		"south" : __DIR__"rjqlwch",
		"out":__DIR__"rjqmen",
	]));
/*
        set("objects",([__DIR__"npc/lengqian":1,
        		__DIR__"npc/shuobude":1,
		        __DIR__"npc/zhangzhong":1,
		        __DIR__"npc/pengyingyu":1,
		        __DIR__"npc/zhoudian":1,
		        __DIR__"npc/yinyewang":1,
			]));
*/
	set("outdoors", "mingjiao");
	setup();
	replace_program(ROOM);
}
