// liangong.c ������


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
	������ȫ��̵��������ķ��䡣����������״�������أ�ǰխ
�����Ϊ���Σ����߰�Բ������ȴ��������״��ԭ������ȫ��̶���
�������ң�ǰխ���ƣ����ʹȭ����Բ�н������Ƿ��ڡ�������������
���������õ�ľ�ˡ�
LONG
	);

	set("exits", ([
		"south" : __DIR__"houtang2",
		"north" : __DIR__"chanfang2",
	]));

	set("objects", ([
		__DIR__"npc/mu-ren" : 2,
	]));

	setup();
	replace_program(ROOM);
}