//eba
  

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
�����������ܲ���˵��ʲô����ʵ���Ǽ�����Թ�����һ����
�˳���һ��ط����ձ����ѣ����˴��ܡ�������å��������ȥ��
LONG
	);

	set("exits", ([
		 
		"north" : __DIR__"canchang",
		"enter" : __DIR__"liwu",
		 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

