// cundaota2.c ���������


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "���������");
	set("long", @LONG
	�����Ǵ�����Ķ��㣬���������������������졣����տ���Ҳ��
����Ҳ��ȫ��ȫ������ǽ�ȥ�Ķ��ˡ�
LONG
	);

	set("exits", ([
		"eastup" : __DIR__"cundaota3",
		"eastdown" : __DIR__"cundaota1",
	]));

	setup();
	replace_program(ROOM);
}