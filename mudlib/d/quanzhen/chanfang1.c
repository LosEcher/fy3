// chanfang1.c ����


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	������ȫ��̵��Ӱڷű������������������ҵض���һЩ�����е�
�Ѿ����ư߰��ˣ��еĻ��Ƿ���͸����ȫ�����������ʱ�򣬾͵���������
ѡ���С�
LONG
	);

	set("exits", ([
		"east" : __DIR__"chanfang2",
	]));

	set("objects", ([
		"/obj/weapon/sword":1+random(3),
		"/obj/weapon/thin_sword":1+random(2),
	]));

	setup();
	replace_program(ROOM);
}
