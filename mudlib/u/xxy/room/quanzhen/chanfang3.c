// chanfang3.c ����


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
		"east" : __DIR__"xiaohuayuan2",
		"west" : __DIR__"chanfang2",
	]));

	setup();
	replace_program(ROOM);
}