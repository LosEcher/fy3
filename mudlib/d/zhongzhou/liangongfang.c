//liangongfang
  

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
��������ϷԺ����Ա�������������ڵ������ź��ĵ�̺���м���
��Ա�������������������������һ������ǰ����Ǿ��������ġ���
�������ǲ���Ҳ�붯�����ӹǣ�����
LONG
	);

	set("exits", ([
		"north" : __DIR__"xiyuan",
	]));
	set("objects", ([
		__DIR__"npc/yanyuan" : 1,
		__DIR__"npc/yanyuan1" : 1,
	]));

	setup();
	replace_program(ROOM);
}

