// Room: /d/jinling/guandao1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
����һ���ɹٸ�����ĵ�·���ȽϿ�����������������
һ����ȥû�о�ͷ��·�ϲ�ʱ����������������·����
ʹ�㲢������ʮ�ֹµ���
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"guandao",
  "south" : __DIR__"guandao2",
]));
set("outdoors","/d/jingling");

	setup();
	replace_program(ROOM);
}
