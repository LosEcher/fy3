// Room: /d/taohua/xiaoyucun.c

inherit ROOM;

void create()
{
	set("short", "С���");
	set("long", @LONG
��û�п���һ����Ӱ������֣������Ǹ�С�������ֲ�֪
����Ұ��Ұ�ݣ���ش��������Ժ���ֻ����Լ��������С�ݷ�
��������һ��С��·����·�����������������һ����ȥ����
�����롣��Ȼ���˿���İ��š�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"haitan.c",
  "north" : __DIR__"100.c",
"east" : __DIR__"shuli.c",
]));
	set("no_clean_up", 0);
    set("outdoors", "taohua");

	setup();
	replace_program(ROOM);
}
