// Room: /d/quanzhen/xiaolu11.c

inherit ROOM;

void create()
{
	set("short", "��ɽС·");
	set("long", @LONG
	�����Ǻ�ɽ�ϵ�С·������С·�������˹������޳����ģ�
Ҳ��ֻ����ǰ�Ĳ�ҩ�˲ȶ��ˣ��ֳ�����һ��С·�����ߵ������
������·�ˡ����������ƺ���һ����ɽ��·��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"xiaolu11.c",
  "north" : __DIR__"xiaolu11.c",
  "west" : __DIR__"xiaolu10",
  "east" : __DIR__"xiaolu11.c",
]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}
