//sushe
  

inherit ROOM;

void create()
{
	set("short", "��Ա����");
	set("long", @LONG
��������ϷԺ����Ա����Ϣ�ĵط����ü��Ŵ�ռ�˷���Ĵ�룬��
���е�Ů���·����߰��㣬�����������е�Ů�ľͻ���һ��˯�������ǽ
���м������ǵĻ����и�С���ڴ������ء�
LONG
	);

	set("exits", ([
		"south" : __DIR__"xiyuan",
	]));
	set("objects", ([
	__DIR__"npc/xiaohai" : 2,
	]));

	setup();
	replace_program(ROOM);
}

