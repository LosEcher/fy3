// Room: /u/swordman/yangzhou/guandao1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
����һ���ɹٸ�����ĵ�·���ǳ����������ݰ�������
���ϱ���ͨҪ�����������Զ��ˣ���ʱ��������ĺ͸ϳ���
������
LONG
	);
	set("no_clean_up", 0);
	set("light_up", 1);
	set("outdoors", "/u/swordman");
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"guandao",
  "southeast" : __DIR__"guandao2",
]));

	setup();
	replace_program(ROOM);
}
