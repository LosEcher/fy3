// Room: /d/new/tianxia/room11.c

inherit ROOM;

void create()
{
	set("short", "ʯ��");
	set("long", @LONG
һ�����ķ�����ʯ��,�ıߵ�ʯ�ڴ�ĥ�ù⻬�ޱ�.���й�Ӱ����,��֪��
�Ǵ���͸������.�춥ʯ���ϲ�֪˭����ָ����һ����:[�������,������Ե].
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"danger11",
]));

	setup();
	replace_program(ROOM);
}
