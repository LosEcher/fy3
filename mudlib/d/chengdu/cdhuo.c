// Room: /city/zahuopu.c
// YZC 1995/12/04 

inherit ROOM;

void create()
{
	set("short", "�ӻ���");
	set("long", @LONG
����һ��СС���ӻ��̣�����С�������һ�أ�����һЩ��
����Ʒ�����ƹ������������һֻ�����ϣ��к��Ź������ˡ���
˵˽������Ҳ��һЩ���صĶ�����̯������һ������(zhaopai)��
LONG
	);

	set("item_desc", ([
		"zhaopai": "���� \"list\" �г������\"buy\" ���ϰ幺�\n",
	]));
	set("exits", ([
                "south" : __DIR__"xijie2",
	]));
	set("objects", ([
                __DIR__"npc/wangnpc": 1,
	]));

	setup();
	replace_program(ROOM);
}

