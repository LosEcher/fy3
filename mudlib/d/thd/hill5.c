// thd:hill5.c

inherit ROOM;

void create()
{
      set("short", "ɽ·");
	set("long", @LONG
�������������ϵ�ɽ·��ɽ·����һ��һʯ��һ��һľ�䶼ƽ����ȷ
�������ֳ�һ����Ȼ��⣬�����������еĻ������̡��л���Ҷ���ܱ���
�ġ�����������Ҷ���ܳ�Ϊһ���羰��ϰϰ���紵�������ɵ�ʹ��ɽ֮��
����һ��Ͷ�����Ȼ���泩֮�С�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "northup" : __DIR__"hill6",  
          "southeast" : __DIR__"hill2",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

