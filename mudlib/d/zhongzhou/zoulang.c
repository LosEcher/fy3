//zoulang
  

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������Ŵ��ú�������ȣ�����������һСʯ���ţ�������һ��С
��԰�����������������������޼����ݡ��������ȵľ�ͷ���ſ��ţ���
֪�ǲ��Ǿ���ʦү��.
LONG
	);

	set("exits", ([
		"west" : __DIR__"huayuan",
		"north" : __DIR__"zoulang1",
		"out"  : __DIR__"yamen",

	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

