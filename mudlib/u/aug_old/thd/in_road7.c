// thd:in_road7.c

inherit ROOM;

void create()
{
      set("short", "�ּ�С·");
	set("long", @LONG
������һ���ּ�С·�ϡ����ܵ��һ����ֿ�ʼ��������������ǰ�ƺ�
����������·���㿪ʼ�ֲ����������·�ˡ���������һ�����ʵ��̫��
���ˣ�������ô����ȥ����������·��Ҫ�ֲ����ˡ�������Ȼ����ƽ����
ʵ��ȷ�̺��������ɱ����
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "southwest" : __DIR__"in_road6",
	    "north" : __DIR__"tomb_front",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

