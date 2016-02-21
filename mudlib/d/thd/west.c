// thd:west.c
// 97.7.18 by Aug
#include <localtime.h>

inherit ROOM;

void create()
{
      mapping gt;
 	
      set("short", "������");
	set("long", @LONG
���ڣ�����������һ���һ��ĺ����������˶��Ѿ����һ�����Χ
����û�о�ͷ���һ����У����Կ����������۵ĺܶ�����·��ʹ�㲻֪��
������������ȷ�ĵ�·�������һ���������Ҳ���������С·����⣡
�������Ѿ��ֱ治����·�ˡ�����ֻ����һ����һ���ˣ�Ҫ����ʵ���߲�
�������Ǿ�ֻ�к�(yell)Ҫ�����ˣ�˵���������������㡣
LONG
	);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/jiading" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      gt = NATURE_D->game_time(1);
      if((gt[LT_HOUR] <5 )&&(gt[LT_HOUR] >=2)) 
      {
	  set("exits", ([ /* sizeof() == 8 */
		"east" : __DIR__"neizhen",
		"west" : __DIR__"west1",
		"north": __DIR__"north1",
		"south": __DIR__"south1",
       	"northeast": __DIR__"nteast1",
            "northwest": __DIR__"ntwest1",
            "southeast": __DIR__"steast1",
            "southwest": __DIR__"stwest1",
	  ]));
      }
      else
      {
	  set("exits", ([ /* sizeof() == 8 */
		"east" : __DIR__"east1",
		"west" : __DIR__"west1",
		"north": __DIR__"north1",
		"south": __DIR__"south1",
       	"northeast": __DIR__"nteast1",
            "northwest": __DIR__"ntwest1",
            "southeast": __DIR__"steast1",
            "southwest": __DIR__"stwest1",
	  ]));
      }


	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

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
