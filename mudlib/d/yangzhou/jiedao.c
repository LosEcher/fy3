// Room: /u/swordman/yangzhou/jiedao.c

inherit ROOM;

void create()
{
	set("short", "�ֵ�");
	set("long", @LONG
���������ݳǱ���һ��С���ϣ�����������Ľ�Զ��������徲���š�
����ͨ������������������ɽׯ��һ·�����������ﻨ�㣬�����Ŀ�
���ơ���Զ����һ�����̵�С�������������µ��������ˡ�

LONG
	);
	set("no_clean_up", 0);
	set("light_up", 1);
	set("outdoors", "/u/swordman");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"jiedao1",
  "south" : __DIR__"xijie2",
]));

	setup();
	replace_program(ROOM);
}
