// Room: shiliang.c ʯ��
// arnzh 97/1/24
inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
	    ������������,�����վ�,�����ƺ����˶�վ����,
�䵱���Ӿ�����������ϰ�Ṧ.
LONG
	);

	set("exits", ([
		"west" : __DIR__"tyroadct",
	]));

	set("objects", ([
		__DIR__"npc/zhangcuishan" : 1
       ]));

	setup();
	replace_program(ROOM);
}

