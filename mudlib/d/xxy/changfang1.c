// Room: /d/xxy/changfang1.c

inherit ROOM;

void create()
{
	set("short", "�󳨷�");
	set("long", @LONG
һ��ܴ�ķ���,���������ﳤͨ��,���ϻ�������ൾ��,������Ϊ��
��,�����ֻ���ڵ��ϴպ�.�����з���һ�ɺ���ζ.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yongdao2",
]));
       set("sleep_room",1);
	setup();
	replace_program(ROOM);
}
