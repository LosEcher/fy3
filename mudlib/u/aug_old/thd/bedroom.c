// thd:bedroom.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "����");
	set("long", @LONG
���ǻ�ҩʦ�����ҡ����ڳ���ܼ򵥣�ֻ����һ����һ����һ�Σ���
һ���¼ܡ������ǽ�����ȴ������򿪴���������ܿ����޾��������֡�
���»����������������������ʮ�����ԣ����ž��ǻ�ҩʦ�ճ�����
��ڤ˼֮���ɡ�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/huang_yaoshi" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
	    "south" : __DIR__"bookroom",
	]));
      
	setup();
	replace_program(ROOM);
}

