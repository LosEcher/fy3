// huizhentang.c ������


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
	�����Ǵ����Աߵ�һ��������Ҳ�ǽӴ���Ҫ���˵ĵط���������
ֻ�ڷ���һ�����Ӻͼ������ӡ����ϰڷ���һ������ɽʯ���辰��ǽ���Ϲ�
��һЩ�ֻ���
LONG
	);

	set("exits", ([
		"east" : __DIR__"cetang",
		"north" : __DIR__"wanwutang",
		"south" : __DIR__"datang1",
	]));


	//set("objects",([
	//	__DIR__"npc/daotong" : 1+random(3),
	//]));

	setup();
	replace_program(ROOM);
}