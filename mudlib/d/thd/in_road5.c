// thd:in_road5.c

inherit ROOM;

void create()
{
      set("short", "�ּ�С·");
	set("long", @LONG
������һ��С·�ϡ����ܾ����ĵģ�ʲô������û�У�ֻ��żȻ����
���������������������������������һ�Ʈ������졣�������洫����
΢����ˮ֮����ͣ��ʮ���ö���
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
          "southeast" : __DIR__"bath_room",
	    "west" : __DIR__"square",
	    "east" : __DIR__"in_road6",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

