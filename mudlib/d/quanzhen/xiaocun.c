// xiaocun.c С��ׯ


inherit ROOM;

void create()
{
	set("short", "С��ׯ");
	set("long", @LONG
	����һƬС��ׯ��������һ��Сɽ�������ľ����Ƕ����ٵ���
��ȥ����Ȼ�볤���򲻹����塢�����ɽ·��������Ը�������и�Ů��֯��
�ճ����������Ъ���ϴ�ͳ��������Ȼ��ƶ��ȴ������ң��
LONG
	);

	set("exits", ([
		"northwest" : __DIR__"guchang",
		"southdown" : __DIR__"shanlu1",
	]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}
