// thd:jinzhen.c
// 97.7.18 by Aug
//#include <localtime.h>

inherit ROOM;

void init()
{
	add_action("do_yell", "yell");
}

int do_yell(string arg)
{
	object me;
	int i;

      if((arg!="out")&&(arg!="��ȥ")) return 0;

	me=this_player();	
      message_vision(
"
$N����һ���������˹�������$N�������ƣ�$NҲ������������ʲô��˼��
ͻȻ��ת��������ȥ��$Nһ��������������Ҫ������󣬸Ͻ�������ȥ��

�����������������һ����д�����ȥ����Ȼ$N�����ס·;���ɼ���
��һ��$N��˵ʲô���ǲ���·�ˡ�

����������߰����߰���·������Զû�о�ͷ��ͻȻ����ͣ���˽Ų���
�㶨��һ�����Ѿ������һ����⡣
���հ����㻨���˴�����������ڳ����һ���

\n", me);

	me->move(__DIR__"wroad"); 

	i=me->query("max_kee");
	me->set("eff_kee", me->query("eff_kee")-(i/20)-random(i/5) ); 
	if(me->query("kee")>me->query("eff_kee")) 
		me->set("kee",me->query("eff_kee"));

	return 1;
}

void create()
{
      set("short", "���");
	set("long", @LONG
�������һ�����Ľ��󴦣�һ�߽������ǰ�ľ�ɫ�ͺ�Ȼһ�䣬ֻ
����Χ����֦������Ĵ�����һ�Ž���һ�ţ��������飬ѹ����������
������Ķ������������ܰ�Χ�����ּ䣬�а���С·��Զ�������ȥ��
LONG
	);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/jiading" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 8 */
          "east" : __DIR__"east",
          "west" : __DIR__"west",
  	    "north": __DIR__"north",
          "south": __DIR__"south",
          "northeast": __DIR__"nteast",
          "northwest": __DIR__"ntwest",
          "southeast": __DIR__"steast",
          "southwest": __DIR__"stwest",
	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

