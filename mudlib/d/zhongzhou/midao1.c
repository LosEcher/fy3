//midao1
  

inherit ROOM;

void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
	����һ���ܵ����ܵ���С����ǿ��������ͨ�������Ե�ǽ�ϵ����͵ƣ�Ҳ��֪
����ܵ�����ͨ�����
LONG
	);

	set("exits", ([
		 "southeast" : __DIR__"midao",
		 "northup"  : __DIR__ "yanling2",
		 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

