// thd:hill8.c

inherit ROOM;

void create()
{
      set("short", "ɽ·");
	set("long", @LONG
�����Ѿ��ܸ��ˣ���Ҳ�ܴ�����ɽ���ϣ��㶼����ҡҡ��׹֮�С�
ɽ·����һ��һʯ��һ��һľ�䶼ƽ����ȷ�������ֳ�һ����Ȼ��⣬��
���������еĻ������̡��л���Ҷ���ܱ���ġ�����������Ҷ���ܳ�Ϊһ
���羰��
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "eastup" : __DIR__"yun_jian",
          "southdown" : __DIR__"table",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

