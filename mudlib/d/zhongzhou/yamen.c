//yamen
  

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
��������������ţ����Ե��ྲ����������������е��ľ�������
���ߵ���������Ŀ����㣬����Ҫ״����ˡ�����������������
����Ҫ�������ʦү����һ�������ѣ����ɰ���
LONG
	);

	set("exits", ([
		"east" : __DIR__"wendingbei3",
		"enter" : __DIR__"zoulang",
		
	]));
	 set("objects", ([
	__DIR__"npc/yayi" : 2,
	]));

	setup();
	replace_program(ROOM);
}

