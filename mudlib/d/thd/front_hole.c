// thd:front_hole.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "������ǰ");
	set("long", @LONG
����������ǰ��һ��ƽ�ء����ܹ�ʯ���������������ߣ�����ɽ����
����ɭȻ�����ˣ���Ȼ��֮�����ɵĻ��һ�󾪡�������Ϳ�����������
������ڣ������һ�������֮���������㻹�ǲ�Ҫ��������Ϊ�á�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "east" : __DIR__"qiulong_hole",
          "west" : __DIR__"hill4",
	]));
      
	setup();
	replace_program(ROOM);
}

