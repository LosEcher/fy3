// thd:chuzhen.c
//#include <localtime.h>

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
�����������ĺ���̧ͷ��ȥ������������֦���һ����������ļ�϶
���м��������������ľ����������У���Χ�����ĵ�ֻ��������
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/jiading" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "north": __DIR__"in_road1",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

