// thd:hill2.c

inherit ROOM;

void create()
{
      set("short", "����ƺ");
	set("long", @LONG
�����ǿ���΢ƽ��Щ��ɽ�ء����˵���������Ҫ��Ϣһ�����ٿ�ʼ��
�����̡�������ɽ·һ��Ϊ���������ɽ·��ȥ�������ģ������ߵ�ɽ·
һֱͬ��ɽ����
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
          "northeast" : __DIR__"hill3",  
          "northwest" : __DIR__"hill5",        
          "southdown" : __DIR__"hill1",     
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

