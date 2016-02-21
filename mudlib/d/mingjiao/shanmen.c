// Room: /d/mingjiao/shanmen.c
// Date: XXL 97/04/3

#include <room.h>
inherit ROOM;

void create()
{
    set("short", "����ɽ��");
    set("long", @LONG
һ���޴����Ȼʯ�ź������Ƭɽ��֮�䣬ʯ�����Ϸ�����
��������������֣������̡����ּ���Щ���䣬����ȥ�����Զ��
��λ��ʮ����Ĵ��ֳָֽ�����ɽ�����ࡣ
LONG
    );

    set("exits", ([
        "westup" : __DIR__"shanlu1",
        "east" : __DIR__"tomen1",
    ]));

    set("valid_startroom","1");    
    set("outdoors", "mingjiao");
    set("objects",([
        __DIR__"npc/menwei1" : 2,
//	__DIR__"npc/jieyinshi":1,
        __DIR__"npc/chengchaofeng":1,
    ]));
    setup();
//    replace_program(ROOM);
}

int valid_leave(object me, string dir)
{
	string bh;
	object npc;

	bh=(string)me->query("banghui");
	npc=present("da han",this_object());

	if( bh && bh!="����" && dir=="westup" && objectp(npc))
	return notify_fail("��������ס��������̹̽��������Ǳ��̵��Ӳ������ڣ�\n");
    return ::valid_leave(me, dir);
}
