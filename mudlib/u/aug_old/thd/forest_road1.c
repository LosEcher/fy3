// thd:forest_road1.c

inherit ROOM;

void create()
{
      set("short", "����С��");
	set("long", @LONG
����������С��������������������ͷ�����֣��������������Ѿ�
��������Χ����������Ҳ�ƺ��������˵�������Ⱦ��ƽ��һ��ʫ�黭��
������µ�·���ϱ��������������š�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "north" : __DIR__"forest_start",
          "south" : __DIR__"np",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

