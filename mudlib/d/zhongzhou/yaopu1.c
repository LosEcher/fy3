//yaopu1
  

inherit ROOM;

void create()
{
	set("short", "ҩ����Ժ");
	set("long", @LONG
�������ҩ����Ժ����һ�߽����;���һ�����ˡ�ֻ��ʮ��ֻ¯��
���ڰ�ҩ���м���ҩ�̵Ļ����æµ�š���Ҫ��ҩ�Ļ���Ҫ����ҩ����
�Ž�ҩ����㻹�������ʻ�Ƽ��ֳ��õ�ҩ����
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"out" : __DIR__"yaopu",
		
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

