// thd:in_road2.c

inherit ROOM;

void create()
{
      set("short", "�ּ�С·");
	set("long", @LONG
������һ���ּ�С·�ϡ��ڷ�ʢ���һ��������Ѿ��ܹ�����Щ������
���ɵķ��ݡ���Щ�������һ������Ե���ôЭ�����ƺ�������������һ�
�ֵ�һ���֣�����������Ľ������ɴοɼ�����ߵ�ˮƽ����Ķ��߾���
������һ��С�ݡ�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
          "south" : __DIR__"in_road1",
	    "north" : __DIR__"square",
	    "east" : __DIR__"kitchen",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

