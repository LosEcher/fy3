// thd:square.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "���䳡");
	set("long", @LONG
�������һ��������䳡������ʮ�ֿ�������һ�������ʲô�ˣ���
���ܽ�����Ķ��������ǽ����ϵĸ����ˡ��������Ķ�Ķ����ڹ���˭��
������Щ��ǳ��ȭ�Ź�����������Ϣ�ҿ����������������߾����һ���
�����´����ˡ�
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/muren" :  2,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 4 */
          "south" : __DIR__"in_road2",
	    "north" : __DIR__"in_road4",
	    "east" : __DIR__"in_road5",
	    "west" : __DIR__"in_road3",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

