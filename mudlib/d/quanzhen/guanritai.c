// guanritai.c ����̨


inherit ROOM;

void create()
{
	set("short", "����̨");
	set("long", @LONG
	����������ɽ�ϵĹ���̨����֪�ĳ��Ĵ��������������������ƽ
̨��������հ�ճ��������������ɽ�Ʒǳ�����������һ�������±�������
�°���Ʈ�����治֪���ںξ���
LONG
	);

	set("exits", ([
		"north" : __DIR__"shijie9",
	]));

	set("objects",([
		__DIR__"npc/youke" : 1,
		__DIR__"npc/xiangke" : 1,
	]));
set("outdoors","/d/quanzhen");

	setup();
	replace_program(ROOM);
}
