// thd:in_road1.c
// 97.7.13  by Aug

inherit ROOM;

void create()
{
      set("short", "�ּ�С·");
	set("long", @LONG
������С·�����Զ����һ�����������ȥ������һ���ķ�ɫ�Ʋʣ�
����ɷ�Ǻÿ����۷䡢�ʵ��ڻ�������ţ���������һ�����������Ի���
ʱ����һ��������������һ���ƺ�������ô�����á�
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/yapu2" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "south" : __DIR__"neizhen",
	    "north" : __DIR__"in_road2",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

