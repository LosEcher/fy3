// Room: /d/suzhou/baigongti.c

inherit ROOM;

void create()
{
	set("short", "�׹���");
	set("long", @LONG
�����̰����ԡ�����������ǧ֦��������һ����׺�������쳣���ഫ�ƴ���
ʫ�˰׾�����������̫���ڼ䣬Ϊ��ũ��ˮ�����ֽ̼�ͨ���ڴ˴��˽��˳��̡�
������ǣ�������������ˡ�ʹ���������ǳ������Ϊ��������ƴ˵�Ϊ���׹�
�̡���
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
		"west" :__DIR__"huan",
		"east" :__DIR__"jiaowai",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
