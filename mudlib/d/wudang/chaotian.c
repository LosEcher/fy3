// donglang1.c ��������
// by Xiang
// Modified by Marz 03/27/96

#include <room.h>
inherit ROOM;

void create()
{
	set("short", "���칬");
	set("long", @LONG
	������һ����̻Ի͵Ĵ������鳯�칬�������֡�
�ϱ��ǻ�ͷ�ң������������ţ��������������֡�
LONG
	);

	set("exits", ([
                "south" : __DIR__"hutou",
		"north" : __DIR__"santian",
	]));
	
	set("objects", ([
		__DIR__"npc/xi" : 1]));
		
	setup();
}

int valid_leave(object me, string dir)
{
	mapping myfam;
	myfam = (mapping)me->query("family");

	if ((!myfam || myfam["family_name"] != "�䵱��") && dir == "north" &&
		objectp(present("zhang songxi", environment(me))))
	   return notify_fail("����Ϫ�ȵ����㲻���䵱���ӣ��������ڡ�\n");
		
        return ::valid_leave(me, dir);
}
