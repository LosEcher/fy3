// Room: /d/suzhou/dalu1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
�������������������ݵĹٵ������ڴ˴��������ݣ������������˲�������
��Ŀ��ˡ����������ꡢ������С�����������ӡ����ֲ��ѡ���·���Ե�������
��ҡ�ڲ���������ͨ�����ݣ������������ݡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"southwest" :__DIR__"guandao2",
		"east" :__DIR__"qingshiru1",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
