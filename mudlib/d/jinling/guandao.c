// Room: /d/jinling/guandao.c

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
  "south" : __DIR__"guandao1",
  "north" : __DIR__"chengmen",
]));
set("outdoors","/d/jingling");

	setup();
	replace_program(ROOM);
}
