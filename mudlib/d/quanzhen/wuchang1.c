// wuchang1.c �䳡


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "�䳡");
	set("long", @LONG
	������ȫ��̵����䳡�����µ���ש�����̵��������룬ȴ��
֪����˭�ȳ��˼�ʮ�����СС�İ��ӡ����ĳ���������������µ���
���������Ʒ��������쳤�վã����¾Ͳȳ��˰��ӡ�
LONG
	);

	set("exits", ([
		"south" : __DIR__"wuchang2",
		"north" : __DIR__"houtang2",
		"southeast" : __DIR__"xiuxishi",
	]));

set("outdoors","/d/quanzhen");
	setup();
	replace_program(ROOM);
}
