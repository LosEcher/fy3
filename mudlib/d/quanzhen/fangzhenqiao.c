// fangzhenqiao.c ������


inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
	���ʯ�ף���ǰ��һ��ʯͷ���ɵ�СС���š����������ϵ�����
���������������ɽ�Ʒǳ�����������һ�������±��������°���Ʈ������
��֪���ںξ���
LONG
	);

	set("exits", ([
		"north" : __DIR__"yuzhengong",
		"southdown" : __DIR__"shijie7",
	]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}
