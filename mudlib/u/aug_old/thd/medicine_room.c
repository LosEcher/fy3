// thd:medicine_room.c
// 97.7.13 by Aug

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
�����ǻƵ����������������������������ɫ���������¯�����ܶ�
���Ÿ��ָ��������ҩ�ġ���Ϊ¯�����ղ�Ϩ���������������������ƣ�
ƽ��һ���������ա�һ���������Ա߲�ͣ���Ȼ𡣻�ҩʦ�ľ�����¶��
���������������ѧ��������֮����Ҳ���������������ԡ�
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/yapu7" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
	    "east" : __DIR__"in_road4",
	]));
      
	set("no_fight", 1);

	setup();
//	replace_program(ROOM);
}

int valid_leave(object me, string dir)
{
  	if((dir!="east")||(me->query_temp("in_lian")!=1)) 
		return ::valid_leave(me, dir);

	return notify_fail(
"��ĵ�ҩ��û������ô���뿪�أ�
�����һ��Ҫ�뿪�͵÷���(halt)���ƾŻ���¶�衣\n");
}

void init()
{
	add_action("do_mingsi", "mingsi");
}


int do_mingsi(string arg)
{
	if(this_player()->query_temp("in_lian")!=1) return 0;

	write(
"������ר�����ƾŻ���¶�裬��ô��ڤ˼�أ�
��һ��Ҫڤ˼��Ҫ����(halt)���ƾŻ���¶�衣\n");		

	return 1;
}
