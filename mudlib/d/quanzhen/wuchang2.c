// wuchang2.c �䳡


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "�䳡");
	set("long", @LONG
	������ȫ��̵����䳡�����µ���ש�����̵��������룬ȴ��
֪����˭�ȳ��˼�ʮ�����СС�İ��ӡ����ĳ���������������µ���
���������Ʒ��������쳤�վã����¾Ͳȳ��˰��ӡ��䳡�������ż���
�����õ�ľ�ˡ�
LONG
	);

	set("exits", ([
		"north" : __DIR__"wuchang1",
		"east" : __DIR__"xiuxishi",
		"southeast" : __DIR__"shantang",
	]));
set("outdoors","/d/quanzhen");

	set("objects", ([
		__DIR__"npc/mu-ren" : 2,
	]));

	setup();
	replace_program(ROOM);
}
