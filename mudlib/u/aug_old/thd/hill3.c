// thd:hill3.c

inherit ROOM;

void create()
{
      set("short", "ɽ·");
	set("long", @LONG
�����ɽ·�ر��ͣ��еĵط�����������ʮ�����ϵ���ǣ����о�
���Ṧ�߾��ѵ���˴�����·������Щ�Ӳ�Ұ��ȷ�ǳ��ĺܺã�һ����Ȼ
��⡣����ȥ�����������ˡ�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "northup" : __DIR__"hill4",  
          "southwest" : __DIR__"hill2",        
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

