// xiaowu1.c С��
// By Lgg,1998.9

inherit ROOM;

void create()
{
	set("short", "С��");
	set("long", @LONG
	���߽���һ��С�ݣ������С������һ��С���Ų��±�Ķ����ˡ�
���Ϻ����м���������������Ĵֲ�����ϴ�ĸɸɾ�����
LONG
	);

	set("exits", ([
		"northwest" : __DIR__"xiuxishi",
		"east" : __DIR__"xiaoting",
	]));

	set("objects", ([ 
		__DIR__"obj/fengjiang" : 3,
		__DIR__"obj/fengmi" : 1,
	]));

	setup();
	replace_program(ROOM);
}