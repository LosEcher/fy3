// thd:hill9.c

inherit ROOM;

void create()
{
      set("short", "ɽ·");
	set("long", @LONG
��������ȥ���ǵ�ָ���ɽ���ˡ�ɽ·����һ��һʯ��һ��һľ�䶼
ƽ����ȷ�������ֳ�һ����Ȼ��⣬�����������еĻ������̡��л���Ҷ
���ܱ���ġ�����������Ҷ���ܳ�Ϊһ���羰��
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "northup" : __DIR__"peak",
          "southdown" : __DIR__"yun_jian",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

