// thd:in_road3.c

inherit ROOM;

void create()
{
      set("short", "�ּ�С·");
	set("long", @LONG
�������ּ�С·���м���С�ݵ�׺���һ����У��ƺ������������һ�
�ķ�ɡ��������С���ر�ľ���ʲô������û�У�������������Ҳ����
���˽Ų����ƺ����³���ʲô�ˡ����Ǳ��ߵ�С��ʱ��ʱ���е�����֮��
��������ʲô�������������
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
	    "north" : __DIR__"practise_room",
	    "east" : __DIR__"square",
	    "west" : __DIR__"sleeproom",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

