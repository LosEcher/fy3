//taiyefu	
  

inherit ROOM;

void create()
{
	set("short", "��̫ү��");
	set("long", @LONG
һ�����ţ��Ϳ������������ǽ�ϵ�һ���ͻ���ɽ�����á������
��̨�Ϸ����������������ʵĿ���һ�ź�ľ�����Ӿ��ڳ�̨��ǰ�档
���ſ�������һ�����ӣ����������ļҾ߶��Ǻ�ľ�ģ�����Ĺ��ս���
�����һƬ�����ĺ�⡣
LONG
	);

	set("exits", ([
		"south" : __DIR__"huayuan",
		 		 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

