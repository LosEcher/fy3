// thd:hill7.c

inherit ROOM;

void create()
{
      set("short", "ɽ·");
	set("long", @LONG
ɽ·�������ڴ˷ֲ档������һ��ɽ�£���������ȥ����Х��̨�ˡ�
�ڴ˴�������һ�ô������������һ������Һ�����֮����ʵ���˶�Ŀһ��
���������֦Ҷ��ʢ�������Ӵ����в��������ʷ�ˡ������⺣��֮��
����γ����������أ���Ͳ��ö�֪�ˡ�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "northwest" : __DIR__"chiff",
          "northeast" : __DIR__"table",    
          "southdown" : __DIR__"hill6",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

