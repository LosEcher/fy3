//zoulang1
  

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������Ŵ��ú�������ȣ�����������һСʯ���ţ�������һ��С
��԰�����������������������޼����ݡ��������ȵľ�ͷ���ſ��ţ���
֪�ǲ��Ǿ���ʦү����
LONG
	);

	set("exits", ([
		"south" : __DIR__"zoulang",
		"north" : __DIR__"shiye",
		 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

