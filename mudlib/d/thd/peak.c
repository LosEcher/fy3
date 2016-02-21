// thd:peak.c
// 97.7.14 bu Aug

#include <ansi.h>

inherit ROOM;

void create()
{
      set("short", "��ָ��");
	set("long", @LONG
������ǵ�ָ��ľ���������ķ����겻Ϣ���ڱ���֮�����������
��վ��ס�ˣ���ʹ��ƽʱ������վ��ҲҪ���Ĳ��ٵ��ڹ���������������
ȥ������һ���޼ʵĴ󺣣�����������������������Ȼ�����ǣ�������
�����������޵еĺ�������������Ҳ�������Ŀ����һ�����ȫò��������
Ҳ�ܿ��ĺ����У���ϧ�㲻һ������ȥ��
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "southdown" : __DIR__"hill9",
  	]));
      
	set("outdoors", "thd");

	setup();
}

void init()
{
	object ob;

	if( interactive(ob = this_player()) ) 
	{
		remove_call_out("setup_obj");
		call_out("setup_obj", 1, ob);
	}

	add_action("do_jump", "jump");
}

int do_jump(string arg)
{
	object me,ob;
	int i,j;

	if((arg!="in")&&(arg!="����")) return 0;

	me=this_player();

	remove_call_out("in_peak");

	message_vision("$N�����ƵĴӵ�ָ����������ȥ��\n",me);

	me->move(__DIR__"in_air");

	message("vision",
"\n
��������ڿ��з����½������Եķ���������š�
����ǰֻ��һ���ŵķۺ�ɫ����Щɫ��Խ��Խ��Խ��Խ�󡭡�
\n",environment(me));

	ob = present("dou peng", me);
	if(objectp(ob))
		message("vision",YEL+"����Ķ��񱻷紵��Ʈ����������½��ٶȼ����ˡ�\n\n"NOR,environment(me));

	call_out("flying", 12, me);

	return 1;
}

void flying(object me)
{
	int i,j;
	object ob;

	message("vision","Ҳ��֪���˶�ã������'��'��һ���������ص�ˤ���˵��ϡ�\n",environment(me));

	me->move(__DIR__"in_road1");
	
	ob = present("dou peng", me);
	if(objectp(ob)) i=2; else i=1;

	j=me->query("max_kee");
	if(me->skill("dodge")<30)	
		me->set("kee", 0);	
	else
	{	
		j=j/2+random(180-me->query_skill("dodge")*i)/100*j;

		if(j>me->query("kee"))
			 j=me->query("kee");

	      me->set("kee", me->query("kee")-j);
	}

	if(me->query("kee")==0)		
	{
		me->die();		
		message("channel:rumor", YEL +"��ҥ�ԡ�"+ "ĳ�ˣ�"+me->query("name")+"���µ�ָ��ˤ���ˡ�\n"NOR,users());
	}	
}

void setup_obj(object ob)
{
    call_out("in_peak", 5,ob);
}

void in_peak(object ob)
{
	object *all;
	int i,j;

	i=0;
	all = all_inventory(this_object()); 

	for (j=0; j<sizeof(all); j++) 
	{
		if( all[j]==ob) i=1;	
	}

	if(i==0) return;

	write(BLU+"����ķ�̫���ˣ��㲻�ò�����������������硣\n"NOR);

	i=50+random(100);

	if(i>ob->query("force")) 
	{
		ob->set("force",0);
		message_vision(YEL+
"$N�������������ˣ�$N��Ҳ֧�ֲ�ס�ˣ�
$N����紵���˵�ָ�塣

\n"NOR,ob);			
		ob->move(__DIR__"hill9");
	}
	else
	{
		ob->set("force", ob->query("force")-i);	

		call_out("in_peak", 5,ob);
	}
}

int valid_leave(object me, string dir)
{
	if(dir=="southdown") remove_call_out("in_peak");

	return ::valid_leave(me, dir);
}
