// xiaoyuan.c ��ɽСԺ
// by Xiang

#include <room.h>
inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
	���Ǻ�ɽ��һ��СԺ�����ü�򵥵�������һ����һ����һ�Ρ�һ���ţ�
��Ҳû�б��ʲ��Ƚ�����עĿ����ǽ�Ϲ���һ�ѽ�����������䵱��ɽ��ʦ
��������������ڡ���Ϊ�����������᳣ס�ĵط������ǰ����������
LONG
	);

	set("exits", ([
		"south" : __DIR__"xiaolu2",
	]));
	set("objects", ([
		__DIR__"npc/zhang" : 1 ]));
	setup();
}

