// thd:yard1.c

inherit ROOM;

void create()
{
      set("short", "��԰");
	set("long", @LONG
���Ǹ���԰�����һ����У���ֻ����������ܿ������һ���������֮
��Ļ�����ľ�����԰����Ļ��ݶ��ǻƵ����������͸���������Ʒ�֡�
���������ܿ�������ϡ��ŹֵĻ��ݣ��еĻ��ж��ء�����԰���߶�֮ʱ
����Ҫ����һ��໡�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/huang_yaoshi" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
	    "southwest" : __DIR__"hall",
	    "north" : __DIR__"yard2",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

