//canchang
  

inherit ROOM;

void create()
{
	set("short", "�˳�");
	set("long", @LONG
���������������Ĳ˳�������ʪʪ�ĳ���û�иɵ�ʱ��С��С����
������ȥ���뾡�������˻ؼҡ������������̯�Ķ�Ҫ����������Ķ��
�������ѡ�
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		 
		"south" : __DIR__"eba",
		"west" : __DIR__"wendingnan1",
		 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

