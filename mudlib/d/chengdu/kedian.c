// by enter

#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "���տ͵�");
        set("long", 
"������һ�����ֺŵĿ�ջ��ո�µ������ŵ������룬����һ\n"
"��������������һ�������������������ǿ�ջ�ĳ��������ϱ�\n"
"��ǽ�ڱ�����һ��ͨ����¥��¥�ݣ��ſ�һ���̽�Ĵ�������д\n"
"���ĸ����֡����տ�ջ����"HIG"���滹�и���Ժ��������������ֱ\n"
"�ӻ�����ȥ��(goyangzhou)"NOR"ǽ�ϻ��и����ӡ�(paizi)\n"
        );

        set("valid_startroom", 1);
        set("no_sleep_room",1);

        set("item_desc", ([
                "paizi" : "���տ͵꣬ȫ����������ȫ���ʣ�������顣\n",
        ]));

        set("objects", ([
                __DIR__"npc/qiuwa" : 1,
        ]));

        set("exits", ([
                "south" : __DIR__"dongjie1",
                "up" : __DIR__"kedian2",
        ]));

        setup();
}

int valid_leave(object me,string dir)
{
   object ob;

   ob=present("qiu wa",this_object());
   if (dir=="up" && ob && !me->query_temp("rent_paid"))
        return notify_fail("���޵���ס��Ļ�Ҫ����(give)����������ͬ�����ֻҪһ��ɡ�\n");
   if ( dir=="south" && me->query_temp("rent_paid"))     me->delete_temp("rent_paid");
   return ::valid_leave(me,dir);
}

void init()
{
	add_action("to_yangzhou","goyangzhou");
}

int to_yangzhou()
{
	object npc,me=this_player();
	string bh;

	npc=present("qiu wa",this_object());
	if( !objectp(npc))	return notify_fail("���޲��������������˵�ɡ�\n");
	if( !living(npc))	return notify_fail("����Ȱ�����Ū�ѡ�\n");
	bh=(string)npc->query("banghui");
	if( bh && bh==(string)me->query("banghui"))	{
		tell_object(me,"����˵�����ú�Ժ�г������ݣ�����һ�̰�.\n");
		say(me->query("name")+"�������޵���Ժ�ˡ�\n");
		me->move(__DIR__"houyuan");
	}
	else 	tell_object(me,"���޵�������æ���أ��´�һ������ȥ���ݡ�\n");
	return 1;
}

