// nairongdian.c ���ݵ�


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "���ݵ�");
	set("long", @LONG
	�����Ǵ����Աߵ�һ����Ҳ�ǽӴ���Ҫ���˵ĵط������
ֻ�ڷ���һ�����Ӻͼ������ӡ����ϰڷ���һ����ɽ�������辰��ǽ���Ϲ�
��һЩ�ֻ���
LONG
	);

	set("exits", ([
		"south" : __DIR__"qingjing",
		"west" : __DIR__"piandian",
		"north" : __DIR__"datang3",
	]));

	setup();
	replace_program(ROOM);
}