// thd:table.c

inherit ROOM;

void create()
{
      set("short", "Х��̨");
	set("long", @LONG
������Х��̨���˴�������գ��㵽����������Ҳ���ɵÿ���������
���ƺ���ʱ��ؼ���Ҳû��ʲô�����ˡ�������ֻ��һ������羵�ľ�ʯ
����������ֻ�ܿ���һ��������翵��㡣�ǰ�������������������翵ģ�
�����ֺα��ں�����������һ��һʧ�أ��������򶫿��Լ���һ���ٲ���
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
          "southwest" : __DIR__"hill7",
          "northup" : __DIR__"hill8",
          "east" : __DIR__"fall",
  	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

