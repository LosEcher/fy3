// damen.c ����


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "ȫ��̴���");
	set("long", @LONG
	������ȫ����������Ĵ��ţ����������ſ����ţ����Ʋ�������
�Ϲ���һ����(bian)����ǰ��ʯ���Ϲ���һ������(duilian)��
LONG
	);

	set("exits", ([
		"east" : __DIR__"datang1",
		"westdown" : __DIR__"jiaobei",
	]));

set("outdoors","/d/quanzhen");
	set("item_desc", ([
        "bian": HIG"
��������������������������
��������������������������
������ȫ���桡�š���  ����
��������������������������
��������������������������
\n"NOR,
	"duilian": BLINK+HIW"
һ������������������\n
�ط����취��������Ȼ
\n"NOR
	]) );

	set("objects",([
		__DIR__"npc/zhike" : 1,
	]));

	setup();
	replace_program(ROOM);
}
