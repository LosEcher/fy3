// caodi.c �ݵ�
// By Lgg,1998.9

inherit ROOM;

void create()
{
	set("short", "�ݵ�");
	set("long", @LONG
	������һƬ�ݵأ��ݺ��������û��С�ȡ��ݼ�ɢ����һЩ��
����΢�紵�����ҷ��˱ǡ�������ʱ���С������ˡ���������������һЩ
��ͷ���İ�ɫ���۷��ڲݵ��Ϸ���������
LONG
	);

	set("exits", ([
		"south" : __DIR__"mumen",
		"east" : __DIR__"caodi2",
		"northeast" : __DIR__"shulin3",
	]));

	set("objects", ([ 
		__DIR__"npc/yufeng" : random(5),
	]));
	
	setup();
	replace_program(ROOM);
}