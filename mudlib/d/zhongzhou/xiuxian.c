//xiuxian
  

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
һ���������ĵĴ�����ӭ�濴������һ�ɼ�����һ��������ԡͼ����
�ϵĵ�̺������ģ��㲻����������Ϣһ�¡����������д��Ů��,����
���Ե��б��Ĵ������м���������ԡ��ֱ�������������ȥ�ˡ�
LONG
	);

	set("exits", ([
		 "east" : __DIR__"wendingnan3",
		"west" : __DIR__"fuwu",
		"north" : __DIR__"nubin",
		"south" : __DIR__"nanbin",
]));
	set("objects", ([
		__DIR__ "npc/datangfuli.c" :1,

]));
	setup();
       
}
int valid_leave(object me,string dir)
{
if((me->query("gender")=="����"&&dir=="north")||(me->query("gender")=="Ů��"&&dir=="south"))
        return notify_fail("������������ߣ���\n");
        if(dir=="east")        return  ::valid_leave(me,dir);

	 if(dir=="west")    return  ::valid_leave(me,dir);      
if((me->query("gender")=="����"&&dir=="south")||(me->query("gender")=="Ů��"&&dir=="north"))
	return ::valid_leave(me,dir);
}
