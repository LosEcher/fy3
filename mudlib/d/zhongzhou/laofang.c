//laofang
  

inherit ROOM;

void create()
{
	set("short", "�η�");
	set("long", @LONG
	����һ��������ʪ���η������ϼ�ֻ����Ī�������������Ҷ����ԡ���ֻ����
���ϵ�һ��С����͸һ�����������ֵط����һ�����Ҫ���衣�㲻�����о�����
����������ѵĻ����Խ������������ȥ��
LONG
	);

	set("exits", ([
		"out" : __DIR__"xunbu",
		
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

