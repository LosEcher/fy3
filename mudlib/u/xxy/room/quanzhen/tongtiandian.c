// tongtiandian.c ͨ���


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "ͨ���");
	set("long", @LONG
	�����ǹ�������֮ĩ--ͨ������Ĵ����ڵ����̲�����ʢ����
ͨ������Ľ����Աߣ����ż�λ�ؽ̵����󳤶��ɡ������ɡ��깫��������
LONG
	);

	set("exits", ([
		"north" : __DIR__"laojundian",
	]));

	setup();
	replace_program(ROOM);
}