// nanjie.c �Ͻ�


inherit ROOM;

void create()
{
	set("short", "�Ͻ�");
	set("long", @LONG
	�����ǳ������Ͻ֣�˵�ǽ֣�������һ��С��ͬ���ѡ�·��һ����
Ҳû�С��ֵľ�ͷ��һ��С�š����������������ǳ�����������ˡ�
LONG
	);

	set("exits", ([
		"north" : __DIR__"zhongxin",
		"southeast" : __DIR__"fu-cemen",
	]));

	setup();
	replace_program(ROOM);
}