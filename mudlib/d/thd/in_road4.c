// thd:in_road4.c

inherit ROOM;

void create()
{
      set("short", "�ּ�С·");
	set("long", @LONG
�������ּ�С·�����ܷۺ���һ�ʱ��ʱ��Ʈ��������Ƭ�仨����̣
����մ���仨�����࣬���������ŵ�С·�ϣ�����һ����ζ�������ߵ�С
�ݳ���ð���������̣��ƺ���������ʲô������·�Ķ�������һ����Ĵ�
���ˡ�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
          "south" : __DIR__"square",
	    "north" : __DIR__"hall",
	    "west" : __DIR__"medicine_room",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

