// thd:steast1.c
// 97.7.18 by Aug
#include <localtime.h>

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
      mapping gt;
 	int i;

      i=random(3);
      switch(i)
      {
          case 0:
            set("short", "ɳĮ");
	      set("long", @LONG
������һ��ɳĮ���������ȥ��С��һ�۶��������ߣ�ʱ�����Կ���
ɳ�ӱ��紵���ڿ��з��衣
LONG
	      );
            break;
          case 1:
            set("short", "����");
	      set("long", @LONG
������һ�������վ������£����ܶ��Ƕ��͵�ɽ�ڣ���Զ����������
�ߵ��������Ϊ׳�ۡ�
LONG
	      );
            break;
          case 2:
            set("short", "��̲");
	      set("long", @LONG
������һ����̲�����˲�ʱ��ӿ�������£��������ε��ε���Ĵ�
���˲��ɵ����������������������������˵ľ�ɫ��
LONG
	      );
            break;
      }

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/jiading" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      gt = NATURE_D->game_time(1);
      if((gt[LT_HOUR] <20 )&&(gt[LT_HOUR] >=17)) 
      {
	  set("exits", ([ /* sizeof() == 8 */
		"east" : __DIR__"east1",
		"west" : __DIR__"west1",
		"north": __DIR__"north1",
		"south": __DIR__"south1",
       	"northeast": __DIR__"nteast1",
            "northwest": __DIR__"ntwest1",
            "southeast": __DIR__"sjt",
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
