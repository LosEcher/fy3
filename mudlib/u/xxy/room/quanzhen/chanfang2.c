// chanfang2.c ����


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	������ȫ������������ԡ��������ĵط���Ϊ�˷�������������
��û�аڷţ������ڵ��¶��˼���С���š�
LONG
	);

	set("exits", ([
		"east" : __DIR__"chanfang3",
		"west" : __DIR__"chanfang1",
		"south" : __DIR__"liangong",
	]));

	setup();
	replace_program(ROOM);
}