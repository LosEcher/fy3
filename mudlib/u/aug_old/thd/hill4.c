// thd:hill4.c

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
·���п鼫�����ʯ����������������֮����������ƫƫ�ɲ�������
�δ����ɴζ����������˴��򶫲�Զ��һɽ��Ҳ��˱���������������Ϊ
�һ�������֮����
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "southdown" : __DIR__"hill3",  
          "east" : __DIR__"front_hole",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

