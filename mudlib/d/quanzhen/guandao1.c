// guandao1.c �ٵ�


inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
	����һ�����������ͨ�������򡣵��ϵ����˺ܶ࣬����ǵ���
ͷ�Լ����Լ���·����Ȼ������������õõ�����������һ�������ƥ
���������߷ɳ۶�����������һƬ��ɳ��
LONG
	);

	set("exits", ([
		"northeast":"/d/jindezheng/to_qz",
		"west" : __DIR__"guandao2",
	]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}
