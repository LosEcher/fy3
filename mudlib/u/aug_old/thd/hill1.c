// thd:hill1.c

inherit ROOM;

void create()
{
      set("short", "ɽ·");
	set("long", @LONG
��������᫵�ɽ·����ָ�嵱Ȼû��ʯ�ף���ֻ��һ���˲ȳ�������
ɽ·������·����Щ���ͣ����һ����Ӷ���������Ȼ���ᱻ��㶸����
ס������ֻ��ɽ·����㣬�����·�ɳ����ء�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "northup" : __DIR__"hill2",     
          "southdown" : __DIR__"hill_foot",     
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

